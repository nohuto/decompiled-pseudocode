/*
 * XREFs of MiLockNestedPageAtDpcInline @ 0x140348B00
 * Callers:
 *     MiLockLeafPage @ 0x140218410 (MiLockLeafPage.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiDeleteBatch @ 0x1402D6200 (MiDeleteBatch.c)
 *     MiInitializePfn @ 0x1402E12D0 (MiInitializePfn.c)
 *     MiGetBaseResidentPage @ 0x1402E9410 (MiGetBaseResidentPage.c)
 *     MiTradeActivePage @ 0x1402EB0B4 (MiTradeActivePage.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiHandleCollidedFault @ 0x1402EF020 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346E94 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14035A7BC (MiUnlockNestedProtoPoolPage.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiSwapStackPageNoDpc @ 0x14039A4AC (MiSwapStackPageNoDpc.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiDemoteSlabEntry @ 0x1403CD5CC (MiDemoteSlabEntry.c)
 *     MiReplacePageOfProtoPool @ 0x14061DF30 (MiReplacePageOfProtoPool.c)
 *     MiStackTheftFreezeProcessors @ 0x14062D86C (MiStackTheftFreezeProcessors.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiRepointPteAtExtendedStandby @ 0x14065211C (MiRepointPteAtExtendedStandby.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiSwapHardFaultPage @ 0x14066CEC8 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140B58AF8 (MxSwapPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
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
