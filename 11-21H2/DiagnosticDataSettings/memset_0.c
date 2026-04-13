/*
 * XREFs of memset_0 @ 0x180004E0A
 * Callers:
 *     TelpReadUsersPolicySetting @ 0x1800020C8 (TelpReadUsersPolicySetting.c)
 *     TelIsOsInProcessorMode @ 0x180002830 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002AF0 (TelGetRegionalSettingsValue.c)
 *     McGenControlCallbackV2 @ 0x180002FE0 (McGenControlCallbackV2.c)
 *     __scrt_fastfail @ 0x180004830 (__scrt_fastfail.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
