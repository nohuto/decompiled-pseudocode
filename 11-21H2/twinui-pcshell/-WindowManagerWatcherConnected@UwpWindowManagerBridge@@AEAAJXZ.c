/*
 * XREFs of ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJXZ @ 0x180403988
 * Callers:
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180402640 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180402810 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 * Callees:
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180062798 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6dc604dc747e6770d6e6bf02e15c5d19___ @ 0x1803FE6B4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6dc604dc747e6770d6e6bf02e15c5d19.c)
 *     ?StartUalmWatcher@UwpWindowManagerBridge@@AEAAJXZ @ 0x1804037F0 (-StartUalmWatcher@UwpWindowManagerBridge@@AEAAJXZ.c)
 */

__int64 __fastcall UwpWindowManagerBridge::WindowManagerWatcherConnected(UwpWindowManagerBridge *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  void *v4; // rdx
  int started; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowManagerBridge *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    if ( *((_BYTE *)this + 248) )
    {
      *((_BYTE *)this + 264) = 1;
      v9 = this;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6dc604dc747e6770d6e6bf02e15c5d19___(
        v3,
        CurrentThreadId,
        &v9);
      wil::details::SetEvent(*((wil::details **)this + 34), v4);
    }
    else
    {
      started = UwpWindowManagerBridge::StartUalmWatcher(this);
      if ( started < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          725LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)started,
          v7);
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected((__int64)this);
  return 0LL;
}
