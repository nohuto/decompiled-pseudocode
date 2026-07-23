/*
 * XREFs of KsepPoolAllocatePaged @ 0x140209EA8
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AF96C (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicate @ 0x1406942D4 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140694384 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140694900 (KsepStringDuplicateUnicode.c)
 *     KsepDbGetDriverShims @ 0x140694A54 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDevice @ 0x1408087EC (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x140808A00 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140808C2C (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceInsertData @ 0x140808FF8 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x140844824 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1408449DC (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140855840 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x14085A91C (KsepStringSplitMultiString.c)
 *     KsepSdbBootInitialize @ 0x140862088 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976F48 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryEnumValue @ 0x140977C2C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977D28 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140977E1C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocatePaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, Size, 1631933259LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140C40700);
    memset(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C40710);
  }
  return v3;
}
