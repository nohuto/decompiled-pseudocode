/*
 * XREFs of _lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_ @ 0x18007B3E4
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ??0?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180077B44 (--0-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180077B44.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4181134c5161f261fff3e61f273c9fd8_::_lambda_4181134c5161f261fff3e61f273c9fd8_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax

  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v4 = (_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(a2 + 16);
  *v4 = 0LL;
  if ( v4 != v5 )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  v6 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 24) = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( *(_DWORD *)(a2 + 64) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 40));
  v7 = a1 + 88;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 88,
    a2 + 88);
  v8 = *(_QWORD *)(a2 + 344);
  *(_QWORD *)(a1 + 344) = v8;
  *(_QWORD *)(a2 + 344) = 0LL;
  if ( v8 )
    v7 = v8 + 8;
  *(_QWORD *)(a1 + 80) = v7;
  *(_QWORD *)(a1 + 72) = v7 + 40;
  *(_QWORD *)(a2 + 80) = a2 + 88;
  if ( *(_DWORD *)(a2 + 64) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 40));
  *(_QWORD *)(a1 + 32) = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  return a1;
}
