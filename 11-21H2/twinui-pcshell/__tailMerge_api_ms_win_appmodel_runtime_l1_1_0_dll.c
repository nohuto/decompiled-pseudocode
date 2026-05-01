/*
 * XREFs of __tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll @ 0x18018B5C1
 * Callers:
 *     __imp_load_GetPackageFullName @ 0x18018B5B5 (__imp_load_GetPackageFullName.c)
 *     __imp_load_GetPackagesByPackageFamily @ 0x18018F02E (__imp_load_GetPackagesByPackageFamily.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_appmodel_runtime_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
