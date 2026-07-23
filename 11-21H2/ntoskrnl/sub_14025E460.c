/*
 * XREFs of sub_14025E460 @ 0x14025E460
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_14025E460(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 12), 1, 0) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 376), NormalWorkQueue);
}
