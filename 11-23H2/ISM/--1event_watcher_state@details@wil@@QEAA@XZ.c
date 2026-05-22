/*
 * XREFs of ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800D1F98
 * Callers:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800D2054 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800D2160 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

void __fastcall wil::details::event_watcher_state::~event_watcher_state(
        wil::details::event_watcher_state *this,
        void *a2)
{
  struct _TP_WAIT *v3; // rcx
  wil::details *v4; // rcx

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 16);
  if ( v3 )
    wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
  v4 = (wil::details *)*((_QWORD *)this + 15);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)this);
}
