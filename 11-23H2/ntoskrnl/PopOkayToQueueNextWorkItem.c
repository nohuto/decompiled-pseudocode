/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14032EF00
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140683420 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140683470 (PopClearUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407A8C40 (PopExternalMonitorUpdatedWorker.c)
 *     PopThermalStateTransitionWorker @ 0x1408651E0 (PopThermalStateTransitionWorker.c)
 *     PopBsdUpdateWorker @ 0x140875680 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140884C60 (PpmPerfTelemetryWorker.c)
 *     PopBsdFlushWorker @ 0x140980620 (PopBsdFlushWorker.c)
 *     PopRecordLidStateWorker @ 0x140981220 (PopRecordLidStateWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981610 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1409968F0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x14099BF20 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C6A8 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA68C0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
