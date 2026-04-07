/*
 * XREFs of _CWindowList::CaptureDesktop_::_1_::dtor$1 @ 0x18006749C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CWindowList::CaptureDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 88));
}
