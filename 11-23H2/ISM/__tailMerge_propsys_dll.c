/*
 * XREFs of __tailMerge_propsys_dll @ 0x180056FF5
 * Callers:
 *     __imp_load_PropVariantToUInt64 @ 0x180056FE9 (__imp_load_PropVariantToUInt64.c)
 *     __imp_load_PropVariantToBoolean @ 0x180057074 (__imp_load_PropVariantToBoolean.c)
 *     __imp_load_PropVariantToDouble @ 0x180057086 (__imp_load_PropVariantToDouble.c)
 *     __imp_load_PropVariantToStringAlloc @ 0x1800579C5 (__imp_load_PropVariantToStringAlloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180052880 (__delayLoadHelper2.c)
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
