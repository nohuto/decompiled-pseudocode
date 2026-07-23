/*
 * XREFs of RtlSetBits @ 0x1402E07C0
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x1402948D4 (MiReduceMappedFileReadAhead.c)
 *     MiFindFreePageFileSpace @ 0x140294964 (MiFindFreePageFileSpace.c)
 *     RtlFindClearBitsAndSet @ 0x140296130 (RtlFindClearBitsAndSet.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E0000 (MiBuildMdlForMappedFileFault.c)
 *     MiDecayNodeNowEmpty @ 0x14034ABE0 (MiDecayNodeNowEmpty.c)
 *     MiReduceMappedFileReadBehind @ 0x1403534B0 (MiReduceMappedFileReadBehind.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuProcessDeviceEntries @ 0x14052E8F4 (HalpIommuProcessDeviceEntries.c)
 *     HsaUpdateRemappingTableEntry @ 0x1405317C0 (HsaUpdateRemappingTableEntry.c)
 *     VslpVerifySessionSpace @ 0x14054D690 (VslpVerifySessionSpace.c)
 *     MiAttemptPageFileReductionApc @ 0x1406382C0 (MiAttemptPageFileReductionApc.c)
 *     MiExtendPagingFileMaximum @ 0x140639524 (MiExtendPagingFileMaximum.c)
 *     MiSetPageFileAllocationBits @ 0x14063BB08 (MiSetPageFileAllocationBits.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065CF1C (MiStoreSetPageFileRunEvicted.c)
 *     MiGetPrototypePteRanges @ 0x140669D90 (MiGetPrototypePteRanges.c)
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     SepAddLuidToIndexEntry @ 0x1406B7850 (SepAddLuidToIndexEntry.c)
 *     MiLockdownSections @ 0x140705B14 (MiLockdownSections.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     RtlMarkExceptionHandlingPages @ 0x140745790 (RtlMarkExceptionHandlingPages.c)
 *     HvCheckBin @ 0x140745960 (HvCheckBin.c)
 *     HvpAddFreeCellHint @ 0x1407460A4 (HvpAddFreeCellHint.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4B78 (SepGetLowBoxNumberEntry.c)
 *     HvpUpdateRecoveryVector @ 0x1407FE6A8 (HvpUpdateRecoveryVector.c)
 *     HalpIrtAllocateIndex @ 0x14081E568 (HalpIrtAllocateIndex.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     HalpInitializeInterruptRemappingBspLate @ 0x14085E0C8 (HalpInitializeInterruptRemappingBspLate.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140976520 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A36660 (MiCheckPatchesInSupportedSections.c)
 *     PnprMirrorMarkedPages @ 0x140A9CF9C (PnprMirrorMarkedPages.c)
 *     PopCloneRange @ 0x140AA1C54 (PopCloneRange.c)
 *     PopDiscardRange @ 0x140AA266C (PopDiscardRange.c)
 *     PopGenerateUnHibernatedMdl @ 0x140AA298C (PopGenerateUnHibernatedMdl.c)
 *     PopSetBootPhaseRange @ 0x140AA5144 (PopSetBootPhaseRange.c)
 *     ViAllocateContiguousMemory @ 0x140AC7A8C (ViAllocateContiguousMemory.c)
 *     MiReserveBootDriverPtes @ 0x140B5E38C (MiReserveBootDriverPtes.c)
 *     MiInitializeTopLevelBitmap @ 0x140B5FB44 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
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
      v7 = byte_140018F80[NumberToSet] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToSet - 8;
      *v5++ |= byte_140016E78[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140018F80[v6];
      goto LABEL_4;
    }
  }
}
