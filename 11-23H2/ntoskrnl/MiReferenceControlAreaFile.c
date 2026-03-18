/*
 * XREFs of MiReferenceControlAreaFile @ 0x1402A23D4
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406AB91C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1406AF6A4 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MmLoadSystemImageEx @ 0x140703DC0 (MmLoadSystemImageEx.c)
 *     MmExtendSection @ 0x140706504 (MmExtendSection.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14071F2A4 (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x140722710 (MiCreateSectionCommon.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmFlushVirtualMemory @ 0x1407B4258 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140871690 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408ABD0E (MmGetFileNameForAddress.c)
 *     MiFillMapFileInfo @ 0x1408ABE2A (MiFillMapFileInfo.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC09E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E6F4 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140A30AF4 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x140A33068 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140A3C5EC (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E748 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x1402A23F0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  return MiReferenceControlAreaFileWithTag(a1, 1666411853LL);
}
