/*
 * XREFs of _StartupAppMonitor::RegKeyCallback_::_1_::dtor$8 @ 0x1805801DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::RegKeyCallback_::_1_::dtor_8(__int64 a1, wil::details **a2)
{
  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
    a2 + 6,
    (struct wil::details::registry_watcher_state *)a2);
}
