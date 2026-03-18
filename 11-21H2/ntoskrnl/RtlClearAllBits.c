/*
 * XREFs of RtlClearAllBits @ 0x14020AE80
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140672348 (SepAddLuidToIndexEntry.c)
 *     HvStoreModifiedData @ 0x140689424 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x140689DC8 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14068A024 (HvResetDirtyData.c)
 *     SepInitializeLowBoxNumberTable @ 0x140695078 (SepInitializeLowBoxNumberTable.c)
 *     SepGetLowBoxNumberEntry @ 0x140696750 (SepGetLowBoxNumberEntry.c)
 *     MiInitializePrivateFixupBitmap @ 0x1406F3738 (MiInitializePrivateFixupBitmap.c)
 *     MiCaptureImageExceptionValues @ 0x140761188 (MiCaptureImageExceptionValues.c)
 *     MiGetNewSessionId @ 0x1407F3534 (MiGetNewSessionId.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     MmStoreRegister @ 0x14084A7D0 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x140909EB0 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 *     MiCheckPatchesInSupportedSections @ 0x140972A10 (MiCheckPatchesInSupportedSections.c)
 *     MiPrepareToHotPatchImage @ 0x140976880 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x140981778 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1409D8588 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409E5988 (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A62018 (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x140A870B0 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140AADC80 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
