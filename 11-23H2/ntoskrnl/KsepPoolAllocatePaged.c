/*
 * XREFs of KsepPoolAllocatePaged @ 0x140209EA8
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AF78C (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicate @ 0x1406942D4 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140694384 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140694900 (KsepStringDuplicateUnicode.c)
 *     KsepDbGetDriverShims @ 0x140694A54 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDevice @ 0x14080851C (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x140808730 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14080895C (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceInsertData @ 0x140808D28 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x140844524 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1408446DC (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140855540 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x14085A6DC (KsepStringSplitMultiString.c)
 *     KsepSdbBootInitialize @ 0x140861E48 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976D48 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryEnumValue @ 0x140977A2C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977B28 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140977C1C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
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
    _InterlockedIncrement(&dword_140C40740);
    memset(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C40750);
  }
  return v3;
}
