/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1409C24A0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1510 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
