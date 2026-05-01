/*
 * XREFs of ?StartUalmWatcher@UwpWindowManagerBridge@@AEAAJXZ @ 0x1804037F0
 * Callers:
 *     ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJXZ @ 0x180403988 (-WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1800628C8 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ae322bdbb7ebce1880ae0a7995b294cd___ @ 0x1803FEB50 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ae322bdbb7ebce1880ae0a7995b294cd.c)
 */

__int64 __fastcall UwpWindowManagerBridge::StartUalmWatcher(UwpWindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowManagerBridge *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ae322bdbb7ebce1880ae0a7995b294cd___(
         v2,
         CurrentThreadId,
         &v8);
  v5 = v3;
  if ( v3 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
