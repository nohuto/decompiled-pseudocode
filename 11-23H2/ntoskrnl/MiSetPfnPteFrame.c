/*
 * XREFs of MiSetPfnPteFrame @ 0x1402E15A0
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x140285690 (MiUnlinkProtectedStandbyPfn.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2990 (MiAssignNonPagedPoolPte.c)
 *     MiInitializePfnForOtherProcess @ 0x1402E3F60 (MiInitializePfnForOtherProcess.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     KiInSwapProcesses @ 0x14034D08C (KiInSwapProcesses.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140352EE8 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403988C4 (MiAddExpansionNonPagedPool.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiReplacePageOfProtoPool @ 0x14061D9E0 (MiReplacePageOfProtoPool.c)
 *     MiUpdateLargePageSectionPfns @ 0x140628F7C (MiUpdateLargePageSectionPfns.c)
 *     MiReturnBadPagesToBadList @ 0x14062ABA8 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140637004 (MiMakeLargePageTable.c)
 *     MiExtendPagingFileMaximum @ 0x140638FD4 (MiExtendPagingFileMaximum.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPageTable @ 0x140661F14 (MiBuildForkPageTable.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
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
