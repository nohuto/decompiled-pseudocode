/*
 * XREFs of __tailMerge_mmdevapi_dll @ 0x180067FDB
 * Callers:
 *     __imp_load_GenerateMediaEvent @ 0x180067FCF (__imp_load_GenerateMediaEvent.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore @ 0x1800682D4 (__imp_load_MMDeviceCreateRegistryPropertyStore.c)
 *     __imp_load_FlushDeviceTopologyCache @ 0x180068748 (__imp_load_FlushDeviceTopologyCache.c)
 *     __imp_load_RegisterForMediaCallback @ 0x1800689EA (__imp_load_RegisterForMediaCallback.c)
 *     __imp_load_UnregisterMediaCallback @ 0x1800689FC (__imp_load_UnregisterMediaCallback.c)
 *     __imp_load_mmdDevGetMMDeviceFromInterfaceId @ 0x180068A0E (__imp_load_mmdDevGetMMDeviceFromInterfaceId.c)
 *     __imp_load_mmdDevGetInstanceIdFromMMDeviceId @ 0x180068AD4 (__imp_load_mmdDevGetInstanceIdFromMMDeviceId.c)
 *     __imp_load_GetSessionIdFromEndpointId @ 0x180068B0A (__imp_load_GetSessionIdFromEndpointId.c)
 *     __imp_load_GetNeverSetAsDefaultProperty @ 0x180068BCB (__imp_load_GetNeverSetAsDefaultProperty.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore2 @ 0x180068C13 (__imp_load_MMDeviceCreateRegistryPropertyStore2.c)
 *     __imp_load_GetClassFromEndpointId @ 0x180068C25 (__imp_load_GetClassFromEndpointId.c)
 *     __imp_load_MMDeviceCreateAudioSystemEffectsPropertyStore @ 0x180068CE6 (__imp_load_MMDeviceCreateAudioSystemEffectsPropertyStore.c)
 *     __imp_load_CleanupDeviceAPI @ 0x180068DCB (__imp_load_CleanupDeviceAPI.c)
 *     __imp_load_mmdDevGetInterfaceIdFromMMDeviceId @ 0x18006A8B0 (__imp_load_mmdDevGetInterfaceIdFromMMDeviceId.c)
 *     __imp_load_mmdDevGetMMDeviceIdFromInterfaceId @ 0x18006A94D (__imp_load_mmdDevGetMMDeviceIdFromInterfaceId.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_mmdevapi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_mmdevapi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
