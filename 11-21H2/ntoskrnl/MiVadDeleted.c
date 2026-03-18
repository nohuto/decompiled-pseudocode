/*
 * XREFs of MiVadDeleted @ 0x14030EB80
 * Callers:
 *     MiPopulateCfgBitMap @ 0x1406F5F80 (MiPopulateCfgBitMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiMarkSharedImageCfgBits @ 0x1406F77DC (MiMarkSharedImageCfgBits.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x1406F8C0C (MiCleanVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MiPrepareVadDelete @ 0x14079D5B4 (MiPrepareVadDelete.c)
 *     MiReturnPageTablePageCommitment @ 0x1407B92D0 (MiReturnPageTablePageCommitment.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MiGetVadForHotPatchInProgress @ 0x140973534 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140976DFC (MiPrepareToHotPatchVad.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14097EF10 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
