/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1801DD9FC
 * Callers:
 *     ??1?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800552D4 (--1-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ??1?$unique_ptr@Uregistry_watcher_state@details@wil@@U?$default_delete@Uregistry_watcher_state@details@wil@@@wistd@@@wistd@@QEAA@XZ @ 0x1801DC5E0 (--1-$unique_ptr@Uregistry_watcher_state@details@wil@@U-$default_delete@Uregistry_watcher_state@d.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x1801E060C (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAUregistry_watcher_state@details@wil@@@Z$1?delete_registry_watcher_state@23@YAX0@ZPEAU123@@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x1801E287C (-close_reset@-$close_invoke_helper@$00P6AXPEAUregistry_watcher_state@details@wil@@@Z$1-delete_re.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801DC704 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 */

wil::details::registry_watcher_state *__fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this,
        void *a2)
{
  wil::details::registry_watcher_state::~registry_watcher_state(this, a2);
  operator delete(this);
  return this;
}
