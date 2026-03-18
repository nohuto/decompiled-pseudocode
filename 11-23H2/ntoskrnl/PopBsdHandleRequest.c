/*
 * XREFs of PopBsdHandleRequest @ 0x14032D388
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140683420 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140683470 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordSleepCheckpointSource @ 0x140801394 (PopRecordSleepCheckpointSource.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140823460 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x140873970 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x14087847C (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x1409806A8 (PopClearConnectedStandbyMarker.c)
 *     PopClearSleepMarker @ 0x140980734 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140980778 (PopClearSystemShutdownMarker.c)
 *     PopRecordAcDcState @ 0x1409811CC (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x140981220 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1409812A0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpoint @ 0x140981410 (PopRecordSleepCheckpoint.c)
 *     PopSetCleanShutdownMarker @ 0x140981450 (PopSetCleanShutdownMarker.c)
 *     PopSetSleepMarker @ 0x1409814A0 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x14098B360 (NtInitiatePowerAction.c)
 *     PdcPoRecordButton @ 0x140997A20 (PdcPoRecordButton.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14099CA5C (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CCE4 (PopQueueWorkItem.c)
 *     PopBsdFlush @ 0x1407A64C4 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8588 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

char __fastcall PopBsdHandleRequest(unsigned int a1)
{
  if ( (a1 & 1) != 0 )
    PopUpdateBsdPowerTransitionReferenceTime();
  if ( (a1 & 8) != 0 )
    return PopBsdFlush(a1);
  PopBsdUpdateRequests |= a1;
  return PopQueueWorkItem((__int64)&PopBsdUpdateWorkItem, DelayedWorkQueue);
}
