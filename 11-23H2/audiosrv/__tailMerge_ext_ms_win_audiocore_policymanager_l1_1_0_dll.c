/*
 * XREFs of __tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll @ 0x180069D11
 * Callers:
 *     __imp_load_AudioPolicyManagerExtension_IsStrictMatchFormatEnforced @ 0x180069D05 (__imp_load_AudioPolicyManagerExtension_IsStrictMatchFormatEnforced.c)
 *     __imp_load_AudioPolicyManagerExtension_OnDeviceFormatChanged @ 0x180069DE4 (__imp_load_AudioPolicyManagerExtension_OnDeviceFormatChanged.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_audiocore_policymanager_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
