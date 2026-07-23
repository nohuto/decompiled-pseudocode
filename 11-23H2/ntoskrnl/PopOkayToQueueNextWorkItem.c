/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14032F190
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x140683420 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140683470 (PopClearUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407A8E30 (PopExternalMonitorUpdatedWorker.c)
 *     PopThermalStateTransitionWorker @ 0x140865420 (PopThermalStateTransitionWorker.c)
 *     PopBsdUpdateWorker @ 0x1408758C0 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x140884EA0 (PpmPerfTelemetryWorker.c)
 *     PopBsdFlushWorker @ 0x140980820 (PopBsdFlushWorker.c)
 *     PopRecordLidStateWorker @ 0x140981420 (PopRecordLidStateWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140981810 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x140996AF0 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x14099C120 (PopPreSleepNotifyWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14099C8A8 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA6730 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
