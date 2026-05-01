/*
 * XREFs of ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180375F24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___::CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5_____lambda_524e7201540b0d78c05a86380e3a64a5___ @ 0x180374A6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_524e7201540b0d78c05a86380e3a64a5___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___::CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe_____lambda_f35c72982d94b155c6e22210e02e73fe___ @ 0x180374AFC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f35c72982d94b155c6e22210e02e73fe___--CTaskW.c)
 * Callees:
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800448D4 (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        char a3)
{
  char *v5; // rsi
  __int64 v6; // rax
  bool v7; // zf

  *(_QWORD *)a1 = &wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    a3);
  v5 = (char *)a1 + 56;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)a1 + 56,
    a2 + 56);
  *((_QWORD *)a1 + 39) = *(_QWORD *)(a2 + 312);
  *(_QWORD *)(a2 + 312) = 0LL;
  v6 = *((_QWORD *)a1 + 39);
  if ( v6 )
    v5 = (char *)(v6 + 8);
  *((_QWORD *)a1 + 6) = v5;
  *((_QWORD *)a1 + 5) = v5 + 40;
  v7 = *(_DWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( !v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
