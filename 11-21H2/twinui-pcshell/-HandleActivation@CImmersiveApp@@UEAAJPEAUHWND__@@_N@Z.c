/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180021A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180021B98 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180021CE4 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180021D10 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180070510 (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800C6E68 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x180306BC4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  bool v3; // bp
  __int64 v4; // rcx
  int v6; // r14d
  int v7; // r15d
  bool v8; // r8
  CImmersiveApp::CImmersiveWindowCollection *v9; // rsi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h] BYREF
  HWND v13; // [rsp+28h] [rbp-30h]
  bool v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 41);
  v6 = 0;
  v14 = 0;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4) )
  {
    v9 = (CImmersiveApp *)((char *)this + 176);
  }
  else
  {
    v6 = CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
           (CImmersiveApp *)((char *)this + 176),
           a2,
           v8,
           &v14);
    v9 = (CImmersiveApp *)((char *)this + 176);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v3 = v14;
  }
  v10 = *((_DWORD *)this + 116);
  if ( (v10 & 2) == 0 )
  {
    *((_DWORD *)this + 116) = v10 | 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 572));
    v7 = 2;
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v9) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((char *)this + 176, 1LL);
    if ( (*((_BYTE *)this + 388) & 2) == 0 )
      CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear((CImmersiveApp *)((char *)this + 176));
    *((_BYTE *)this + 688) = 1;
    *((_DWORD *)this + 173) = 1;
  }
  if ( v3 )
  {
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v9);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v9) )
  {
    CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 112, 0LL);
  }
  if ( v7 )
  {
    v12 = v7;
    v13 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)((char *)this - 112),
      (const struct APP_CHANGE_INFO *const)&v12,
      1uLL);
  }
  return (unsigned int)v6;
}
