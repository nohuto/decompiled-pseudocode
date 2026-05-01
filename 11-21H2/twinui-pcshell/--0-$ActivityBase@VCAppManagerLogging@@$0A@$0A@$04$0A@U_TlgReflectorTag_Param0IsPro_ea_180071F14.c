/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180071F14
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180075320 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x180075540 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180145570 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     _lambda_76ebab358cbfe9072c97f7416da7a23a_::_lambda_76ebab358cbfe9072c97f7416da7a23a_ @ 0x180145A28 (_lambda_76ebab358cbfe9072c97f7416da7a23a_--_lambda_76ebab358cbfe9072c97f7416da7a23a_.c)
 *     _lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_::_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb__0 @ 0x1802F30E8 (_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb_--_lambda_4eb51ed923c3c5026d1aa1b932d3fcbb__0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_4eb51ed923c3c5026d1aa1b932d3fcbb___1_long_::Invoke @ 0x1802F6800 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F6800.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x1802F7CD4 (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x1802FE2D0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ??$create@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x180071DF0 (--$create@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180072110 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  volatile signed __int32 **v6; // r14
  volatile signed __int32 **v7; // rbx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v10; // rax

  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 1LL;
  v5 = (_QWORD *)(a1 + 136);
  v5[19] = 0LL;
  v5[20] = 0LL;
  memset_0(v5, 0, 0x98uLL);
  *(_QWORD *)(v4 + 248) = 0LL;
  v6 = (volatile signed __int32 **)(a1 + 312);
  *(_QWORD *)(a1 + 312) = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  v7 = (volatile signed __int32 **)(a2 + 39);
  if ( a2[39] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    if ( (volatile signed __int32 **)(a1 + 312) != v7 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
      v8 = *v7;
      *(_QWORD *)(a1 + 312) = *v7;
      if ( v8 )
        _InterlockedIncrement(v8);
    }
  }
  else if ( wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>(
              (_QWORD *)(a1 + 312),
              (__int64)(a2 + 7)) )
  {
    *(_QWORD *)(a1 + 48) = (unsigned __int64)(*v6 + 2) & -(__int64)(*v6 != 0LL);
    if ( v7 != v6 )
    {
      wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 39);
      v10 = *v6;
      *v7 = *v6;
      if ( v10 )
        _InterlockedIncrement(v10);
    }
    a2[6] = *(_QWORD *)(a1 + 48);
    a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
