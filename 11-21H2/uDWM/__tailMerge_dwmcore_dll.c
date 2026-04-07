/*
 * XREFs of __tailMerge_dwmcore_dll @ 0x180061937
 * Callers:
 *     __imp_load_?MilCompositionEngine_CreateChannel@@YAJPEAPEAUIDwmChannel@@@Z @ 0x18006192B (__imp_load_-MilCompositionEngine_CreateChannel@@YAJPEAPEAUIDwmChannel@@@Z.c)
 *     __imp_load_?MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z @ 0x1800619B6 (__imp_load_-MilCompositionEngine_GetComposedEventId@@YAJPEAI@Z.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18005E580 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dwmcore_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_dwmcore_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
