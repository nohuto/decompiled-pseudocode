/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x1801C7D7B
 * Callers:
 *     __imp_load_VariantInit @ 0x1801C7D6F (__imp_load_VariantInit.c)
 *     __imp_load_SysAllocString @ 0x1801C7DFA (__imp_load_SysAllocString.c)
 *     __imp_load_VariantClear @ 0x1801C8074 (__imp_load_VariantClear.c)
 *     __imp_load_SysFreeString @ 0x1801C8086 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantCopy @ 0x1801C80A4 (__imp_load_VariantCopy.c)
 *     __imp_load_SafeArrayCreate @ 0x1801C84A9 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayAccessData @ 0x1801C84BB (__imp_load_SafeArrayAccessData.c)
 *     __imp_load_SafeArrayUnaccessData @ 0x1801C84CD (__imp_load_SafeArrayUnaccessData.c)
 *     __imp_load_SafeArrayDestroy @ 0x1801C84DF (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SysStringLen @ 0x1801C8746 (__imp_load_SysStringLen.c)
 *     __imp_load_SafeArrayGetDim @ 0x1801C8776 (__imp_load_SafeArrayGetDim.c)
 *     __imp_load_SafeArrayCreateVector @ 0x1801C8788 (__imp_load_SafeArrayCreateVector.c)
 *     __imp_load_SafeArrayPutElement @ 0x1801C879A (__imp_load_SafeArrayPutElement.c)
 *     __imp_load_VariantChangeType @ 0x1801CE03C (__imp_load_VariantChangeType.c)
 *     __imp_load_SetErrorInfo @ 0x1801CEF71 (__imp_load_SetErrorInfo.c)
 *     __imp_load_GetErrorInfo @ 0x1801CEF8F (__imp_load_GetErrorInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
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
