/*
 * XREFs of RtlClearAllBits @ 0x140290FE0
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x1406B7850 (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140705374 (MiCaptureImageExceptionValues.c)
 *     CmCheckRegistry @ 0x140705420 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14070567C (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x140705740 (MiInitializePrivateFixupBitmap.c)
 *     HvStoreModifiedData @ 0x140707744 (HvStoreModifiedData.c)
 *     MiGetNewSessionId @ 0x1407A9B8C (MiGetNewSessionId.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4B78 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407F5740 (SepInitializeLowBoxNumberTable.c)
 *     HvpPerformLogFileRecovery @ 0x14080055C (HvpPerformLogFileRecovery.c)
 *     MmStoreRegister @ 0x140833104 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x14085E1AC (HalpIrtExtendRemappingRange.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x1409DB974 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409E8E58 (EtwpUpdateStackTracing.c)
 *     MiCheckPatchesInSupportedSections @ 0x140A36660 (MiCheckPatchesInSupportedSections.c)
 *     MiPrepareToHotPatchImage @ 0x140A3ABB8 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x140A44BD0 (MiExpandPartitionIds.c)
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96BB8 (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x140AC7A8C (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140AEE5A8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
