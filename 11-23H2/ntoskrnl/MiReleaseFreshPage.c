/*
 * XREFs of MiReleaseFreshPage @ 0x1402E7F20
 * Callers:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B910 (MiAllocateMdlPagesByLists.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiGetPageTablePages @ 0x1402E40B8 (MiGetPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC46C (MiCreateUltraThreadContextHelper.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x140330434 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403AD5DC (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiClaimPhysicalRun @ 0x1403BA77C (MiClaimPhysicalRun.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BDC20 (MiTradeTransitionPage.c)
 *     MiFreePageChain @ 0x14046CC52 (MiFreePageChain.c)
 *     MiManageUltraSpacePageTable @ 0x14046EC9C (MiManageUltraSpacePageTable.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14063F264 (MiSplitDirectMapPage.c)
 *     MiCompleteSecureProcessFault @ 0x140645B98 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651854 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140651DD0 (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660408 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReplenishUltraPageTables @ 0x140661B7C (MiReplenishUltraPageTables.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiFreeReadListPages @ 0x1407213E0 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14072147C (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1402E7F74 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiReturnFreeZeroPage(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
