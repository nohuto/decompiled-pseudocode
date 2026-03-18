/*
 * XREFs of RtlSetBits @ 0x1402E0530
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x140294644 (MiReduceMappedFileReadAhead.c)
 *     MiFindFreePageFileSpace @ 0x1402946D4 (MiFindFreePageFileSpace.c)
 *     RtlFindClearBitsAndSet @ 0x140295EA0 (RtlFindClearBitsAndSet.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     MiDecayNodeNowEmpty @ 0x14034AA40 (MiDecayNodeNowEmpty.c)
 *     MiReduceMappedFileReadBehind @ 0x140353310 (MiReduceMappedFileReadBehind.c)
 *     HalpMmAllocCtxAlloc @ 0x14039AE20 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052E3A4 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x140531270 (HsaUpdateRemappingTableEntry.c)
 *     VslpVerifySessionSpace @ 0x14054CFD0 (VslpVerifySessionSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x140637D70 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140638FD4 (MiExtendPagingFileMaximum.c)
 *     MiSetPageFileAllocationBits @ 0x14063B5B8 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065C9CC (MiStoreSetPageFileRunEvicted.c)
 *     MiGetPrototypePteRanges @ 0x140669840 (MiGetPrototypePteRanges.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     SepAddLuidToIndexEntry @ 0x1406B781C (SepAddLuidToIndexEntry.c)
 *     MiLockdownSections @ 0x140705904 (MiLockdownSections.c)
 *     HvpRemoveFreeCellHint @ 0x14070A220 (HvpRemoveFreeCellHint.c)
 *     RtlMarkExceptionHandlingPages @ 0x1407455A0 (RtlMarkExceptionHandlingPages.c)
 *     HvCheckBin @ 0x140745770 (HvCheckBin.c)
 *     HvpAddFreeCellHint @ 0x140745EB4 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x140747110 (HvpMarkDirty.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F48A8 (SepGetLowBoxNumberEntry.c)
 *     HvpUpdateRecoveryVector @ 0x1407FE3D8 (HvpUpdateRecoveryVector.c)
 *     HalpIrtAllocateIndex @ 0x14081E298 (HalpIrtAllocateIndex.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085DE88 (HalpInitializeInterruptRemappingBspLate.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140976320 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A363B0 (MiCheckPatchesInSupportedSections.c)
 *     PnprMirrorMarkedPages @ 0x140A9D12C (PnprMirrorMarkedPages.c)
 *     PopCloneRange @ 0x140AA1DE4 (PopCloneRange.c)
 *     PopDiscardRange @ 0x140AA27FC (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140AA2B1C (PopGenerateUnHibernatedMdl.c)
 *     PopSetBootPhaseRange @ 0x140AA52D4 (PopSetBootPhaseRange.c)
 *     ViAllocateContiguousMemory @ 0x140AC7A9C (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140B5E38C (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140B5FB44 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void __stdcall RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToSet )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToSet;
    if ( (unsigned int)v4 + NumberToSet <= 8 )
    {
      v7 = byte_140018F88[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140016E88[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140018F88[v6];
      goto LABEL_4;
    }
  }
}
