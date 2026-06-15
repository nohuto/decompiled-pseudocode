/*
 * XREFs of __tailMerge_mmdevapi_dll @ 0x18006009E
 * Callers:
 *     __imp_load_FlushDeviceTopologyCache @ 0x180060092 (__imp_load_FlushDeviceTopologyCache.c)
 *     __imp_load_mmdDevGetInstanceIdFromMMDeviceId @ 0x180060495 (__imp_load_mmdDevGetInstanceIdFromMMDeviceId.c)
 *     __imp_load_GenerateMediaEvent @ 0x1800604A7 (__imp_load_GenerateMediaEvent.c)
 *     __imp_load_GetSessionIdFromEndpointId @ 0x1800604CB (__imp_load_GetSessionIdFromEndpointId.c)
 *     __imp_load_MMDeviceCreateRegistryPropertyStore @ 0x18006075B (__imp_load_MMDeviceCreateRegistryPropertyStore.c)
 *     __imp_load_mmdDevGetMMDeviceFromInterfaceId @ 0x18006077F (__imp_load_mmdDevGetMMDeviceFromInterfaceId.c)
 *     __imp_load_GetNeverSetAsDefaultProperty @ 0x180060A14 (__imp_load_GetNeverSetAsDefaultProperty.c)
 *     __imp_load_GetClassFromEndpointId @ 0x180060A6E (__imp_load_GetClassFromEndpointId.c)
 *     __imp_load_CleanupDeviceAPI @ 0x180060B65 (__imp_load_CleanupDeviceAPI.c)
 *     __imp_load_mmdDevGetInterfaceIdFromMMDeviceId @ 0x1800625C0 (__imp_load_mmdDevGetInterfaceIdFromMMDeviceId.c)
 *     __imp_load_mmdDevGetMMDeviceIdFromInterfaceId @ 0x18006265D (__imp_load_mmdDevGetMMDeviceIdFromInterfaceId.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800428C0 (__delayLoadHelper2.c)
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
