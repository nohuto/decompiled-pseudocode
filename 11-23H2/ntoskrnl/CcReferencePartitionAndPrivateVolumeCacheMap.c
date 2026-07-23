/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140297F80
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140298944 (CcPostWorkQueueRegular.c)
 *     CcIncrementWriteBehindPriority @ 0x140536324 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueSpecial @ 0x140537204 (CcPostWorkQueueSpecial.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A684 (CcPostWorkQueueAsyncLazywrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcReferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( a2 && _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
    __fastfail(0xEu);
  return nullsub_3(14LL);
}
