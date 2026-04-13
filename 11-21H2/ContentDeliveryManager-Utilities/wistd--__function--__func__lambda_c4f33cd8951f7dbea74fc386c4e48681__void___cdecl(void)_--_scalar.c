/*
 * XREFs of wistd::__function::__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x18006EBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_c4f33cd8951f7dbea74fc386c4e48681__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
