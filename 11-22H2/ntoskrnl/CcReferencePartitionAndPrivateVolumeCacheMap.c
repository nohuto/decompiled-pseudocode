/*
 * XREFs of CcReferencePartitionAndPrivateVolumeCacheMap @ 0x140297BD0
 * Callers:
 *     CcPostWorkQueueRegular @ 0x140298594 (CcPostWorkQueueRegular.c)
 *     CcIncrementWriteBehindPriority @ 0x140535E84 (CcIncrementWriteBehindPriority.c)
 *     CcPostWorkQueueSpecial @ 0x140536D64 (CcPostWorkQueueSpecial.c)
 *     CcPostWorkQueueAsyncLazywrite @ 0x14053A1E4 (CcPostWorkQueueAsyncLazywrite.c)
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
