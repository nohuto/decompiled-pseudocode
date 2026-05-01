/*
 * XREFs of __anonymous_namespace_::DoRequestorAndForegroundPublisherMatch_::_1_::dtor$1 @ 0x1806A0F73
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 80));
}
