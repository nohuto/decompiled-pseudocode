/*
 * XREFs of __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x1800686B9
 * Callers:
 *     __imp_load_PowerSettingRegisterNotification @ 0x1800686AD (__imp_load_PowerSettingRegisterNotification.c)
 *     __imp_load_PowerSettingUnregisterNotification @ 0x180068DA9 (__imp_load_PowerSettingUnregisterNotification.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054F90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_power_setting_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_power_setting_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
