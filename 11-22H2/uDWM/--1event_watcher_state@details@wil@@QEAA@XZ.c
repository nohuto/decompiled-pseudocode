/*
 * XREFs of ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800A4CA8
 * Callers:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A508C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180057DE8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800A50E0 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
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
  wistd::function<void (int const &)>::~function<void (int const &)>((__int64)this);
}
