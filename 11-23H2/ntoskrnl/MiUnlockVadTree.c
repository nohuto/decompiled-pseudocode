/*
 * XREFs of MiUnlockVadTree @ 0x140287B08
 * Callers:
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MiZeroFault @ 0x1402323F0 (MiZeroFault.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402386C0 (MiComputeMaximumFaultCluster.c)
 *     MiCheckVirtualAddress @ 0x14025AD90 (MiCheckVirtualAddress.c)
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x1402630E0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEDD0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402EF658 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF750 (MiFindActualFaultingPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x140333C6C (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1403584FC (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x140369958 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     MiLeapPrefetch @ 0x140631E44 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x140646014 (MiCanGrantExecute.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065D4C4 (MmStoreDecommitVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
