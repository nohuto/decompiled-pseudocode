/*
 * XREFs of _lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_ @ 0x180077C98
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180079DF0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 * Callees:
 *     ??0?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180077B44 (--0-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180077B44.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a2 + 5);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v5 = a1 + 24;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = v4;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0LL;
  if ( *(_DWORD *)(a2 + 48) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v5);
  v6 = v4 + 7;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(v4 + 7),
    a2 + 72);
  v7 = *(_QWORD *)(a2 + 328);
  v4[39] = v7;
  *(_QWORD *)(a2 + 328) = 0LL;
  if ( v7 )
    v6 = (_QWORD *)(v7 + 8);
  v4[6] = v6;
  v4[5] = v6 + 5;
  *(_QWORD *)(a2 + 64) = a2 + 72;
  if ( *(_DWORD *)(a2 + 48) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 24));
  *v4 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  return a1;
}
