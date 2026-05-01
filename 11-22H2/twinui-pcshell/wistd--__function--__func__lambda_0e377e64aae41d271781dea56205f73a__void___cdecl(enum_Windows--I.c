/*
 * XREFs of wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::___func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_ @ 0x1801FE4F8
 * Callers:
 *     wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::_scalar_deleting_destructor_ @ 0x1801FED50 (wistd--__function--__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl(en_ea_1801FED50.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::___func__lambda_0e377e64aae41d271781dea56205f73a__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____(
        _QWORD *a1)
{
  __int64 *v2; // rcx
  void **result; // rax

  v2 = a1 + 2;
  if ( *v2 )
    winrt::com_ptr<XamlLauncher>::unconditional_release_ref(v2);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
