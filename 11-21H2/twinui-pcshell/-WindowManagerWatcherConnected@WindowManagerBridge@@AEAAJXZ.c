/*
 * XREFs of ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x180062710
 * Callers:
 *     ?OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180062670 (-OnAppViewEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@Ap.c)
 *     ?OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800626C0 (-OnWindowEnumerationCompleted@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180062798 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1800628C8 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff___ @ 0x180062930 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___ @ 0x180062A24 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowManagerBridge::WindowManagerWatcherConnected(WindowManagerBridge *this)
{
  bool v2; // zf
  DWORD v3; // eax
  __int64 v4; // rcx
  void *v5; // rdx
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-8h]
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowManagerBridge *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    v2 = *((_BYTE *)this + 64) == 0;
    v14 = this;
    if ( v2 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_245d2a2be388f7a941ea2187d291aeff___(
             v8,
             CurrentThreadId,
             &v14);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x153,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v9,
          v11);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2A6,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)v10,
          v12);
      }
      ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
    }
    else
    {
      *((_BYTE *)this + 256) = 1;
      v3 = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_84d0801e285d04801e5fe1360cfb4c37___(v4, v3, &v14);
      wil::details::SetEvent(*((wil::details **)this + 33), v5);
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
