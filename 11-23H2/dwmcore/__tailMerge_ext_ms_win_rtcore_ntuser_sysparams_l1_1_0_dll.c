/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18011068F
 * Callers:
 *     __imp_load_SystemParametersInfoW @ 0x180110683 (__imp_load_SystemParametersInfoW.c)
 *     __imp_load_GetDisplayConfigBufferSizes @ 0x18011070E (__imp_load_GetDisplayConfigBufferSizes.c)
 *     __imp_load_QueryDisplayConfig @ 0x180110720 (__imp_load_QueryDisplayConfig.c)
 *     __imp_load_GetSystemMetrics @ 0x180110F86 (__imp_load_GetSystemMetrics.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F9090 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
