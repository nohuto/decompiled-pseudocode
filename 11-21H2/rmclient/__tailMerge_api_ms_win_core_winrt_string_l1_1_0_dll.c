/*
 * XREFs of __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18000B592
 * Callers:
 *     __imp_load_WindowsStringHasEmbeddedNull @ 0x18000B586 (__imp_load_WindowsStringHasEmbeddedNull.c)
 *     __imp_load_WindowsIsStringEmpty @ 0x18000B69C (__imp_load_WindowsIsStringEmpty.c)
 *     __imp_load_WindowsGetStringRawBuffer @ 0x18000B75D (__imp_load_WindowsGetStringRawBuffer.c)
 *     __imp_load_WindowsCreateString @ 0x18000BB9B (__imp_load_WindowsCreateString.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180008CB0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_string_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
