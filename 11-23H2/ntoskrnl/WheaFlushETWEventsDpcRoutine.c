/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x140612FF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140C2BA40, DelayedWorkQueue);
}
