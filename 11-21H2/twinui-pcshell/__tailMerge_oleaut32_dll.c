/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x180189D5B
 * Callers:
 *     __imp_load_VariantInit @ 0x180189D4F (__imp_load_VariantInit.c)
 *     __imp_load_SysAllocString @ 0x180189DDA (__imp_load_SysAllocString.c)
 *     __imp_load_VariantClear @ 0x180189FA5 (__imp_load_VariantClear.c)
 *     __imp_load_SysFreeString @ 0x180189FB7 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantCopy @ 0x180189FD5 (__imp_load_VariantCopy.c)
 *     __imp_load_SafeArrayCreate @ 0x18018A269 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayAccessData @ 0x18018A27B (__imp_load_SafeArrayAccessData.c)
 *     __imp_load_SafeArrayUnaccessData @ 0x18018A28D (__imp_load_SafeArrayUnaccessData.c)
 *     __imp_load_SafeArrayDestroy @ 0x18018A29F (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayGetDim @ 0x18018A50C (__imp_load_SafeArrayGetDim.c)
 *     __imp_load_SafeArrayCreateVector @ 0x18018A51E (__imp_load_SafeArrayCreateVector.c)
 *     __imp_load_SafeArrayPutElement @ 0x18018A530 (__imp_load_SafeArrayPutElement.c)
 *     __imp_load_VariantChangeType @ 0x18018EEAC (__imp_load_VariantChangeType.c)
 *     __imp_load_SetErrorInfo @ 0x18018F679 (__imp_load_SetErrorInfo.c)
 *     __imp_load_GetErrorInfo @ 0x18018F697 (__imp_load_GetErrorInfo.c)
 *     __imp_load_SysStringLen @ 0x18018F6C1 (__imp_load_SysStringLen.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18014D660 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_oleaut32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
