/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_0_dll @ 0x18018ABC6
 * Callers:
 *     __imp_load_GetWindowBand @ 0x18018ABBA (__imp_load_GetWindowBand.c)
 *     __imp_load_IsWindowInDestroy @ 0x18018AD3C (__imp_load_IsWindowInDestroy.c)
 *     __imp_load_CreateWindowInBand @ 0x18018AEF6 (__imp_load_CreateWindowInBand.c)
 *     __imp_load_CreateWindowInBandEx @ 0x18018B4D0 (__imp_load_CreateWindowInBandEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_private_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
