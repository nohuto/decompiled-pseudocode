/*
 * XREFs of __tailMerge_shcore_dll @ 0x1801CCC43
 * Callers:
 *     __imp_load_IsAppCompatModeEnabled @ 0x1801CCC37 (__imp_load_IsAppCompatModeEnabled.c)
 *     __imp_load_GetSystemScaleFactorForWindow @ 0x1801CCCC2 (__imp_load_GetSystemScaleFactorForWindow.c)
 *     __imp_load_GetOverrideScaleFactorForWindow @ 0x1801CCCD4 (__imp_load_GetOverrideScaleFactorForWindow.c)
 *     __imp_load_GetLegacyModernScaleFactor @ 0x1801CCCE6 (__imp_load_GetLegacyModernScaleFactor.c)
 *     __imp_load_SHWindowsPolicy @ 0x1801CCCF8 (__imp_load_SHWindowsPolicy.c)
 *     __imp_load_SHQueueUserWorkItem @ 0x1801CCD0A (__imp_load_SHQueueUserWorkItem.c)
 *     __imp_load_RevokeScaleChangeNotificationsForWindow @ 0x1801CCD1C (__imp_load_RevokeScaleChangeNotificationsForWindow.c)
 *     __imp_load_RegisterScaleChangeSinkForWindow @ 0x1801CCD2E (__imp_load_RegisterScaleChangeSinkForWindow.c)
 *     __imp_load_GetMonitorSizeOverride @ 0x1801CCD40 (__imp_load_GetMonitorSizeOverride.c)
 *     __imp_load_UpdateScalingInfoCache @ 0x1801CCD52 (__imp_load_UpdateScalingInfoCache.c)
 *     __imp_load_SHWindowsPolicyGetValue @ 0x1801CCD64 (__imp_load_SHWindowsPolicyGetValue.c)
 *     __imp_load_SHGetObjectCompatFlags @ 0x1801CCD76 (__imp_load_SHGetObjectCompatFlags.c)
 *     __imp_load_IUnknown_RemoveBackReferences @ 0x1801CEE3D (__imp_load_IUnknown_RemoveBackReferences.c)
 *     __imp_load_ualstrlenW @ 0x1801CEE4F (__imp_load_ualstrlenW.c)
 *     __imp_load_SHIsEmptyStream @ 0x1801CEE61 (__imp_load_SHIsEmptyStream.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
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
