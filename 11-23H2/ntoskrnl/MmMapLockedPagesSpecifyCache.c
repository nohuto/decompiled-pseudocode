/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14027CF60
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     CcCompleteAsyncRead @ 0x1402C1430 (CcCompleteAsyncRead.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     KeFlushIoBuffers @ 0x1403472B0 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x14035E1C0 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfo @ 0x140363210 (MiGetWorkingSetInfo.c)
 *     EtwpAllocateTraceBuffer @ 0x14037153C (EtwpAllocateTraceBuffer.c)
 *     BgpFwAllocateMemory @ 0x14038762C (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140390EC4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x14039F060 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403AC3F4 (PpmHeteroInitializeHgsSupport.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045BD64 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffers @ 0x14045CAF2 (HalpDmaSyncMapBuffers.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14046521C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x140465F8E (SmFpAllocate.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FF724 (HalpDmaCheckMdlAccessibility.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F470 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFlushBuffer @ 0x140510C10 (HalpDmaFlushBuffer.c)
 *     HalCreateCommonBufferFromMdl @ 0x140511E90 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1405123D0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x140512FE0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x1405137F0 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140513B58 (HalpAllocateCommonBufferDmarThin.c)
 *     CcLockSystemCacheBuffer @ 0x140537760 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14057F400 (KiOpPatchCode.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405A5B00 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405A5C24 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405A6050 (PspIumFreePhysicalPages.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1405CC990 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x1405CD668 (SmMapPage.c)
 *     SmPrepareForFatalPageError @ 0x1405CD804 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CF494 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CF678 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x1405E7640 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x1406012E4 (EtwpAllocatePartitionMemory.c)
 *     MmMapLockedPages @ 0x14061E8E0 (MmMapLockedPages.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiLockPatchIatForDV @ 0x1406404A0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406408E8 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiTransferMemoryPagefileData @ 0x140660AA8 (MiTransferMemoryPagefileData.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14068AA8C (FsRtlNotifyCompleteIrp.c)
 *     MiCreateMdl @ 0x1406A8F3C (MiCreateMdl.c)
 *     MiCopyVirtualMemory @ 0x1406F7910 (MiCopyVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140764E94 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 *     ExInitializeLeapSecondData @ 0x140853510 (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140934468 (HalpDmaAllocateScatterMemory.c)
 *     IopAllocateAndLockMdl @ 0x14094405C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094D4E4 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094D824 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x1409529C0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x140953368 (PipGetPersistentMemory.c)
 *     AlpcpInitializeCompletionList @ 0x140979720 (AlpcpInitializeCompletionList.c)
 *     NtStartProfile @ 0x140A04620 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A05210 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F950 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DAC0 @ 0x140A4DAC0 (sub_140A4DAC0.c)
 *     PopAllocatePages @ 0x140AA1A48 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140AC7CB4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140AC9074 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140AC97BC (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE3280 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE39E8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140AF2010 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReservePtes @ 0x14027D190 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14027E8C0 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402E1560 (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x140335C40 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x14062F038 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x140661384 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 */

PVOID __stdcall MmMapLockedPagesSpecifyCache(
        PMDL MemoryDescriptorList,
        KPROCESSOR_MODE AccessMode,
        MEMORY_CACHING_TYPE CacheType,
        PVOID RequestedAddress,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  signed int v6; // esi
  __int64 ByteOffset; // rcx
  char *v10; // rcx
  unsigned __int64 v11; // rbp
  ULONG v12; // ecx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned int v18; // r12d
  void *v19; // rdi
  int v20; // eax
  CSHORT MdlFlags; // cx
  char v22; // si
  unsigned int v23; // esi
  CSHORT v24; // ax
  unsigned int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v6 = Priority;
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v27 = 0;
  v10 = (char *)MemoryDescriptorList->StartVa + ByteOffset;
  if ( AccessMode )
    return (PVOID)MiMapLockedPagesInUserSpace(
                    (_DWORD)MemoryDescriptorList,
                    (_DWORD)v10,
                    CacheType,
                    (_DWORD)RequestedAddress,
                    Priority);
  if ( (Priority & 0x20000000) == 0 )
  {
    v11 = (((unsigned __int16)v10 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12;
    if ( (Priority & 0x20) == 0 )
    {
      v12 = Priority & 0x3FFFFFFF;
      v13 = 512LL;
      if ( (Priority & 0x3FFFFFFF) != 0x10 )
        v13 = 2048LL;
      v14 = v12 == 16 ? 0x2000000LL : 0x4000000 / ((unsigned int)(v12 == 16) + 1);
      if ( ((qword_140C66DB0 << 9) - qword_140C69970) << 12 < v14
        && (v13 >= qword_140C69990 || v11 >= qword_140C69990 - v13)
        && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
        && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        ++dword_140C69960;
        return 0LL;
      }
    }
    v15 = v11;
    if ( MmProtectFreedNonPagedPool )
      v15 = v11 + 1;
    v16 = MiReservePtes(&qword_140C69940, v15);
    v17 = v16;
    if ( v16 )
    {
      v18 = ((v6 >> 31) & 0xFFFFFFFD) + 4;
      v19 = (void *)(MemoryDescriptorList->ByteOffset + (v16 << 25 >> 16));
      if ( (MiFlags & 0x8000) == 0 && (v6 & 0x40000000) == 0 )
        v18 |= 2u;
      if ( CacheType )
      {
        if ( CacheType == MmWriteCombined )
          v18 |= 0x18u;
      }
      else
      {
        v18 |= 8u;
      }
      v20 = MiFillSystemPtes(v16, v11, (int)MemoryDescriptorList + 48, v18, 0, (__int64)&v27);
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( v20 >= 0 )
      {
        v22 = v27;
        MemoryDescriptorList->MappedSystemVa = v19;
        MemoryDescriptorList->MdlFlags = MdlFlags | 1;
        v23 = v22 & 1;
        if ( v23 )
        {
          MiMappingHasIoReferences(v19);
          MemoryDescriptorList->MdlFlags |= 0x800u;
        }
        if ( (dword_140D1D1CC & 1) != 0 )
        {
          if ( MmProtectFreedNonPagedPool )
            v23 |= 2u;
          v26 = MiProtectionToCacheAttribute(v18);
          MiInsertPteTracker(MemoryDescriptorList, 0LL, v23, v26);
        }
        v24 = MemoryDescriptorList->MdlFlags;
        if ( (v24 & 0x10) != 0 )
          MemoryDescriptorList->MdlFlags = v24 | 0x20;
        return v19;
      }
      if ( (MdlFlags & 0x2000) != 0 || !BugCheckOnFailure )
      {
        MiReleasePtes(&qword_140C69940, v17, v15);
        return 0LL;
      }
    }
    else if ( _bittest16(&MemoryDescriptorList->MdlFlags, 0xDu) || !BugCheckOnFailure )
    {
      return 0LL;
    }
    MiIssueNoPtesBugcheck((unsigned int)v11);
  }
  return 0LL;
}
