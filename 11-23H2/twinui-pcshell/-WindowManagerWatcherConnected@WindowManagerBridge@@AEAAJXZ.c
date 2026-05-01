/*
 * XREFs of ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1804DAE30
 * Callers:
 *     ?OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804D9BA0 (-OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Ap.c)
 *     ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804D9E70 (-OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180177880 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___ @ 0x1804D5E54 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37.c)
 *     ?StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1804DAAD8 (-StartAppViewWatcher@WindowManagerBridge@@AEAAJXZ.c)
 */

__int64 __fastcall WindowManagerBridge::WindowManagerWatcherConnected(WindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  void *v4; // rdx
  int started; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowManagerBridge *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    if ( *((_BYTE *)this + 64) )
    {
      *((_BYTE *)this + 256) = 1;
      v9 = this;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___(
        v3,
        CurrentThreadId,
        &v9);
      wil::details::SetEvent(*((wil::details **)this + 33), v4);
    }
    else
    {
      started = WindowManagerBridge::StartAppViewWatcher(this);
      if ( started < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2A6,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)started,
          v7);
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected((__int64)this);
  return 0LL;
}
