/*
 * XREFs of ?StartUalmWatcher@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1804E0A50
 * Callers:
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1804E0AB8 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180177BD8 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6c82c5fc4697b74e4e3cb823547de234___ @ 0x1804DF358 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6c82c5fc4697b74e4e3cb823547de234.c)
 */

__int64 __fastcall UwpWindowManagerBridge::StartUalmWatcher(__int64 a1, char a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  *(_QWORD *)v8 = a1;
  *(_QWORD *)&v8[2] = &v10;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6c82c5fc4697b74e4e3cb823547de234___(
         v3,
         CurrentThreadId,
         v8);
  v6 = v4;
  if ( v4 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
}
