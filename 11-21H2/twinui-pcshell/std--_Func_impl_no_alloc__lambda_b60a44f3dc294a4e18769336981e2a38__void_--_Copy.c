/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Copy @ 0x1801A8300
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_b60a44f3dc294a4e18769336981e2a38__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1806434F0;
  a2[1] = *(_QWORD *)(a1 + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    a2 + 2,
    (__int64 *)(a1 + 16));
  return a2;
}
