/*
 * XREFs of MiLockVadTree @ 0x14028AB50
 * Callers:
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402386C0 (MiComputeMaximumFaultCluster.c)
 *     MiComputeFaultNode @ 0x14025D820 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x1402630E0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269FD0 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiReservePageFileSpace @ 0x140284C30 (MiReservePageFileSpace.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEDD0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2A18 (MiSharedVaToPartition.c)
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
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall MiLockVadTree(char a1)
{
  int v1; // r8d
  bool v2; // zf
  volatile LONG *v3; // rcx
  char v4; // bl

  v1 = a1 & 1;
  v2 = (a1 & 2) == 0;
  v3 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( v2 )
  {
    if ( v1 )
    {
      v4 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v3);
      return v4;
    }
    return ExAcquireSpinLockShared(v3);
  }
  if ( !v1 )
    return ExAcquireSpinLockExclusive(v3);
  v4 = 17;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  return v4;
}
