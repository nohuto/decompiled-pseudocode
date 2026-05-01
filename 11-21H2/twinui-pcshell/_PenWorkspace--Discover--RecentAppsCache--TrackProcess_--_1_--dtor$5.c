/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x180218E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(a2 + 88);
}
