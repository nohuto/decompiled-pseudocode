/*
 * XREFs of KeShouldYieldProcessor @ 0x140333AD0
 * Callers:
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MiChangePageAttributeContiguous @ 0x14021A6C0 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x14021C9D4 (MiChangePageAttributeBatch.c)
 *     MiDispatchFault @ 0x140237F10 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x14026C5E0 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140285270 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x140285D10 (MiCommitPoolMemory.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MiGetFreeLargePagesSearchTypes @ 0x1402D8410 (MiGetFreeLargePagesSearchTypes.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiProbePacketContended @ 0x1402E6584 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiDereferenceIoPages @ 0x140335F54 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336360 (MiReferenceIoPages.c)
 *     MiDoGangAssignment @ 0x140389954 (MiDoGangAssignment.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1403899D0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiZeroPageCalibrateDpc @ 0x14038B7A0 (MiZeroPageCalibrateDpc.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B7D00 (MiConvertSmallPageRangeToLarge.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CCA60 (MiDemoteSlabEntriesDpc.c)
 *     MiWritePageFileHash @ 0x14046EFA6 (MiWritePageFileHash.c)
 *     IopMcShouldYield @ 0x14055F470 (IopMcShouldYield.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140620610 (MiHugePageOperation.c)
 *     MiSetGraphicsPtes @ 0x140626550 (MiSetGraphicsPtes.c)
 *     MiUnlinkBadPages @ 0x14062AD80 (MiUnlinkBadPages.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DA40 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062E7CC (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406313EC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631764 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecrementLargeSubsections @ 0x14063C764 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14063CE70 (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1406472A8 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648FBC (MiQueryVaPhysicalContiguity.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x14064B158 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x14064D490 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14065B674 (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FD53C (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rax
  LOGICAL v1; // edi
  int v2; // r8d
  __int64 v3; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rcx
  unsigned int v9; // esi
  struct _KPRCB *v10; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v9 = 1;
    v2 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_14;
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  if ( !CurrentPrcb->NestingLevel )
  {
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v9 = 2;
      goto LABEL_14;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v9 = 3;
      goto LABEL_14;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v9 = 4;
      goto LABEL_14;
    }
LABEL_6:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v2 )
    {
LABEL_21:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      v10 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
      _enable();
      v9 = 0;
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  v3 = 1LL;
  if ( DpcWatchdogCount <= 7 )
    return 0;
  if ( CurrentPrcb->QuantumEnd )
  {
    v9 = 7;
    goto LABEL_14;
  }
LABEL_10:
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v9 = 5;
    goto LABEL_14;
  }
  if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
    goto LABEL_21;
  v9 = 6;
LABEL_14:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v9, DpcWatchdogCount, DpcTimeCount, v3);
  LOBYTE(v1) = v9 != 0;
  return v1;
}
