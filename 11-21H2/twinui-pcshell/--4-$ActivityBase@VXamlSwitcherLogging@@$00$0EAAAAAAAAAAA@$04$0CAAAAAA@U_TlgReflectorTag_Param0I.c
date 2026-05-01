/*
 * XREFs of ??4?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805F98D4
 * Callers:
 *     ??4ShowAltTab@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805F9988 (--4ShowAltTab@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4ShowSnapAssist@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180600CF0 (--4ShowSnapAssist@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ??4?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x18000E280 (--4-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z @ 0x180048970 (-SetWatching@ThreadFailureCallbackHolder@details@wil@@QEAAX_N@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1805FDF00 (-reset@-$shared_object@V-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Para_ea_1805FDF00.c)
 */

_QWORD *__fastcall wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // r15
  _QWORD *v7; // r14

  v4 = a2 + 56;
  v5 = (__int64)(a1 + 7);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>::operator=(
    (__int64)(a1 + 7),
    a2 + 56);
  v6 = (_QWORD *)(a2 + 312);
  v7 = a1 + 39;
  if ( a1 + 39 != (_QWORD *)(a2 + 312) )
  {
    wil::details::shared_object<wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<XamlSwitcherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 39);
    *v7 = *v6;
    *v6 = 0LL;
  }
  if ( *v7 )
    v5 = *v7 + 8LL;
  a1[6] = v5;
  a1[5] = v5 + 40;
  wil::details::ThreadFailureCallbackHolder::SetWatching(
    (wil::details::ThreadFailureCallbackHolder *)(a1 + 1),
    *(_DWORD *)(a2 + 32) != 0);
  *(_QWORD *)(a2 + 48) = v4;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
