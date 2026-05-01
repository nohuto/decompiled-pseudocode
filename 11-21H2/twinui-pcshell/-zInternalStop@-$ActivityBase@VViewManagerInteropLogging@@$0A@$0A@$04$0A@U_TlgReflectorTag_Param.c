/*
 * XREFs of ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180171444
 * Callers:
 *     ?StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18003F2B0 (-StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18003F370 (-StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180092DA0 (-StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@M.c)
 *     ?StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x180171380 (-StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1803F14C0 (-StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1803F93B0 (-StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180092D0C (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v2);
  **(_DWORD **)(a1 + 48) = 2;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v2);
}
