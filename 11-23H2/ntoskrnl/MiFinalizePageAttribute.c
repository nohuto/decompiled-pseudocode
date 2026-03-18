/*
 * XREFs of MiFinalizePageAttribute @ 0x1402E15E4
 * Callers:
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiCopyDataPageToImagePage @ 0x14028B470 (MiCopyDataPageToImagePage.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiSplitDirectMapPage @ 0x14063F264 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x140B58AF8 (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1402E1630 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x14036F3BC (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 != 0);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
