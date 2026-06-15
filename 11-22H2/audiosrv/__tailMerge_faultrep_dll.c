/*
 * XREFs of __tailMerge_faultrep_dll @ 0x180068F60
 * Callers:
 *     __imp_load_ReportCoreHang @ 0x180068F54 (__imp_load_ReportCoreHang.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054F90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_faultrep_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_faultrep_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
