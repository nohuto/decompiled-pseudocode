/*
 * XREFs of _GamingOverlayExperienceManager::GetPathProcessNameFromProcessId_::_1_::dtor$0 @ 0x180331BA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::GetPathProcessNameFromProcessId_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(a2 + 32);
}
