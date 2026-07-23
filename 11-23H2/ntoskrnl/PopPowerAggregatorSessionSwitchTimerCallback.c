/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x140598910
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C3AAA0, DelayedWorkQueue);
}
