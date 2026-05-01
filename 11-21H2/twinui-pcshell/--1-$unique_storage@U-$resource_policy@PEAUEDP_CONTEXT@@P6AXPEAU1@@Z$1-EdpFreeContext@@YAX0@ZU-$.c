/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUEDP_CONTEXT@@P6AXPEAU1@@Z$1?EdpFreeContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180311C6C
 * Callers:
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180312B9C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::unique_storage<wil::details::resource_policy<EDP_CONTEXT *,void (*)(EDP_CONTEXT *),&void EdpFreeContext(EDP_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,EDP_CONTEXT *,EDP_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<EDP_CONTEXT *,void (*)(EDP_CONTEXT *),&void EdpFreeContext(EDP_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,EDP_CONTEXT *,EDP_CONTEXT *,0,std::nullptr_t>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return EdpFreeContext();
  return result;
}
