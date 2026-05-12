/*
 * XREFs of DllUnload @ 0x1C0064D60
 * Callers:
 *     <none>
 * Callees:
 *     StorpShutdownRegistryWatch @ 0x1C0021EC4 (StorpShutdownRegistryWatch.c)
 *     RaidFreeATADeviceIdMappings @ 0x1C0041A88 (RaidFreeATADeviceIdMappings.c)
 *     RaidFreeEnclosureIdMappings @ 0x1C0041B04 (RaidFreeEnclosureIdMappings.c)
 *     UnloadExtensionDriver @ 0x1C0042E60 (UnloadExtensionDriver.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0073708 (RaidSecondaryDumpDeregister.c)
 *     wil_UninitializeFeatureStaging @ 0x1C009F0D4 (wil_UninitializeFeatureStaging.c)
 *     StorpWheaRemoveErrorSource @ 0x1C00A94D0 (StorpWheaRemoveErrorSource.c)
 *     StorpUnregisterShim @ 0x1C00AB234 (StorpUnregisterShim.c)
 */

__int64 DllUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8

  if ( _InterlockedExchangeAdd(&NumDllInitialize, 0xFFFFFFFF) == 1 )
  {
    StorpUnregisterShim();
    RaidFreeEnclosureIdMappings();
    ExDeleteResourceLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData);
    RaidFreeATADeviceIdMappings();
    ExDeleteResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    if ( RegWatchContext )
    {
      StorpShutdownRegistryWatch((__int64)RegWatchContext);
      ExFreePoolWithTag(RegWatchContext, 0x57526152u);
      RegWatchContext = 0LL;
    }
    StorpWheaRemoveErrorSource();
    UnloadExtensionDriver(v1, v0, v2);
  }
  wil_UninitializeFeatureStaging();
  return RaidSecondaryDumpDeregister();
}
