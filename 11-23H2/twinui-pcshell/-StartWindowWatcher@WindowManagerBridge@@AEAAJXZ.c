/*
 * XREFs of ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1804DAB34
 * Callers:
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1804DA704 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1801998F0 (-WindowEventDispatcher_WindowWatcherStarted@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___ @ 0x1804D6958 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b.c)
 */

__int64 __fastcall WindowManagerBridge::StartWindowWatcher(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 31;
  AcquireSRWLockExclusive(this + 31);
  v10 = this;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd171a1d9ebdedee3576b89a841e614b___(
         v4,
         CurrentThreadId,
         &v10);
  v7 = v5;
  if ( v5 >= 0 )
  {
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowWatcherStarted(v6);
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    if ( v1 )
      ReleaseSRWLockExclusive(v1);
    return v7;
  }
}
