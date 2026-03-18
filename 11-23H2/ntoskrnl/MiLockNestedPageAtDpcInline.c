/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x140348870
 * Callers:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiDeleteBatch @ 0x1402D5F70 (MiDeleteBatch.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiGetBaseResidentPage @ 0x1402E9180 (MiGetBaseResidentPage.c)
 *     MiTradeActivePage @ 0x1402EAE24 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiHandleCollidedFault @ 0x1402EED90 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF318 (MiObtainProtoReference.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346C04 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A61C (MiUnlockNestedProtoPoolPage.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14039A2CC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiDemoteSlabEntry @ 0x1403CD3EC (MiDemoteSlabEntry.c)
 *     MiReplacePageOfProtoPool @ 0x14061D9E0 (MiReplacePageOfProtoPool.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D31C (MiStackTheftFreezeProcessors.c)
 *     MiBuildReservationCluster @ 0x1406382E4 (MiBuildReservationCluster.c)
 *     MiSplitDirectMapPage @ 0x14063F264 (MiSplitDirectMapPage.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiRepointPteAtExtendedStandby @ 0x140651BCC (MiRepointPteAtExtendedStandby.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660408 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDuplicateCloneLeaf @ 0x140664088 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14066C978 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B58AF8 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
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
