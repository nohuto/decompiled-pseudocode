/*
 * XREFs of MmMapLockedPagesSpecifyCache @ 0x14027D1F0
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A200 (MiInitializeImageProtos.c)
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     MiValidateInPage @ 0x1402DC710 (MiValidateInPage.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     KeFlushIoBuffers @ 0x140347540 (KeFlushIoBuffers.c)
 *     FsRtlCancelNotify @ 0x14035E360 (FsRtlCancelNotify.c)
 *     MiGetWorkingSetInfo @ 0x1403633B0 (MiGetWorkingSetInfo.c)
 *     EtwpAllocateTraceBuffer @ 0x1403716DC (EtwpAllocateTraceBuffer.c)
 *     BgpFwAllocateMemory @ 0x14038780C (BgpFwAllocateMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x14039F240 (HalInitializeBios.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403AC5D4 (PpmHeteroInitializeHgsSupport.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045C164 (HalpDmaAcquireBufferMappings.c)
 *     HalpDmaSyncMapBuffers @ 0x14045CEF2 (HalpDmaSyncMapBuffers.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14046561C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14046638E (SmFpAllocate.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FFC74 (HalpDmaCheckMdlAccessibility.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F9C0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFlushBuffer @ 0x140511160 (HalpDmaFlushBuffer.c)
 *     HalCreateCommonBufferFromMdl @ 0x1405123E0 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x140513530 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140513D40 (HalCreateCommonBufferFromMdlDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1405140A8 (HalpAllocateCommonBufferDmarThin.c)
 *     CcLockSystemCacheBuffer @ 0x140537CB0 (CcLockSystemCacheBuffer.c)
 *     KiOpPatchCode @ 0x14057F8F0 (KiOpPatchCode.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405A6070 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405A6194 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405A65C0 (PspIumFreePhysicalPages.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1405CCF00 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmMapPage @ 0x1405CDBD8 (SmMapPage.c)
 *     SmPrepareForFatalPageError @ 0x1405CDD74 (SmPrepareForFatalPageError.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CFA04 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1405CFBE8 (MdlInvariantPreProcessing1.c)
 *     DifMmMapLockedPagesSpecifyCacheWrapper @ 0x1405E7BB0 (DifMmMapLockedPagesSpecifyCacheWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x140601834 (EtwpAllocatePartitionMemory.c)
 *     MmMapLockedPages @ 0x14061EE30 (MmMapLockedPages.c)
 *     MiPersistMdl @ 0x14063EB64 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063FDBC (MiTransferFileExtent.c)
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MiTransferMemoryPagefileData @ 0x140660FF8 (MiTransferMemoryPagefileData.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x14068AA8C (FsRtlNotifyCompleteIrp.c)
 *     MiCreateMdl @ 0x1406A8F3C (MiCreateMdl.c)
 *     MiCopyVirtualMemory @ 0x1406F7B20 (MiCopyVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140765084 (WbMakeUserExecutablePagesKernelWritable.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B790 (FsRtlNotifyFilterReportChange.c)
 *     ExInitializeLeapSecondData @ 0x140853810 (ExInitializeLeapSecondData.c)
 *     HalpDmaAllocateScatterMemory @ 0x140934668 (HalpDmaAllocateScatterMemory.c)
 *     IopAllocateAndLockMdl @ 0x14094425C (IopAllocateAndLockMdl.c)
 *     IopSetFileObjectIosbRange @ 0x140946138 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094D6E4 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094DA24 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IoReserveKsrPersistentMemoryEx @ 0x140952BC0 (IoReserveKsrPersistentMemoryEx.c)
 *     PipGetPersistentMemory @ 0x140953568 (PipGetPersistentMemory.c)
 *     AlpcpInitializeCompletionList @ 0x140979920 (AlpcpInitializeCompletionList.c)
 *     NtStartProfile @ 0x140A048B0 (NtStartProfile.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A054A0 (NtPssCaptureVaSpaceBulk.c)
 *     MiApplyImageHotPatch @ 0x140A35638 (MiApplyImageHotPatch.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D274 (MiCopyPagesIntoEnclave.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3FC00 (MiQueryMemoryPhysicalContiguity.c)
 *     sub_140A4DD70 @ 0x140A4DD70 (sub_140A4DD70.c)
 *     PopAllocatePages @ 0x140AA18B8 (PopAllocatePages.c)
 *     ViAllocateMapRegisterFile @ 0x140AC7CA4 (ViAllocateMapRegisterFile.c)
 *     ViGetMdlBufferSa @ 0x140AC9064 (ViGetMdlBufferSa.c)
 *     ViMapDoubleBuffer @ 0x140AC97AC (ViMapDoubleBuffer.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE3270 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE39D8 (VfFillAllocatePagesForMdl.c)
 *     ResFwGetContext @ 0x140AF2020 (ResFwGetContext.c)
 *     KiComputeNumaCosts @ 0x140B75D24 (KiComputeNumaCosts.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x1402E17F0 (MiProtectionToCacheAttribute.c)
 *     MiMappingHasIoReferences @ 0x140335ED0 (MiMappingHasIoReferences.c)
 *     MiIssueNoPtesBugcheck @ 0x14062F588 (MiIssueNoPtesBugcheck.c)
 *     MiInsertPteTracker @ 0x1406618D4 (MiInsertPteTracker.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748764 (MiMapLockedPagesInUserSpace.c)
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
