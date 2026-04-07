/*
 * XREFs of ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18009C95C
 * Callers:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054F80 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x18009E174 (-delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x18009C57C (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 */

struct _TP_WAIT **__fastcall wil::details::event_watcher_state::`scalar deleting destructor'(struct _TP_WAIT **this)
{
  wil::details::event_watcher_state::~event_watcher_state(this);
  (*(void (__fastcall **)(WPF::HeapBase *, struct _TP_WAIT **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
