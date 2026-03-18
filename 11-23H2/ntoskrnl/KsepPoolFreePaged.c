/*
 * XREFs of KsepPoolFreePaged @ 0x140209E80
 * Callers:
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     KsepDbFreeDriverShims @ 0x140694D3C (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x140808730 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14080895C (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceInsertData @ 0x140808D28 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootRelease @ 0x140843B74 (KsepSdbBootRelease.c)
 *     KsepCacheInitialize @ 0x140844524 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1408446DC (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140855540 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x14085A6DC (KsepStringSplitMultiString.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085B7BC (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x140861E48 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976D48 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1409770A0 (KseUnregisterShim.c)
 *     KsepCacheDeviceFree @ 0x1409776A0 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x140977790 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x140977A2C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977B28 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140977C1C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C40744);
  }
}
