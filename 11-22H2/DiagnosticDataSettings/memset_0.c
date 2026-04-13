/*
 * XREFs of memset_0 @ 0x1800059BA
 * Callers:
 *     TelpReadUsersPolicySetting @ 0x1800024B8 (TelpReadUsersPolicySetting.c)
 *     TelIsOsInProcessorMode @ 0x180002C30 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002EF0 (TelGetRegionalSettingsValue.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180003328 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x1800034E4 (TelpReadOfflineSoftwareRegistryString.c)
 *     McGenControlCallbackV2 @ 0x180003A00 (McGenControlCallbackV2.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180004434 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     __scrt_fastfail @ 0x1800053DC (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
