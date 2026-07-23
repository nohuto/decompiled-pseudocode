/*
 * XREFs of MiReturnCommit @ 0x1402DC4E0
 * Callers:
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiSessionUpdateImageCharges @ 0x14020AAD4 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MiCleanupPageTablePages @ 0x140212030 (MiCleanupPageTablePages.c)
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiChargeCrossPartitionSharedPage @ 0x140217824 (MiChargeCrossPartitionSharedPage.c)
 *     MiDeleteSegmentPages @ 0x140219670 (MiDeleteSegmentPages.c)
 *     MiFreePageFileHashPfns @ 0x14021D960 (MiFreePageFileHashPfns.c)
 *     MiProbeLockFrame @ 0x1402365D0 (MiProbeLockFrame.c)
 *     MiUnlockImageSection @ 0x14025A6F0 (MiUnlockImageSection.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x140283C20 (MiDeleteKernelStack.c)
 *     MiReturnExcessPoolCommit @ 0x140286828 (MiReturnExcessPoolCommit.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x140292890 (MiMakePartitionActive.c)
 *     MiUnlockWsle @ 0x1402A2990 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiFreeMdlPageRun @ 0x1402C8C70 (MiFreeMdlPageRun.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiUnlockMdlWritePages @ 0x1402D9DC0 (MiUnlockMdlWritePages.c)
 *     MiCheckProtoPtePageState @ 0x1402DC0C0 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x1402DC5B0 (MiChargeForLockedPage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiUnlockPageTableCharges @ 0x1402E2DD0 (MiUnlockPageTableCharges.c)
 *     MiGetPageTablePages @ 0x1402E4348 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1402E44E0 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiReplenishSlabAllocator @ 0x1402E6D54 (MiReplenishSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiFinishLargePageFree @ 0x1402E7824 (MiFinishLargePageFree.c)
 *     MiDeleteUltraMapContext @ 0x1402E956C (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402F4050 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteCompletePfn @ 0x1402F49E0 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F4B68 (MiReleaseWriteInProgressCharges.c)
 *     MiObtainMdlCharges @ 0x1402F90FC (MiObtainMdlCharges.c)
 *     MiDeletePerSessionProtos @ 0x14033EE54 (MiDeletePerSessionProtos.c)
 *     MiReturnPoolCharges @ 0x1403409F8 (MiReturnPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x140340B30 (MiDeleteSystemPageTableTail.c)
 *     MmReleaseResourceCharge @ 0x1403454E8 (MmReleaseResourceCharge.c)
 *     MiReturnFaultCharges @ 0x140360060 (MiReturnFaultCharges.c)
 *     MiReturnSplitPageCharges @ 0x1403765EC (MiReturnSplitPageCharges.c)
 *     MiPfnRangeIsZero @ 0x14038F364 (MiPfnRangeIsZero.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     MiFreeSlabEntry @ 0x1403B88B0 (MiFreeSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     MiRebuildLargePage @ 0x14046EBE8 (MiRebuildLargePage.c)
 *     MiManageUltraSpacePageTable @ 0x14046F09C (MiManageUltraSpacePageTable.c)
 *     MiReleaseCommitForResetPages @ 0x140619638 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406197C8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEnableNewPfns @ 0x14061AEB0 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x140623780 (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x140623BA0 (MiReturnMdlCharges.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiUnlinkBadPages @ 0x14062B260 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1406329FC (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x1406382C0 (MiAttemptPageFileReductionApc.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 *     MiFreeContiguousLargePageRun @ 0x14064A308 (MiFreeContiguousLargePageRun.c)
 *     MiMoveBadPageCrossPartition @ 0x14064DE54 (MiMoveBadPageCrossPartition.c)
 *     MiDeleteSubsectionLargePages @ 0x14064F2F8 (MiDeleteSubsectionLargePages.c)
 *     MiFreeSecureKernelPage @ 0x140656ED4 (MiFreeSecureKernelPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1406579EC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140658208 (MmFreeNonChargedSecurePages.c)
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x14065BB54 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065DF04 (MiProcessVaContiguityInformation.c)
 *     MiReleaseNonPagedResources @ 0x1406615BC (MiReleaseNonPagedResources.c)
 *     MiReplenishUltraPageTables @ 0x1406620CC (MiReplenishUltraPageTables.c)
 *     MiGetCrossPartitionCloneCharges @ 0x140664D5C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetFileHashPage @ 0x14066645C (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668B94 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiGetSubsectionCharges @ 0x14066B6F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiRemoveVadCharges @ 0x1406FB650 (MiRemoveVadCharges.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x140705BF8 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140706060 (MmCreateProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140744750 (MiDecommitRegion.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1407481F8 (MiChargeSegmentCommit.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 *     MiMarkBootGuardPage @ 0x14081D918 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     MiReturnSystemImageCommitment @ 0x140861A40 (MiReturnSystemImageCommitment.c)
 *     MiRemovePhysicalMemory @ 0x140A2CEFC (MiRemovePhysicalMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A32574 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x140A32C58 (MiDeletePagingFiles.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A33C8C (MiCreateFileOnlyImageFixupList.c)
 *     MiFreePartitionPhysicalPages @ 0x140A44DA4 (MiFreePartitionPhysicalPages.c)
 *     MiCreateBootSlabEntries @ 0x140B46868 (MiCreateBootSlabEntries.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403963C0 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140656B88 (MiRestockOverCommit.c)
 */

void __fastcall MiReturnCommit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KPRCB *v4; // rdx
  __int64 CachedCommit; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v2 = a2;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*(_QWORD *)(a1 + 16440) )
      goto LABEL_27;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16424), &LockHandle);
    v2 = MiRestockOverCommit(a1, v2);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
LABEL_27:
      if ( (_UNKNOWN *)a1 == &MiSystemPartition
        && (v4 = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&v4->CachedCommit),
            CachedCommit = v4->CachedCommit,
            (unsigned __int64)(v2 + CachedCommit) <= 0x100) )
      {
        while ( 1 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&v4->CachedCommit,
                 v2 + CachedCommit,
                 CachedCommit);
          if ( v6 == CachedCommit )
            break;
          CachedCommit = v6;
          if ( (unsigned __int64)(v6 + v2) > 0x100 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), -v2);
        v8 = *(_QWORD *)(a1 + 16416);
        if ( v7 >= v8 && v7 - v2 < v8 || (v9 = *(_QWORD *)(a1 + 16408), v7 >= v9) && v7 - v2 < v9 )
          MiSyncCommitSignals(a1, 0LL);
      }
    }
  }
}
