/*
 * XREFs of MmUnmapLockedPages @ 0x1402CB700
 * Callers:
 *     IopUnlockAndFreeMdl @ 0x14028CF2C (IopUnlockAndFreeMdl.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiUnlockFlushMdl @ 0x14033ED10 (MiUnlockFlushMdl.c)
 *     MiInitializeNewImageSectionProtos @ 0x140356D90 (MiInitializeNewImageSectionProtos.c)
 *     BgpFwFreeMemory @ 0x1403860A0 (BgpFwFreeMemory.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140390EC4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalInitializeBios @ 0x14039F060 (HalInitializeBios.c)
 *     MiZeroPageWrite @ 0x1403C17F4 (MiZeroPageWrite.c)
 *     HalPutScatterGatherListV2 @ 0x1403CE938 (HalPutScatterGatherListV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045BF9E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045C7D8 (HalpDmaReleaseBufferMappings.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14046521C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpFree @ 0x1404660A8 (SmFpFree.c)
 *     HalFreeCommonBufferVector @ 0x14050F000 (HalFreeCommonBufferVector.c)
 *     HalPutScatterGatherListV3 @ 0x14050F288 (HalPutScatterGatherListV3.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050F470 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaFreeChildAdapter @ 0x140511170 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBufferV3 @ 0x140512280 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1405123D0 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferDmaThin @ 0x1405132D0 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferDmarThin @ 0x1405139F0 (HalFreeCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140513B58 (HalpAllocateCommonBufferDmarThin.c)
 *     HalFlushAdapterBuffersEx @ 0x1405143E0 (HalFlushAdapterBuffersEx.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1405A5B00 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405A5C24 (PspIumAllocateSecurePool.c)
 *     PspIumFreePhysicalPages @ 0x1405A6050 (PspIumFreePhysicalPages.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1405BEA74 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmKmUnlockMdl @ 0x1405CBEEC (SmKmUnlockMdl.c)
 *     SmPrepareForFatalPageError @ 0x1405CD804 (SmPrepareForFatalPageError.c)
 *     DifMmUnmapLockedPagesWrapper @ 0x1405E7BE0 (DifMmUnmapLockedPagesWrapper.c)
 *     EtwpAllocatePartitionMemory @ 0x1406012E4 (EtwpAllocatePartitionMemory.c)
 *     EtwpFreePartitionMemory @ 0x1406013A4 (EtwpFreePartitionMemory.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiZeroPageFile @ 0x140619B70 (MiZeroPageFile.c)
 *     MiPfCompleteCoalescedIo @ 0x140631BA0 (MiPfCompleteCoalescedIo.c)
 *     MiFlushComplete @ 0x140635E60 (MiFlushComplete.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1406411C4 (MiUnlockAndFreeDvPatchImage.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     MiDeleteImageCreationMdls @ 0x1406A7448 (MiDeleteImageCreationMdls.c)
 *     MiZeroPageFileFirstPage @ 0x140833E80 (MiZeroPageFileFirstPage.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140933F50 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x140934238 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140934520 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140934624 (HalpDmaGrowScatterMapBuffers.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409446E0 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140945F38 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094D4E4 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094E028 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteDumpFile @ 0x14094F484 (IopLiveDumpWriteDumpFile.c)
 *     IoFreeKsrPersistentMemory @ 0x1409526A0 (IoFreeKsrPersistentMemory.c)
 *     PipGetPersistentMemory @ 0x140953368 (PipGetPersistentMemory.c)
 *     PopFreeHiberContext @ 0x1409885F0 (PopFreeHiberContext.c)
 *     ExpProfileDelete @ 0x140A04200 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140A04890 (NtStopProfile.c)
 *     MiApplyImageHotPatch @ 0x140A35388 (MiApplyImageHotPatch.c)
 *     ViFreeMapRegisterFile @ 0x140AC8AC0 (ViFreeMapRegisterFile.c)
 *     VfFillAllocatePagesForMdl @ 0x140AE39E8 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiZeroAndFlushPtes @ 0x140335E5C (MiZeroAndFlushPtes.c)
 *     MiRetardMdl @ 0x14061C9C0 (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x140661600 (MiRemovePteTracker.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E6160 (MiUnmapLockedPagesInUserSpace.c)
 */

void __stdcall MmUnmapLockedPages(PVOID BaseAddress, PMDL MemoryDescriptorList)
{
  unsigned int v2; // r9d
  __int64 ByteOffset; // r8
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  int v10; // r10d
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  char v16; // r8
  __int64 v17; // rax
  struct _LIST_ENTRY *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+38h] [rbp-30h]

  v2 = 0;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v2 = MiRetardMdl(MemoryDescriptorList);
  ByteOffset = MemoryDescriptorList->ByteOffset;
  v6 = ((((_WORD)ByteOffset + (unsigned __int16)LODWORD(MemoryDescriptorList->StartVa)) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (unsigned __int64)BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapLockedPagesInUserSpace((ULONG_PTR)BaseAddress);
  }
  else
  {
    v7 = (unsigned __int64)BaseAddress - v2;
    MemoryDescriptorList->MdlFlags &= 0xFFDEu;
    v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
      MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + ByteOffset;
    v22 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = v22;
    v10 = 4;
    v23 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = 4LL;
    while ( 1 )
    {
      v12 = *(&v21 + v11--);
      --v10;
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v13 & 1) == 0 )
          goto LABEL_12;
        if ( (v13 & 0x20) == 0 || (v13 & 0x42) == 0 )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v16 = v13 | 0x20;
            v17 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
            if ( (v17 & 0x20) == 0 )
              v16 = v13;
            LOBYTE(v13) = v16;
            if ( (v17 & 0x42) != 0 )
              LOBYTE(v13) = v16 | 0x42;
          }
        }
      }
      if ( (v13 & 1) == 0 )
        goto LABEL_12;
      if ( (v13 & 0x80u) != 0LL )
        break;
      if ( v11 == 1 )
        goto LABEL_12;
    }
    for ( ; v10; --v10 )
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_12:
    v14 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v18 )
      {
        LOWORD(v19) = v14 | 0x20;
        v20 = *((_QWORD *)&v18->Flink + ((v9 >> 3) & 0x1FF));
        if ( (v20 & 0x20) == 0 )
          v19 = *(_QWORD *)v9;
        LOWORD(v14) = v19;
        if ( (v20 & 0x42) != 0 )
          LOWORD(v14) = v19 | 0x42;
      }
    }
    if ( (v14 & 0x200) != 0 )
      MiZeroAndFlushPtes(v7, v6, 0LL, v11);
    if ( MmProtectFreedNonPagedPool )
      LODWORD(v6) = v6 + 1;
    if ( (dword_140D1D1CC & 1) != 0 )
      MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
    MiReleasePtes(&qword_140C69940, v8, (unsigned int)v6);
  }
}
