/*
 * XREFs of ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180177730
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1801777A4 (-WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ.c)
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1804E0AB8 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnWindowEnumerationCompleted(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v12; // [rsp+48h] [rbp+20h]

  v4 = (RTL_SRWLOCK *)((char *)this + 256);
  if ( IsBamoEnabled() )
  {
    AcquireSRWLockExclusive(v4);
    *((_BYTE *)this + 192) = 1;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v5 = UwpWindowManagerBridge::WindowManagerWatcherConnectedBamo(this);
    v6 = v5;
    if ( v5 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EC,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    AcquireSRWLockExclusive(v4);
    *((_BYTE *)this + 192) = 1;
    LOBYTE(v8) = v12;
    v9 = UwpWindowManagerBridge::WindowManagerWatcherConnected(this, v8);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F3,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return v10;
  }
}
