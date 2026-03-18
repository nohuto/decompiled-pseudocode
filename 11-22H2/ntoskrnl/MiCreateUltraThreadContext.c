/*
 * XREFs of MiCreateUltraThreadContext @ 0x1402EC3F0
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5488 (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407EBA94 (MiCombineIdenticalPages.c)
 *     MiCreateZeroThreadContext @ 0x140839588 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x140A3C9F8 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A4609C (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A898EC (MmInitializeProcessor.c)
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
