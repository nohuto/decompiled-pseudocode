/*
 * XREFs of MiSetPfnPteFrame @ 0x1402E1830
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140285920 (MiUnlinkProtectedStandbyPfn.c)
 *     MiInitializePfn @ 0x1402E12D0 (MiInitializePfn.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2C20 (MiAssignNonPagedPoolPte.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E41F0 (MiInitializePfnForOtherProcess.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F3A44 (MiDemoteCombinedPte.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140353088 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiAddExpansionNonPagedPool @ 0x140398AA4 (MiAddExpansionNonPagedPool.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiReplacePageOfProtoPool @ 0x14061DF30 (MiReplacePageOfProtoPool.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406294CC (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x14062B0F8 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140637554 (MiMakeLargePageTable.c)
 *     MiExtendPagingFileMaximum @ 0x140639524 (MiExtendPagingFileMaximum.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPageTable @ 0x140662464 (MiBuildForkPageTable.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiSwitchToPfns @ 0x140B42278 (MiSwitchToPfns.c)
 *     MiAllocateDummyPage @ 0x140B44E78 (MiAllocateDummyPage.c)
 *     MxMovePageTables @ 0x140B582A8 (MxMovePageTables.c)
 *     MxCreatePfn @ 0x140B5898C (MxCreatePfn.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnPteFrame(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r9
  signed __int64 result; // rax
  signed __int64 v4; // r8

  v2 = *(_QWORD *)(a1 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             a2 & 0xFFFFFFFFFFLL | v2 & 0xFFFFFF0000000000uLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v4 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 a2 & 0xFFFFFFFFFFLL | result & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v4 != result );
  }
  return result;
}
