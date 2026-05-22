/*
 * XREFs of std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Copy @ 0x18019A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@QEAA@AEBV012@@Z @ 0x1801909F4 (--0-$AsyncDeferral@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Wi.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_07471f410bb64c4d3d31f6ab24fa2971__void_unsigned_short_const___::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  *a2 = off_18020C008;
  a2[1] = a1[1];
  Windows::Internal::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>::AsyncDeferral<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>>(
    a2 + 2,
    a1 + 2);
  a2[4] = a1[4];
  return a2;
}
