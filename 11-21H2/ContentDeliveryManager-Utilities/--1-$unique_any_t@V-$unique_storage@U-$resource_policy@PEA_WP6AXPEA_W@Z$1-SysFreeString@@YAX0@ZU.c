/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEA_W@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180028F74
 * Callers:
 *     __lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::dtor$7 @ 0x1800EE547 (__lambda_88e8518c21b209df1a80e5a49785653d_--operator()_--_1_--dtor$7.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$6 @ 0x1800F5F7F (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>(
        OLECHAR **a1)
{
  OLECHAR *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SysFreeString(v1);
}
