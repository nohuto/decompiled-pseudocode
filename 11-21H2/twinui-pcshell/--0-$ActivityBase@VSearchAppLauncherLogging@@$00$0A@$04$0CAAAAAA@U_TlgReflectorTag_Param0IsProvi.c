/*
 * XREFs of ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800715C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x180198C14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___--CTaskW.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_ @ 0x18019B3CC (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e_____lambda_5a859347bbbbbb78c34c3a6938b2a83e___ @ 0x1801A6C6C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___--CTaskW.c)
 * Callees:
 *     ??0?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x1800448D4 (--0-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  int v2; // eax
  char *v5; // rsi
  __int64 v6; // rax
  bool v7; // zf
  struct wil::details::IFailureCallback *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)a1 = &wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    v2 != 0);
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
  result = a1;
  *(_QWORD *)a1 = &wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  return result;
}
