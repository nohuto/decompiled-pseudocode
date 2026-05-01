/*
 * XREFs of ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B5054
 * Callers:
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18002B208 (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18002C3C4 (-Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18002CA94 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18005E218 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1800629D0 (-StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180064380 (-StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Cloak@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180064460 (-StopActivity@Cloak@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18006A430 (-StopActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x18006A500 (-StopActivity@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1800B4EC0 (-StopActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@M.c)
 *     ?StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1800B4F90 (-StopActivity@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1801AFF60 (-StopActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1801B25C0 (-StopActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1801B26A0 (-StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1801BAD60 (-StopActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ @ 0x1804D4370 (-StopActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180747ED0 (-StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180748110 (-StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180748590 (-StopActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x1807487D0 (-StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ @ 0x180748A10 (-StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B5190 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &v3);
  v2 = v3;
  **(_DWORD **)(a1 + 48) = 2;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
