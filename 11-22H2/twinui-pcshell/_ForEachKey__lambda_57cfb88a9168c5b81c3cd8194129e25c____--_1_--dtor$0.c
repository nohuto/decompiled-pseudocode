/*
 * XREFs of _ForEachKey__lambda_57cfb88a9168c5b81c3cd8194129e25c____::_1_::dtor$0 @ 0x180489511
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall ForEachKey__lambda_57cfb88a9168c5b81c3cd8194129e25c____::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>((HKEY *)(a2 + 88));
}
