/*
 * XREFs of _CDesktopManager::CreateMonitorRenderTargetsDDisplay_::_1_::dtor$2 @ 0x1800B014A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDesktopManager::CreateMonitorRenderTargetsDDisplay_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(a2 + 104));
}
