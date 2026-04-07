/*
 * XREFs of ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A508C
 * Callers:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18004D79C (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800A4C14 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800A4CA8 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 */

wil::details::event_watcher_state *__fastcall wil::details::event_watcher_state::`scalar deleting destructor'(
        wil::details::event_watcher_state *this,
        void *a2)
{
  wil::details::event_watcher_state::~event_watcher_state(this, a2);
  (*(void (__fastcall **)(WPF::HeapBase *, wil::details::event_watcher_state *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
