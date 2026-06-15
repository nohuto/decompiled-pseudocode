/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WTSINFOW@@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002B340
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$1 @ 0x180045E2C (_TSSession--TSSession_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WTSINFOW *,void (*)(void *),&void WTSFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,_WTSINFOW *,_WTSINFOW *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WTSINFOW *,void (*)(void *),&void WTSFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,_WTSINFOW *,_WTSINFOW *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    WTSFreeMemory(v1);
}
