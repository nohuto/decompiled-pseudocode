/*
 * XREFs of Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion @ 0x180056790
 * Callers:
 *     Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion @ 0x1800568E0 (Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncActionComple_ea_1800568E0.c)
 * Callees:
 *     ??$As@UIAsyncAction@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncAction@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002493C (--$As@UIAsyncAction@Foundation@Windows@@@-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 *     ??$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180025AE0 (--$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAct.c)
 *     ??1?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@QEAA@XZ @ 0x18002B928 (--1-$AutoStubBias@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@_.c)
 *     ?CreateBias@?$BiasHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$00@@SA?AV?$AutoStubBias@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@@@PEAUIRpcOptions@@PEAUIAsyncAction@Foundation@Windows@@PEAUIAsyncActionCompletedHandler@56@@Z @ 0x1800306A4 (-CreateBias@-$BiasHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$00@.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800329B4 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z @ 0x1800363D0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180037C98 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TransitionToState@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@AEAA_NW4AsyncStatusInternal@Details@23@@Z @ 0x180041558 (-TransitionToState@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVTargeted.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceCompletionNotificationComplete @ 0x18005F8A8 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18005F8A8.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceCompletionNotificationStart @ 0x18005F8E4 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18005F8E4.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationComplete @ 0x18005F998 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_18005F998.c)
 *     Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::UnlockCompleteDelegate @ 0x18005FF8C (Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncActionCompletedHandler_1_ea_18005FF8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64); // [rsp+20h] [rbp-20h] BYREF
  LPSTREAM ppstm[3]; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+20h] BYREF
  struct IUnknown *v10; // [rsp+68h] [rbp+28h] BYREF
  struct IRpcOptions *v11; // [rsp+70h] [rbp+30h] BYREF
  IUnknown *v12; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TransitionToState(
    a1,
    1);
  if ( *(int *)(a1 + 128) > 0 && v3 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), v3) == v3 )
  {
    v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
    v12 = 0LL;
    Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationComplete(a1);
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncAction>(&v7, (__int64)&v12) >= 0 )
    {
      v9 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 + 48), -2);
      v10 = 0LL;
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal<Windows::Foundation::IAsyncActionCompletedHandler>(
                  a1 + 112,
                  (__int64)&v10) >= 0 )
      {
        Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceCompletionNotificationStart(a1);
        v11 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
        RpcOptionsHelper::GetRpcOptions(v10, v4, &v11);
        BiasHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,1>::CreateBias(
          ppstm,
          (__int64)v11,
          v12,
          (__int64)v10);
        v5 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v10->lpVtbl[1].QueryInterface)(
               v10,
               v12,
               v9);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v5,
               (__int64)v10);
        Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::UnlockCompleteDelegate(a1);
        Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::StageOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceCompletionNotificationComplete();
        AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((int *)ppstm);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
  }
  return v2;
}
