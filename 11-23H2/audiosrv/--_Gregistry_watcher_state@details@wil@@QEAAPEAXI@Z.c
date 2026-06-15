/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18012C1F8
 * Callers:
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18005B770 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ??1?$unique_ptr@Uregistry_watcher_state@details@wil@@U?$default_delete@Uregistry_watcher_state@details@wil@@@wistd@@@wistd@@QEAA@XZ @ 0x18012BADC (--1-$unique_ptr@Uregistry_watcher_state@details@wil@@U-$default_delete@Uregistry_watcher_state@d.c)
 *     ??1CMonitorManager@@QEAA@XZ @ 0x18012BB30 (--1CMonitorManager@@QEAA@XZ.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x18012E908 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAUregistry_watcher_state@details@wil@@@Z$1?delete_registry_watcher_state@23@YAX0@ZPEAU123@@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x18012F990 (-close_reset@-$close_invoke_helper@$00P6AXPEAUregistry_watcher_state@details@wil@@@Z$1-delete_re.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x18012C010 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 */

wil::details::registry_watcher_state *__fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this,
        void *a2)
{
  wil::details::registry_watcher_state::~registry_watcher_state(this, a2);
  operator delete(this);
  return this;
}
