/*
 * XREFs of MiVadDeleted @ 0x1402756A0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x14071F590 (MiCleanVad.c)
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 *     MiMarkSharedImageCfgBits @ 0x140746EF4 (MiMarkSharedImageCfgBits.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 *     MiPrepareVadDelete @ 0x14076D6E4 (MiPrepareVadDelete.c)
 *     MiPopulateCfgBitMap @ 0x1407A4B60 (MiPopulateCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4EE0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x1408718D0 (NtAreMappedFilesTheSame.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A375BC (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x140A37774 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140A3B19C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B2C8 (MiProcessPatchImageCfg.c)
 *     MmIsFileMapped @ 0x140A3C89C (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E748 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A47FA8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
