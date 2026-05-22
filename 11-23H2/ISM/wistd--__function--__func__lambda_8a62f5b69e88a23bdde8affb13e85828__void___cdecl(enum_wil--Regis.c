/*
 * XREFs of wistd::__function::__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(enum_wil::RegistryChangeKind)_::_scalar_deleting_destructor_ @ 0x1800D2020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl_enum_wil::RegistryChangeKind__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
