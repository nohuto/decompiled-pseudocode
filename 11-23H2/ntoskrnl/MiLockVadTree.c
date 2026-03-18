/*
 * XREFs of MiLockVadTree @ 0x14028A8C0
 * Callers:
 *     MiImagePageOk @ 0x14021858C (MiImagePageOk.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1402385F0 (MiComputeMaximumFaultCluster.c)
 *     MiComputeFaultNode @ 0x14025D590 (MiComputeFaultNode.c)
 *     MiHandleTransitionFault @ 0x140262E50 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140269D40 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiReservePageFileSpace @ 0x1402849A0 (MiReservePageFileSpace.c)
 *     MiRemoveVad @ 0x14028A470 (MiRemoveVad.c)
 *     MiInitializeReadInProgressPfn @ 0x1402DEB40 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiSharedVaToPartition @ 0x1402E2788 (MiSharedVaToPartition.c)
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
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140314620 (ExAcquireSpinLockShared.c)
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
