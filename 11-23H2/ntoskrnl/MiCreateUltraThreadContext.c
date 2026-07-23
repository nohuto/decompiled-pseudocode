/*
 * XREFs of MiCreateUltraThreadContext @ 0x1402EC680
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5CC8 (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407EB7E4 (MiCombineIdenticalPages.c)
 *     MiCreateZeroThreadContext @ 0x140837D38 (MiCreateZeroThreadContext.c)
 *     MmRelocatePfnList @ 0x140A3CC38 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A462DC (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
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
