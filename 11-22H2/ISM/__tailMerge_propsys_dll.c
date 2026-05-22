/*
 * XREFs of __tailMerge_propsys_dll @ 0x180057D85
 * Callers:
 *     __imp_load_PropVariantToUInt64 @ 0x180057D79 (__imp_load_PropVariantToUInt64.c)
 *     __imp_load_PropVariantToBoolean @ 0x180057E04 (__imp_load_PropVariantToBoolean.c)
 *     __imp_load_PropVariantToDouble @ 0x180057E16 (__imp_load_PropVariantToDouble.c)
 *     __imp_load_PropVariantToStringAlloc @ 0x1800587E3 (__imp_load_PropVariantToStringAlloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180053540 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_propsys_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_propsys_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
