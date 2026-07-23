/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x1405987D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C3BC68, DelayedWorkQueue);
}
