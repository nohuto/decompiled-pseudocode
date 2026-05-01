/*
 * XREFs of ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B509C
 * Callers:
 *     ??$?0I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAI@Z @ 0x18008419C (--$-0I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant.c)
 *     ??$?0I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAI@Z @ 0x180084284 (--$-0I@AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$.c)
 *     ??$?0$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800B4C10 (--$-0$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@AEAA@U.c)
 *     ??$?0$$V@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800B4CEC (--$-0$$V@WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@AEAA@U-$integra.c)
 *     ??$?0$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180177D08 (--$-0$$V@ConnectToWindowManager@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$0A@@.c)
 *     ??$?0H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAH@Z @ 0x1804D4094 (--$-0H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@AEAA@U-$integral_constant@D$0A@@w.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B5190 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 */

void __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  if ( **(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                       v3,
                       _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
