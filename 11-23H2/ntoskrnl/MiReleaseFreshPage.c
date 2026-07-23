/*
 * XREFs of MiReleaseFreshPage @ 0x1402E81B0
 * Callers:
 *     MiFreeLargeZeroPages @ 0x140212098 (MiFreeLargeZeroPages.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B9E0 (MiAllocateMdlPagesByLists.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiGetPageTablePages @ 0x1402E4348 (MiGetPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x1402E956C (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403AD7BC (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiClaimPhysicalRun @ 0x1403BA95C (MiClaimPhysicalRun.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1403BDE00 (MiTradeTransitionPage.c)
 *     MiFreePageChain @ 0x14046D052 (MiFreePageChain.c)
 *     MiManageUltraSpacePageTable @ 0x14046F09C (MiManageUltraSpacePageTable.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651DA4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x140652320 (MiSwapNumaStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReplenishUltraPageTables @ 0x1406620CC (MiReplenishUltraPageTables.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiFreeReadListPages @ 0x1407215E0 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14072167C (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140B6A51C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1402E8204 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
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
