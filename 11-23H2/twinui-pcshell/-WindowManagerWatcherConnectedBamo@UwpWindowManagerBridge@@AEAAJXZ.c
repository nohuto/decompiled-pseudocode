/*
 * XREFs of ?WindowManagerWatcherConnectedBamo@UwpWindowManagerBridge@@AEAAJXZ @ 0x1801777A4
 * Callers:
 *     ?OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801776B0 (-OnUwpWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@Uwp.c)
 *     ?OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180177730 (-OnWindowEnumerationCompleted@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@A.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180177880 (-WindowEventDispatcher_WindowManagerWatcherConnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea___ @ 0x1801778E8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_759e1e24362ba58b3b85b34b47726433___ @ 0x1801779DC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_759e1e24362ba58b3b85b34b47726433.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x180177BD8 (-WindowEventDispatcher_AppViewWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UwpWindowManagerBridge::WindowManagerWatcherConnectedBamo(UwpWindowManagerBridge *this)
{
  RTL_SRWLOCK *v1; // rdi
  char v3; // si
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  void *v6; // rdx
  DWORD v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  UwpWindowManagerBridge *v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)((char *)this + 256);
  v3 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 32);
  if ( *((_BYTE *)this + 192) )
  {
    if ( *((_BYTE *)this + 248) )
    {
      *((_BYTE *)this + 264) = 1;
      v14 = this;
      CurrentThreadId = GetCurrentThreadId();
      Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_4db7e16b27d144662c4cfda4f02bbfea___(
        v5,
        CurrentThreadId,
        &v14);
      wil::details::SetEvent(*((wil::details **)this + 35), v6);
    }
    else
    {
      v3 = 1;
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
  if ( v3 )
  {
    v14 = this;
    v7 = GetCurrentThreadId();
    v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_759e1e24362ba58b3b85b34b47726433___(
           v8,
           v7,
           &v14);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E5,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x38A,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)v10,
        v12);
    }
    ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewWatcherStarted();
  }
  ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherConnected();
  return 0LL;
}
