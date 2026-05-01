/*
 * XREFs of ?WindowManagerWatcherConnected@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1804E0AB8
 * Callers:
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801776B0 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180177730 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 * Callees:
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180177880 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e7d50035f9360f60bf115acebf34025c___ @ 0x1804DF8E0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_e7d50035f9360f60bf115acebf34025c.c)
 *     ?StartUalmWatcher@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1804E0A50 (-StartUalmWatcher@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 */

__int64 __fastcall UwpWindowManagerBridge::WindowManagerWatcherConnected(__int64 a1, char a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  void *v5; // rdx
  int started; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 192) )
  {
    if ( *(_BYTE *)(a1 + 248) )
    {
      *(_BYTE *)(a1 + 264) = 1;
      v10 = a1;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_e7d50035f9360f60bf115acebf34025c___(
        v4,
        CurrentThreadId,
        &v10);
      wil::details::SetEvent(*(wil::details **)(a1 + 280), v5);
    }
    else
    {
      started = UwpWindowManagerBridge::StartUalmWatcher(a1, a2);
      if ( started < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3A3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
          (const char *)(unsigned int)started,
          v8);
    }
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected(a1);
  return 0LL;
}
