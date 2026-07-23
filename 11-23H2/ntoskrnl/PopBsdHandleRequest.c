/*
 * XREFs of PopBsdHandleRequest @ 0x14032D618
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140683420 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140683470 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordSleepCheckpointSource @ 0x140801664 (PopRecordSleepCheckpointSource.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x140823760 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopBatteryApplyCompositeState @ 0x1408706C0 (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x140873BB0 (PopRecordDisplayState.c)
 *     PopSetConnectedStandbyMarker @ 0x1408786BC (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x1409808A8 (PopClearConnectedStandbyMarker.c)
 *     PopClearSleepMarker @ 0x140980934 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140980978 (PopClearSystemShutdownMarker.c)
 *     PopRecordAcDcState @ 0x1409813CC (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x140981420 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1409814A0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpoint @ 0x140981610 (PopRecordSleepCheckpoint.c)
 *     PopSetCleanShutdownMarker @ 0x140981650 (PopSetCleanShutdownMarker.c)
 *     PopSetSleepMarker @ 0x1409816A0 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x14098B560 (NtInitiatePowerAction.c)
 *     PdcPoRecordButton @ 0x140997C20 (PdcPoRecordButton.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x14099CC5C (PopEvaluatePowerButtonSuppressionState.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopBsdFlush @ 0x1407A66B4 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407A8778 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
