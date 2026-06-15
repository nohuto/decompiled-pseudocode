/*
 * XREFs of __tailMerge_powrprof_dll @ 0x180017B14
 * Callers:
 *     __imp_load_PowerSettingUnregisterNotification @ 0x180017B08 (__imp_load_PowerSettingUnregisterNotification.c)
 *     __imp_load_GetPwrCapabilities @ 0x180017B93 (__imp_load_GetPwrCapabilities.c)
 *     __imp_load_PowerSettingRegisterNotification @ 0x180017BA5 (__imp_load_PowerSettingRegisterNotification.c)
 *     __imp_load_PowerSettingRegisterNotificationEx @ 0x180017BB7 (__imp_load_PowerSettingRegisterNotificationEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180048950 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_powrprof_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_powrprof_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
