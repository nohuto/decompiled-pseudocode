/*
 * XREFs of _TSSession::TSSession_::_1_::dtor$1 @ 0x180045E2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TSSession::TSSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WTSINFOW *,void (*)(void *),&void WTSFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,_WTSINFOW *,_WTSINFOW *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WTSINFOW *,void (*)(void *),&void WTSFreeMemory(void *),wistd::integral_constant<unsigned __int64,0>,_WTSINFOW *,_WTSINFOW *,0,std::nullptr_t>>>((void **)(*(_QWORD *)(a2 + 48) + 24LL));
}
