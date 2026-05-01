/*
 * XREFs of ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1800A6D7C
 * Callers:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1801AB260 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

void __fastcall wil::details::registry_watcher_state::~registry_watcher_state(
        wil::details::registry_watcher_state *this,
        void *a2)
{
  struct _TP_WAIT *v3; // rcx
  wil::details *v4; // rcx
  HKEY v5; // rcx

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 17);
  if ( v3 )
    wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
  v4 = (wil::details *)*((_QWORD *)this + 16);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (HKEY)*((_QWORD *)this + 15);
  if ( v5 )
    RegCloseKey(v5);
  wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)this);
}
