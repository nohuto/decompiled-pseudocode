/*
 * XREFs of __tailMerge_propsys_dll @ 0x18018B220
 * Callers:
 *     __imp_load_PSCreateMemoryPropertyStore @ 0x18018B214 (__imp_load_PSCreateMemoryPropertyStore.c)
 *     __imp_load_PropVariantToInt32 @ 0x18018B4BE (__imp_load_PropVariantToInt32.c)
 *     __imp_load_InitVariantFromDoubleArray @ 0x18018BD09 (__imp_load_InitVariantFromDoubleArray.c)
 *     __imp_load_PropVariantToBoolean @ 0x18018BDAB (__imp_load_PropVariantToBoolean.c)
 *     __imp_load_InitVariantFromStringArray @ 0x18018BDBD (__imp_load_InitVariantFromStringArray.c)
 *     __imp_load_PSPropertyBag_WriteDWORD @ 0x18018BF3F (__imp_load_PSPropertyBag_WriteDWORD.c)
 *     __imp_load_PropVariantToStringAlloc @ 0x18018BF51 (__imp_load_PropVariantToStringAlloc.c)
 *     __imp_load_PropVariantToUInt32 @ 0x18018BF63 (__imp_load_PropVariantToUInt32.c)
 *     __imp_load_PSPropertyBag_WriteStr @ 0x18018F0CB (__imp_load_PSPropertyBag_WriteStr.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
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
