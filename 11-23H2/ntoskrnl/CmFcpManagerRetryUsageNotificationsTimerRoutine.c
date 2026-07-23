/*
 * XREFs of CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x140617800
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerRetryUsageNotificationsTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
