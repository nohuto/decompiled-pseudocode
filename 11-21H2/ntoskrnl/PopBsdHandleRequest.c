/*
 * XREFs of PopBsdHandleRequest @ 0x1403697C8
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x1407EC230 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1407EC280 (PopClearUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopSetSleepMarker @ 0x1407FD9E0 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x1407FEA60 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x1407FFF0C (PopRecordSleepCheckpoint.c)
 *     PopClearSleepMarker @ 0x140800270 (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x1408002F8 (PopClearSystemShutdownMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140808700 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14080A09C (PopSetConnectedStandbyMarker.c)
 *     PopRecordDisplayState @ 0x14080D294 (PopRecordDisplayState.c)
 *     PopRecordAcDcState @ 0x1409899DC (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x140989A30 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x140989AB0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x140989C20 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x140989C70 (PopSetCleanShutdownMarker.c)
 *     PdcPoRecordButton @ 0x140996C10 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1407EDB78 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

__int64 __fastcall PopBsdHandleRequest(int a1)
{
  if ( (a1 & 8) != 0 )
  {
    PopUpdateBsdPowerTransitionReferenceTime();
    return RtlSetSystemBootStatus(7LL, &PopBsdPowerTransition, 32LL);
  }
  else
  {
    PopBsdUpdateRequests |= a1;
    return PopQueueWorkItem(&PopBsdUpdateWorkItem, 1LL);
  }
}
