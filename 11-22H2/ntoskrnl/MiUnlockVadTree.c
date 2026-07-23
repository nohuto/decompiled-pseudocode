/*
 * XREFs of MiUnlockVadTree @ 0x140287758
 * Callers:
 *     MiImagePageOk @ 0x1402185AC (MiImagePageOk.c)
 *     MiZeroFault @ 0x140232300 (MiZeroFault.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385D0 (MiComputeMaximumFaultCluster.c)
 *     MiCheckVirtualAddress @ 0x14025A9E0 (MiCheckVirtualAddress.c)
 *     MiComputeFaultNode @ 0x14025D470 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268AC0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269C20 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x14033383C (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x140357D5C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x140369168 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MiLeapPrefetch @ 0x140631964 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x140645B34 (MiCanGrantExecute.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065CFE4 (MmStoreDecommitVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockVadTree(char a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // edx
  bool v4; // zf
  volatile LONG *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v9; // eax

  v2 = a2;
  v3 = a1 & 1;
  v4 = (a1 & 2) == 0;
  v5 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( v4 )
  {
    if ( v3 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  }
  else
  {
    if ( v3 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  }
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
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v4 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v4 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
}
