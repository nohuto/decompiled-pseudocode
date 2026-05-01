/*
 * XREFs of __tailMerge_shcore_dll @ 0x18018D9CD
 * Callers:
 *     __imp_load_IsAppCompatModeEnabled @ 0x18018D9C1 (__imp_load_IsAppCompatModeEnabled.c)
 *     __imp_load_GetSystemScaleFactorForWindow @ 0x18018DA4C (__imp_load_GetSystemScaleFactorForWindow.c)
 *     __imp_load_GetOverrideScaleFactorForWindow @ 0x18018DA5E (__imp_load_GetOverrideScaleFactorForWindow.c)
 *     __imp_load_GetLegacyModernScaleFactor @ 0x18018DA70 (__imp_load_GetLegacyModernScaleFactor.c)
 *     __imp_load_SHWindowsPolicy @ 0x18018DA82 (__imp_load_SHWindowsPolicy.c)
 *     __imp_load_SHQueueUserWorkItem @ 0x18018DA94 (__imp_load_SHQueueUserWorkItem.c)
 *     __imp_load_RevokeScaleChangeNotificationsForWindow @ 0x18018DAA6 (__imp_load_RevokeScaleChangeNotificationsForWindow.c)
 *     __imp_load_RegisterScaleChangeSinkForWindow @ 0x18018DAB8 (__imp_load_RegisterScaleChangeSinkForWindow.c)
 *     __imp_load_GetMonitorSizeOverride @ 0x18018DACA (__imp_load_GetMonitorSizeOverride.c)
 *     __imp_load_UpdateScalingInfoCache @ 0x18018DADC (__imp_load_UpdateScalingInfoCache.c)
 *     __imp_load_SHWindowsPolicyGetValue @ 0x18018DAEE (__imp_load_SHWindowsPolicyGetValue.c)
 *     __imp_load_IUnknown_RemoveBackReferences @ 0x18018F5D7 (__imp_load_IUnknown_RemoveBackReferences.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_shcore_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_shcore_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
