/*
 * XREFs of KsepPoolAllocatePaged @ 0x1402D84BC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14057D77C (KsepEvntLogShimsApplied.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075C380 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetDriverShims @ 0x14075C460 (KsepDbGetDriverShims.c)
 *     KsepGetShimsForDriver @ 0x14075C7BC (KsepGetShimsForDriver.c)
 *     KsepStringDuplicate @ 0x14075C924 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14075C9D4 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075CC14 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14075CDF8 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x1407EC8C4 (KseAddHardwareId.c)
 *     KsepDbCacheReadDevice @ 0x1407ED450 (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x140825A70 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140825DCC (KsepGetLoadedModulesList.c)
 *     KsepRegistryQuerySZ @ 0x140826C10 (KsepRegistryQuerySZ.c)
 *     KsepCacheInitialize @ 0x140826D50 (KsepCacheInitialize.c)
 *     KsepSdbBootInitialize @ 0x1408277FC (KsepSdbBootInitialize.c)
 *     KsepCacheDeviceInsertData @ 0x14085C084 (KsepCacheDeviceInsertData.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140963B40 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140964E64 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1409653FC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1409654F8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1409655BC (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A1A0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A1B0);
  }
  return v3;
}
