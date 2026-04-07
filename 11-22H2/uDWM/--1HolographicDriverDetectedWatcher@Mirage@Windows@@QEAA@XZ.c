/*
 * XREFs of ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800A4C14
 * Callers:
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18005BEBC (--1CAnalogCompositorManager@@AEAA@XZ.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$1 @ 0x18006840E (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$1.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180057DE8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A508C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800A6658 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this,
        void *a2)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  unsigned int v5; // r8d
  wil::details::event_watcher_state *v6; // rcx
  wil::details::event_watcher_state *v7; // rcx
  wil::details *v8; // rcx
  unsigned int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 4) )
  {
    v3 = CM_Unregister_Notification();
    v4 = CM_MapCrToWin32Err(v3, 0x507u);
    if ( v4 )
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x65, v5, (const char *)v4, v9);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = (wil::details::event_watcher_state *)*((_QWORD *)this + 3);
  if ( v6 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v6, (unsigned int)a2);
  v7 = (wil::details::event_watcher_state *)*((_QWORD *)this + 2);
  if ( v7 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v7, (unsigned int)a2);
  v8 = (wil::details *)*((_QWORD *)this + 1);
  if ( v8 )
    wil::details::CloseHandle(v8, a2);
  if ( *(_QWORD *)this )
    wil::details::CloseHandle(*(wil::details **)this, a2);
}
