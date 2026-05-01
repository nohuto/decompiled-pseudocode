/*
 * XREFs of __anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor$0 @ 0x1806A19C4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18045AC34 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 */

BOOL __fastcall _anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  BOOL result; // eax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(*(void ***)(a2 + 64));
  }
  return result;
}
