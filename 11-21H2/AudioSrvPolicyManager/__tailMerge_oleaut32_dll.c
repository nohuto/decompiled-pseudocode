/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x180003C9A
 * Callers:
 *     __imp_load_SysAllocString @ 0x180003C8E (__imp_load_SysAllocString.c)
 *     __imp_load_SafeArrayGetDim @ 0x180003D19 (__imp_load_SafeArrayGetDim.c)
 *     __imp_load_SafeArrayGetElemsize @ 0x180003D2B (__imp_load_SafeArrayGetElemsize.c)
 *     __imp_load_SafeArrayGetUBound @ 0x180003D3D (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayGetElement @ 0x180003D4F (__imp_load_SafeArrayGetElement.c)
 *     __imp_load_SafeArrayGetLBound @ 0x180003D61 (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayUnlock @ 0x180003D73 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayDestroy @ 0x180003D85 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x180003D97 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayLock @ 0x180003DA9 (__imp_load_SafeArrayLock.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180044280 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          &_DELAY_IMPORT_DESCRIPTOR_oleaut32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
