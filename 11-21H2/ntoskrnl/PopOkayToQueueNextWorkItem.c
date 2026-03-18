/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x140368A78
 * Callers:
 *     PopSetUserShutdownMarkerWorker @ 0x1407EC230 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1407EC280 (PopClearUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407ED710 (PopExternalMonitorUpdatedWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14080BBA0 (PpmPerfTelemetryWorker.c)
 *     PopBsdUpdateWorker @ 0x140810990 (PopBsdUpdateWorker.c)
 *     PopThermalStateTransitionWorker @ 0x1408647A0 (PopThermalStateTransitionWorker.c)
 *     PopRecordLidStateWorker @ 0x140989A30 (PopRecordLidStateWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140989DA0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409967E4 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x140998800 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x14099D0B0 (PopPreSleepNotifyWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140A6BCF0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
