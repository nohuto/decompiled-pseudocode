/*
 * XREFs of MiCreateUltraThreadContext @ 0x1402EC3F0
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5AE8 (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407EB514 (MiCombineIdenticalPages.c)
 *     MiCreateZeroThreadContext @ 0x140837A38 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x140A3C988 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A4602C (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E92A4 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC46C (MiCreateUltraThreadContextHelper.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v8; // ebx

  v8 = 0;
  while ( !_bittest(&a3, v8) || (unsigned int)MiCreateUltraThreadContextHelper(a1 + 32LL * v8, v8, a2, a4) )
  {
    if ( ++v8 >= 4 )
      return 1LL;
  }
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
