/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x140348380
 * Callers:
 *     MiLockLeafPage @ 0x140218430 (MiLockLeafPage.c)
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14021AF78 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiDeleteBatch @ 0x1402D5F70 (MiDeleteBatch.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiGetBaseResidentPage @ 0x1402E9180 (MiGetBaseResidentPage.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF318 (MiObtainProtoReference.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346714 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A01C (MiUnlockNestedProtoPoolPage.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x140399FDC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiDemoteSlabEntry @ 0x1403CCD8C (MiDemoteSlabEntry.c)
 *     MiReplacePageOfProtoPool @ 0x14061DA50 (MiReplacePageOfProtoPool.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D38C (MiStackTheftFreezeProcessors.c)
 *     MiBuildReservationCluster @ 0x140638354 (MiBuildReservationCluster.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiRepointPteAtExtendedStandby @ 0x140651C3C (MiRepointPteAtExtendedStandby.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660478 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14066C9E8 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140B4A55C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B5BAA8 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockNestedPageAtDpcInline(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
