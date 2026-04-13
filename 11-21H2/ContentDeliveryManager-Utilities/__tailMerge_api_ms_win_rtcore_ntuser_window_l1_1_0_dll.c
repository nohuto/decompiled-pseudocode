/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180022A6E
 * Callers:
 *     __imp_load_PostQuitMessage @ 0x180022A62 (__imp_load_PostQuitMessage.c)
 *     __imp_load_TranslateMessage @ 0x180022C03 (__imp_load_TranslateMessage.c)
 *     __imp_load_PeekMessageW @ 0x180022D2B (__imp_load_PeekMessageW.c)
 *     __imp_load_DispatchMessageW @ 0x180022D4F (__imp_load_DispatchMessageW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800E7D40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
