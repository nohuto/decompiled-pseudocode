/*
 * XREFs of ?OnUwpWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804E0570
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1804DACF8 (-WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_71ff6fbdffe959cf5c08784a2795046e___ @ 0x1804DF444 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_71ff6fbdffe959cf5c08784a2795046e.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v4; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewWatcherStopped((__int64)this);
  v4 = this + 32;
  AcquireSRWLockExclusive(this + 32);
  v9 = this;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_71ff6fbdffe959cf5c08784a2795046e___(
         v6,
         CurrentThreadId,
         &v9);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
