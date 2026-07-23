/*
 * XREFs of KsepPoolFreePaged @ 0x140209E80
 * Callers:
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     KsepDbFreeDriverShims @ 0x140694D3C (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x140808A00 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x140808C2C (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceInsertData @ 0x140808FF8 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootRelease @ 0x140843E74 (KsepSdbBootRelease.c)
 *     KsepCacheInitialize @ 0x140844824 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1408449DC (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140855840 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x14085A91C (KsepStringSplitMultiString.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085B9FC (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x140862088 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976F48 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1409772A0 (KseUnregisterShim.c)
 *     KsepCacheDeviceFree @ 0x1409778A0 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x140977990 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x140977C2C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977D28 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140977E1C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C40704);
  }
}
