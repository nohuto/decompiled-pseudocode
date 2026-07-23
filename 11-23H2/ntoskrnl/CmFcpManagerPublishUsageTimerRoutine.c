/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x14041A190
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  CmpWorkItemQueueWork(a2 + 49);
}
