/*
 * XREFs of ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803FA8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aec0846700b42ca4e39c995f67d0b5b9___ @ 0x1803F9C10 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_aec0846700b42ca4e39c995f67d0b5b9.c)
 *     ?WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1803FAC4C (-WindowEventDispatcher_OnHandlingWindowWatcherStopped@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall WindowManagerBridge::OnWindowWatcherStopped(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *a2,
        struct IInspectable *a3)
{
  RTL_SRWLOCK *v3; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v8; // [rsp+48h] [rbp+20h] BYREF

  v3 = this;
  wil::AcquireSRWLockExclusive(&v8, this + 31);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_OnHandlingWindowWatcherStopped();
  v7 = v3;
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(v3) = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_aec0846700b42ca4e39c995f67d0b5b9___(
                  v5,
                  CurrentThreadId,
                  &v7);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return (unsigned int)v3;
}
