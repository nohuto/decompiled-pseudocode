/*
 * XREFs of MiVadDeleted @ 0x140275410
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x14071F390 (MiCleanVad.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiMarkSharedImageCfgBits @ 0x140746D04 (MiMarkSharedImageCfgBits.c)
 *     MiReturnPageTablePageCommitment @ 0x140764990 (MiReturnPageTablePageCommitment.c)
 *     MiPrepareVadDelete @ 0x14076D4F4 (MiPrepareVadDelete.c)
 *     MiPopulateCfgBitMap @ 0x1407A4970 (MiPopulateCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x140871690 (NtAreMappedFilesTheSame.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3730C (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x140A374C4 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140A3AEEC (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B018 (MiProcessPatchImageCfg.c)
 *     MmIsFileMapped @ 0x140A3C5EC (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E498 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47CF8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
