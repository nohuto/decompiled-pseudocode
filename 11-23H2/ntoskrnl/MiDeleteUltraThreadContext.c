/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1402E9534
 * Callers:
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x1402EC680 (MiCreateUltraThreadContext.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5CC8 (MiInitializeNewUltraHugeContext.c)
 *     MmDeleteProcessor @ 0x14061811C (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x140655234 (MiDeleteZeroThreadContext.c)
 *     MiReleaseLargeZeroingVa @ 0x140655808 (MiReleaseLargeZeroingVa.c)
 *     MiCombineIdenticalPages @ 0x1407EB7E4 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140A3CC38 (MmRelocatePfnList.c)
 *     MiReleaseScrubPacket @ 0x140A465E4 (MiReleaseScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1402E956C (MiDeleteUltraMapContext.c)
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
