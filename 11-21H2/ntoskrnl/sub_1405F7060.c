/*
 * XREFs of sub_1405F7060 @ 0x1405F7060
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1405F7060(__int64 a1, __int64 a2)
{
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1824), a2 + 1800, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 1800), NormalWorkQueue);
}
