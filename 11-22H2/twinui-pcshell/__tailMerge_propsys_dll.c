/*
 * XREFs of __tailMerge_propsys_dll @ 0x1801C9BF0
 * Callers:
 *     __imp_load_PSCreateMemoryPropertyStore @ 0x1801C9BE4 (__imp_load_PSCreateMemoryPropertyStore.c)
 *     __imp_load_PropVariantToInt32 @ 0x1801C9F73 (__imp_load_PropVariantToInt32.c)
 *     __imp_load_InitVariantFromDoubleArray @ 0x1801CA85B (__imp_load_InitVariantFromDoubleArray.c)
 *     __imp_load_InitVariantFromStringArray @ 0x1801CA8FD (__imp_load_InitVariantFromStringArray.c)
 *     __imp_load_PropVariantToBoolean @ 0x1801CA9F4 (__imp_load_PropVariantToBoolean.c)
 *     __imp_load_PropVariantToStringAlloc @ 0x1801CAB39 (__imp_load_PropVariantToStringAlloc.c)
 *     __imp_load_PSPropertyBag_WriteDWORD @ 0x1801CABE8 (__imp_load_PSPropertyBag_WriteDWORD.c)
 *     __imp_load_PropVariantToUInt32 @ 0x1801CABFA (__imp_load_PropVariantToUInt32.c)
 *     __imp_load_PSPropertyBag_WriteStr @ 0x1801CE593 (__imp_load_PSPropertyBag_WriteStr.c)
 *     __imp_load_PSGetPropertyFromPropertyStorage @ 0x1801CE7E1 (__imp_load_PSGetPropertyFromPropertyStorage.c)
 *     __imp_load_VariantToBuffer @ 0x1801CEF29 (__imp_load_VariantToBuffer.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
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
