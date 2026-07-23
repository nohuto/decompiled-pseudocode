/*
 * XREFs of MiReferenceControlAreaFile @ 0x1402A2664
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406AB91C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x1406AF6D4 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x1406B9694 (MmCreateSpecialImageSection.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 *     MmExtendSection @ 0x140706714 (MmExtendSection.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14071F4A4 (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x140722910 (MiCreateSectionCommon.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4EE0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmFlushVirtualMemory @ 0x1407B4538 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1408718D0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1408ABF5E (MmGetFileNameForAddress.c)
 *     MiFillMapFileInfo @ 0x1408AC07A (MiFillMapFileInfo.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC2EE (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E9A4 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140A30DA4 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x140A33318 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140A3C89C (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E9F8 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     MiReferenceControlAreaFileWithTag @ 0x1402A2680 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  return MiReferenceControlAreaFileWithTag(a1, 1666411853LL);
}
