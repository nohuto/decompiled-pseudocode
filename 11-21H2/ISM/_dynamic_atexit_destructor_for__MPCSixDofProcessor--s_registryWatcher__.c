/*
 * XREFs of _dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x180058EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__(
        __int64 a1,
        struct wil::details::registry_watcher_state *a2)
{
  wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
    &MPCSixDofProcessor::s_registryWatcher,
    a2);
}
