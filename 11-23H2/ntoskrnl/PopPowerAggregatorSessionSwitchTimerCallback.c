/*
 * XREFs of PopPowerAggregatorSessionSwitchTimerCallback @ 0x140598420
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void PopPowerAggregatorSessionSwitchTimerCallback()
{
  ExQueueWorkItem(&stru_140C3AAC0, DelayedWorkQueue);
}
