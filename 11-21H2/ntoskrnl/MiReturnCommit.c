/*
 * XREFs of MiReturnCommit @ 0x14028CE10
 * Callers:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiDeleteSessionPdes @ 0x140226A00 (MiDeleteSessionPdes.c)
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiReturnPoolCharges @ 0x140228AA0 (MiReturnPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x140229590 (MiDeleteSystemPageTableTail.c)
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiDeletePerSessionProtos @ 0x14025592C (MiDeletePerSessionProtos.c)
 *     MmReleaseResourceCharge @ 0x140262FAC (MmReleaseResourceCharge.c)
 *     MiObtainMdlCharges @ 0x1402651B8 (MiObtainMdlCharges.c)
 *     MiDeleteUltraMapContext @ 0x1402682BC (MiDeleteUltraMapContext.c)
 *     MiFreePageFileHashPfns @ 0x140268C20 (MiFreePageFileHashPfns.c)
 *     MiCreateUltraThreadContextHelper @ 0x14026A5DC (MiCreateUltraThreadContextHelper.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiCleanupPageTablePages @ 0x14026DFF0 (MiCleanupPageTablePages.c)
 *     MiDeleteSegmentPages @ 0x14027034C (MiDeleteSegmentPages.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x14027D190 (MiObtainSystemCharges.c)
 *     MiDeleteProcessShadow @ 0x14027D408 (MiDeleteProcessShadow.c)
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x14028C9B4 (MiReleaseWriteInProgressCharges.c)
 *     MiFinishLargePageFree @ 0x14028CB64 (MiFinishLargePageFree.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     MiSessionUpdateImageCharges @ 0x1402DB994 (MiSessionUpdateImageCharges.c)
 *     MiUnlockWsle @ 0x1402E599C (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x1402E5B0C (MiUnlockPageTableCharges.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiCheckProtoPtePageState @ 0x140337B00 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140337F60 (MiChargeForLockedPage.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 *     MiReturnExcessPoolCommit @ 0x140352D04 (MiReturnExcessPoolCommit.c)
 *     MmFreePoolMemory @ 0x140366DA8 (MmFreePoolMemory.c)
 *     MiUnlockImageSection @ 0x140369180 (MiUnlockImageSection.c)
 *     MiMakePartitionActive @ 0x14036C978 (MiMakePartitionActive.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     MiReturnSplitPageCharges @ 0x1403C2A18 (MiReturnSplitPageCharges.c)
 *     MiDeleteBootRange @ 0x1403C84E4 (MiDeleteBootRange.c)
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MiFinishDriverPageRangeAllocation @ 0x1403CA0E4 (MiFinishDriverPageRangeAllocation.c)
 *     MiRebuildLargePage @ 0x14045CDD6 (MiRebuildLargePage.c)
 *     MiReleaseCommitForResetPages @ 0x140580FA4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140581158 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEnableNewPfns @ 0x1405827E0 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x1405898DC (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x140589EE0 (MiReturnMdlCharges.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140594F80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x14059B0B0 (MiAttemptPageFileReductionApc.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MiMoveBadPageCrossPartition @ 0x1405AD9AC (MiMoveBadPageCrossPartition.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     MiReleaseNonPagedResources @ 0x1405B2DA0 (MiReleaseNonPagedResources.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1405B6108 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1405B6318 (MiReturnCrossPartitionCombineCharges.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiDecrementCloneBlockReference @ 0x1405BA498 (MiDecrementCloneBlockReference.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1405BBB54 (MiReferenceCloneProto.c)
 *     MiGetFileHashPage @ 0x1405BC4E8 (MiGetFileHashPage.c)
 *     MiInsertPartitionPages @ 0x1405BE81C (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1405C20CC (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiGetSubsectionCharges @ 0x1405C4980 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 *     MmDeleteProcessAddressSpace @ 0x140693C24 (MmDeleteProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140693D80 (MiDeleteVadBitmap.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiRemoveVadCharges @ 0x1407BC750 (MiRemoveVadCharges.c)
 *     MiDecommitRegion @ 0x1407BC9B0 (MiDecommitRegion.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiReturnSystemImageCommitment @ 0x14081C984 (MiReturnSystemImageCommitment.c)
 *     MiMarkBootGuardPage @ 0x140829B50 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiGetLargePagesForSystemMapping @ 0x14096DAE0 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x14096F240 (MiDeletePagingFiles.c)
 *     MiCreateFileOnlyImageFixupList @ 0x14097023C (MiCreateFileOnlyImageFixupList.c)
 *     MiFreePartitionPhysicalPages @ 0x140981A04 (MiFreePartitionPhysicalPages.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403CF698 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x1405B3340 (MiRestockOverCommit.c)
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
    if ( !*(_QWORD *)(a1 + 16056) )
      goto LABEL_27;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16040), &LockHandle);
    v2 = MiRestockOverCommit(a1, v2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
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
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
LABEL_27:
      if ( (ULONG_PTR *)a1 == &MiSystemPartition
        && (v4 = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&v4->CachedCommit),
            CachedCommit = v4->CachedCommit,
            (unsigned __int64)(v2 + CachedCommit) <= 0x100) )
      {
        while ( 1 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&v4->CachedCommit,
                 CachedCommit + v2,
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
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17256), -v2);
        v8 = *(_QWORD *)(a1 + 16032);
        if ( v7 >= v8 && v7 - v2 < v8 || (v9 = *(_QWORD *)(a1 + 16024), v7 >= v9) && v7 - v2 < v9 )
          MiSyncCommitSignals(a1, 0LL);
      }
    }
  }
}
