/*
 * XREFs of PopSleepstudyScenarioStopTimerCallback @ 0x1405982E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void PopSleepstudyScenarioStopTimerCallback()
{
  ExQueueWorkItem(&stru_140C3BCA8, DelayedWorkQueue);
}
