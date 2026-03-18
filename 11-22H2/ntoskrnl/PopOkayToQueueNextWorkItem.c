/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14032ED60
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140683420 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140683470 (PopClearUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407A91F0 (PopExternalMonitorUpdatedWorker.c)
 *     PopThermalStateTransitionWorker @ 0x140865600 (PopThermalStateTransitionWorker.c)
 *     PopBsdUpdateWorker @ 0x140875B50 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140885130 (PpmPerfTelemetryWorker.c)
 *     PopBsdFlushWorker @ 0x1409806D0 (PopBsdFlushWorker.c)
 *     PopRecordLidStateWorker @ 0x1409812D0 (PopRecordLidStateWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1409816C0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1409969A0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x14099BFD0 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C758 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6980 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
