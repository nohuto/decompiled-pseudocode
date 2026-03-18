/*
 * XREFs of PopPowerActionWatchdog @ 0x14058F4C0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14058F588 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopInternalAddToDumpFile @ 0x1405831F0 (PopInternalAddToDumpFile.c)
 */

void PopPowerActionWatchdog()
{
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  PopStateTransitionTimeoutWorker.Parameter = 0LL;
  PopStateTransitionTimeoutWorker.List.Flink = 0LL;
  PopStateTransitionTimeoutWorker.WorkerRoutine = (void (__fastcall *)(void *))PopStateTransitionTimeoutDispatch;
  ExQueueWorkItem(&PopStateTransitionTimeoutWorker, HyperCriticalWorkQueue);
}
