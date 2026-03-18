/*
 * XREFs of MiUnlockVadTree @ 0x140287878
 * Callers:
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MiZeroFault @ 0x140232320 (MiZeroFault.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385F0 (MiComputeMaximumFaultCluster.c)
 *     MiCheckVirtualAddress @ 0x14025AB00 (MiCheckVirtualAddress.c)
 *     MiComputeFaultNode @ 0x14025D590 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x140262E50 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269D40 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiRemoveVad @ 0x14028A470 (MiRemoveVad.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiIsFaultPteIntact @ 0x1402EF3C8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1402EF4C0 (MiFindActualFaultingPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiPerformVadSplitting @ 0x14030B5F4 (MiPerformVadSplitting.c)
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 *     MiUpdatePrefetchPriority @ 0x1403339DC (MiUpdatePrefetchPriority.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x14035835C (MiAdvanceToLastUntrimmableVa.c)
 *     MiProcessCommitIntact @ 0x1403697B8 (MiProcessCommitIntact.c)
 *     MiLockStealUserVm @ 0x1403BDF18 (MiLockStealUserVm.c)
 *     MiLeapPrefetch @ 0x1406318F4 (MiLeapPrefetch.c)
 *     MiCanGrantExecute @ 0x140645AC4 (MiCanGrantExecute.c)
 *     MmStoreDecommitVirtualMemory @ 0x14065CF74 (MmStoreDecommitVirtualMemory.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7C00 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
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
