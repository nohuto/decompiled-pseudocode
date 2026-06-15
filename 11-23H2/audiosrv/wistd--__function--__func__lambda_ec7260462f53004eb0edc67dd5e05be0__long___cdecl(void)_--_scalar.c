/*
 * XREFs of wistd::__function::__func__lambda_ec7260462f53004eb0edc67dd5e05be0__long___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1800EB490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_ec7260462f53004eb0edc67dd5e05be0__long___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
