/*
 * XREFs of ?OnUwpWindowWatcherStopped@UwpWindowManagerBridge@@AEAAJPEAUIUwpWindowLifecycleWatcher@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1804027B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FABE4 (-WindowEventDispatcher_OnAppViewWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d2a465ae199f4521f0e17712fd5e9c58___ @ 0x1803FED28 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d2a465ae199f4521f0e17712fd5e9c58.c)
 */

__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowLifecycleWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v3; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = this;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewWatcherStopped((__int64)this);
  wil::AcquireSRWLockExclusive(&v8, v3 + 32);
  v7 = v3;
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(v3) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d2a465ae199f4521f0e17712fd5e9c58___(
                  v5,
                  CurrentThreadId,
                  &v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return (unsigned int)v3;
}
