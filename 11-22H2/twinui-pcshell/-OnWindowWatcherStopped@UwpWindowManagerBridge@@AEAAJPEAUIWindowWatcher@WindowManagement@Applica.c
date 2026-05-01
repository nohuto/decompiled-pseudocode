/*
 * XREFs of ?OnWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804E05F0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1804DAD60 (-WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f___ @ 0x1804DF180 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 32;
  AcquireSRWLockExclusive(this + 32);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped(v5);
  v10 = this;
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_420994182feb68798a6ba33cec143f0f___(
         v7,
         CurrentThreadId,
         &v10);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return v8;
}
