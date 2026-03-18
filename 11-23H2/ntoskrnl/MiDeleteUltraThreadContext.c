/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1402E92A4
 * Callers:
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x1402EC3F0 (MiCreateUltraThreadContext.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5AE8 (MiInitializeNewUltraHugeContext.c)
 *     MmDeleteProcessor @ 0x140617BCC (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x140654CE4 (MiDeleteZeroThreadContext.c)
 *     MiReleaseLargeZeroingVa @ 0x1406552B8 (MiReleaseLargeZeroingVa.c)
 *     MiCombineIdenticalPages @ 0x1407EB514 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140A3C988 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140A46334 (MiReleaseScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 4; ++i )
  {
    result = MiDeleteUltraMapContext(a1, i);
    a1 += 32LL;
  }
  return result;
}
