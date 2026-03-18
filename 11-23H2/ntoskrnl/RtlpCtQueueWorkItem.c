/*
 * XREFs of RtlpCtQueueWorkItem @ 0x1409C22A0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B0FA0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall RtlpCtQueueWorkItem(struct _WORK_QUEUE_ITEM *a1)
{
  ExQueueWorkItem(a1, DelayedWorkQueue);
}
