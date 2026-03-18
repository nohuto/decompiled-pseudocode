/*
 * XREFs of MiDereferenceControlAreaFile @ 0x1402A23C0
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     MiParseImageLoadConfig @ 0x1406A828C (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406AB91C (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x1406AB9A4 (MiParseComAndCetHeaders.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MiAllowImageMap @ 0x1406AF6A4 (MiAllowImageMap.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MmExtendSection @ 0x1407065B4 (MmExtendSection.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14071F314 (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140871B60 (NtAreMappedFilesTheSame.c)
 *     MiFillMapFileInfo @ 0x1408AC30A (MiFillMapFileInfo.c)
 *     MmSectionToSectionObjectPointers @ 0x1408AC57E (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x140A2E764 (MmGetFileNameForSection.c)
 *     MiLoadUserSymbols @ 0x140A30B64 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x140A330D8 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x140A3C65C (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E7B8 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A23E0 (ObFastDereferenceObjectDeferDelete.c)
 */

__int64 __fastcall MiDereferenceControlAreaFile(__int64 a1, __int64 a2)
{
  return ObFastDereferenceObjectDeferDelete(a1 + 64, a2, 1666411853LL);
}
