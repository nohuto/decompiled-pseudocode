/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x180067CB0
 * Callers:
 *     __imp_load_SysFreeString @ 0x180067CA4 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x18006830C (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x18006831E (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x1800683BB (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x1800683CD (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x1800683DF (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x1800683F1 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x180068403 (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x180068415 (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x180068427 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x180068439 (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x180068A10 (__imp_load_SysAllocString.c)
 *     __imp_load_BSTR_UserSize @ 0x18006A21C (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x18006A22E (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x18006A240 (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x18006A252 (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x18006A264 (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x18006A276 (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x18006A288 (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x18006A29A (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x18006A2AC (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x18006A2BE (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x18006A2D0 (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x18006A2E2 (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x18006A2F4 (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x18006A306 (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x18006A318 (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x18006A32A (__imp_load_BSTR_UserMarshal64.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054F90 (__delayLoadHelper2.c)
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
