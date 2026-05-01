/*
 * XREFs of wistd::__function::__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl(void)_::__clone @ 0x180195DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall wistd::__function::__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = &off_180642220;
  a2[1] = *(_QWORD *)(a1 + 8);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
           a2 + 2,
           (__int64 *)(a1 + 16));
}
