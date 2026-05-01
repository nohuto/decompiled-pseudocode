/*
 * XREFs of CrmStateRoutineLogicalToComparisonState @ 0x18004BA70
 * Callers:
 *     CrmComparisonRoutineGameModeOff @ 0x180012C90 (CrmComparisonRoutineGameModeOff.c)
 *     CrmComparisonRoutineSystemDiskUsageUnder70 @ 0x180012FD0 (CrmComparisonRoutineSystemDiskUsageUnder70.c)
 *     CrmComparisonRoutineCPUUsageUnder80 @ 0x180013000 (CrmComparisonRoutineCPUUsageUnder80.c)
 *     CrmComparisonRoutineConstrainedModeOff @ 0x1800132C0 (CrmComparisonRoutineConstrainedModeOff.c)
 *     CrmComparisonRoutineNotCsDc @ 0x1800132E0 (CrmComparisonRoutineNotCsDc.c)
 *     CrmComparisonRoutineThermalOff @ 0x180013500 (CrmComparisonRoutineThermalOff.c)
 *     CrmComparisonRoutinePowerSavingOff @ 0x180013520 (CrmComparisonRoutinePowerSavingOff.c)
 *     CrmComparisonRoutineUserAway @ 0x1800140C0 (CrmComparisonRoutineUserAway.c)
 *     CrmComparisonRoutineACBatteryOver20OrBatteryOver50 @ 0x1800140E0 (CrmComparisonRoutineACBatteryOver20OrBatteryOver50.c)
 *     CrmComparisonRoutineNotDcDisplayOff @ 0x180014120 (CrmComparisonRoutineNotDcDisplayOff.c)
 *     CrmComparisonRoutineSystemDiskUsageUnder15 @ 0x180014170 (CrmComparisonRoutineSystemDiskUsageUnder15.c)
 *     CrmComparisonRoutineCPUUsageUnder25 @ 0x1800141A0 (CrmComparisonRoutineCPUUsageUnder25.c)
 *     CrmComparisonRoutineGPUUsageUnder5 @ 0x1800141D0 (CrmComparisonRoutineGPUUsageUnder5.c)
 *     CrmComparisonRoutineConnectedStandbyOff @ 0x180014270 (CrmComparisonRoutineConnectedStandbyOff.c)
 *     CrmComparisonRoutineAC @ 0x1800142A0 (CrmComparisonRoutineAC.c)
 *     CrmComparisonRoutineFanNoiseBelowMed @ 0x180014300 (CrmComparisonRoutineFanNoiseBelowMed.c)
 *     CrmComparisonRoutineFanNoiseBelowLow @ 0x180014330 (CrmComparisonRoutineFanNoiseBelowLow.c)
 *     CrmComparisonRoutineFanNoiseBelowHigh @ 0x180014360 (CrmComparisonRoutineFanNoiseBelowHigh.c)
 *     CrmComparisonRoutineSebLevel @ 0x180042930 (CrmComparisonRoutineSebLevel.c)
 *     CrmComparisonRoutineDisplayOn @ 0x180042F50 (CrmComparisonRoutineDisplayOn.c)
 *     CrmComparisonRoutineUserPresent @ 0x180043010 (CrmComparisonRoutineUserPresent.c)
 *     CrmComparisonRoutineConnectedStandby @ 0x180047730 (CrmComparisonRoutineConnectedStandby.c)
 *     CrmComparisonRoutineDC @ 0x1800486E0 (CrmComparisonRoutineDC.c)
 *     CrmComparisonRoutineBatteryUnder50 @ 0x1800487E0 (CrmComparisonRoutineBatteryUnder50.c)
 *     CrmComparisonRoutineBatteryOver50 @ 0x180048810 (CrmComparisonRoutineBatteryOver50.c)
 *     CrmComparisonRoutineDelayedCsOrNotCs @ 0x180048C90 (CrmComparisonRoutineDelayedCsOrNotCs.c)
 *     CrmComparisonRoutineBatteryOver75 @ 0x180048DF0 (CrmComparisonRoutineBatteryOver75.c)
 *     CrmComparisonRoutineMinutesPassedAtLeast30 @ 0x180048E90 (CrmComparisonRoutineMinutesPassedAtLeast30.c)
 *     CrmComparisonRoutineMoreThanFiveMinutes @ 0x18006CEB0 (CrmComparisonRoutineMoreThanFiveMinutes.c)
 *     CrmComparisonRoutineSimpleLogical @ 0x18006CED0 (CrmComparisonRoutineSimpleLogical.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateRoutineLogicalToComparisonState(int a1)
{
  return a1 != 0 ? 2 : 0;
}
