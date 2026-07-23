/*
 * XREFs of WheaFlushETWEventsDpcRoutine @ 0x140613540
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void WheaFlushETWEventsDpcRoutine()
{
  ExQueueWorkItem(&stru_140C2BA00, DelayedWorkQueue);
}
