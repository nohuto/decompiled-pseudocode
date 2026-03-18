/*
 * XREFs of RtlClearAllBits @ 0x140290D50
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1406B781C (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140705164 (MiCaptureImageExceptionValues.c)
 *     CmCheckRegistry @ 0x140705210 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14070546C (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x140705530 (MiInitializePrivateFixupBitmap.c)
 *     HvStoreModifiedData @ 0x140707534 (HvStoreModifiedData.c)
 *     MiGetNewSessionId @ 0x1407A999C (MiGetNewSessionId.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F48A8 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407F5470 (SepInitializeLowBoxNumberTable.c)
 *     HvpPerformLogFileRecovery @ 0x14080028C (HvpPerformLogFileRecovery.c)
 *     MmStoreRegister @ 0x140832E04 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x14085DF6C (HalpIrtExtendRemappingRange.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x1409DB774 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409E8BC8 (EtwpUpdateStackTracing.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A363B0 (MiCheckPatchesInSupportedSections.c)
 *     MiPrepareToHotPatchImage @ 0x140A3A908 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x140A44920 (MiExpandPartitionIds.c)
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96D48 (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x140AC7A9C (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140AEE5A8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
