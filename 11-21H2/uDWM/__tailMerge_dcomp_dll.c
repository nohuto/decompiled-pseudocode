/*
 * XREFs of __tailMerge_dcomp_dll @ 0x180061B20
 * Callers:
 *     __imp_load_DCompositionCreateDevice3 @ 0x180061B14 (__imp_load_DCompositionCreateDevice3.c)
 *     __imp_load_DCompositionCreateSharedVisualHandle @ 0x180061B9F (__imp_load_DCompositionCreateSharedVisualHandle.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18005E580 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dcomp_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_dcomp_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
