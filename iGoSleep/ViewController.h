//
//  ViewController.h
//  iGoSleep
//
//  Created by bejoy on 14/9/12.
//  Copyright (c) 2014年 zeng hui. All rights reserved.
//

#import <UIKit/UIKit.h>

@import HealthKit;

@interface ViewController : UIViewController

@property (nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) IBOutlet UILabel *heightValueLabel;

@property (weak, nonatomic) IBOutlet UILabel *weightUnitLabel;
@property (weak, nonatomic) IBOutlet UILabel *bloodValueLabel;
@end

