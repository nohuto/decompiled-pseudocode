/*
 * XREFs of MiSetNonResidentPteHeat @ 0x14033C3A0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiOutSwapWorkingSetPte @ 0x140315EE0 (MiOutSwapWorkingSetPte.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14033F8E0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x140340078 (MiTransferSoftwarePte.c)
 *     MiInitializeNewPfns @ 0x1403B790C (MiInitializeNewPfns.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140591E04 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiMakeTransitionHeatBatch @ 0x1405B7B38 (MiMakeTransitionHeatBatch.c)
 *     MiSetActivePfnHeat @ 0x1405B80F8 (MiSetActivePfnHeat.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetNonResidentPteHeat(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 result; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( (*a1 & 0x400) != 0 )
  {
    if ( a2 )
      v3 = 2048LL;
    v4 = v2 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  else
  {
    if ( a2 )
      v3 = 8LL;
    v4 = v2 & 0xFFFFFFFFFFFFFFF7uLL;
  }
  result = v3 | v4;
  *a1 = result;
  return result;
}
