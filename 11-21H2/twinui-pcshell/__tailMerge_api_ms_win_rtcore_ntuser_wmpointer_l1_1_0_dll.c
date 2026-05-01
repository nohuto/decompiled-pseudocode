/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18018B70D
 * Callers:
 *     __imp_load_GetPointerDevices @ 0x18018B701 (__imp_load_GetPointerDevices.c)
 *     __imp_load_GetPointerType @ 0x18018BC00 (__imp_load_GetPointerType.c)
 *     __imp_load_GetPointerInfo @ 0x18018BC12 (__imp_load_GetPointerInfo.c)
 *     __imp_load_GetPointerDeviceRects @ 0x18018BC24 (__imp_load_GetPointerDeviceRects.c)
 *     __imp_load_GetCurrentInputMessageSource @ 0x18018F17A (__imp_load_GetCurrentInputMessageSource.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
