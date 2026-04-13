/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180033B80
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180033F30 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18003A4F0 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180047850 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ??$As@UIAsyncAction@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncAction@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024144 (--$As@UIAsyncAction@Foundation@Windows@@@-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 *     ??$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180024234 (--$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAct.c)
 *     ??1?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@QEAA@XZ @ 0x1800288C0 (--1-$AutoStubBias@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@_.c)
 *     ?CreateBias@?$BiasHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$00@@SA?AV?$AutoStubBias@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@@@PEAUIRpcOptions@@PEAUIAsyncAction@Foundation@Windows@@PEAUIAsyncActionCompletedHandler@56@@Z @ 0x180030CFC (-CreateBias@-$BiasHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@$00@.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800341C0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18003880C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32); // r11
  __int64 *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  struct IRpcOptions *v8; // rcx
  struct IUnknown *v9; // rcx
  IUnknown *v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-59h] BYREF
  IUnknown *v13; // [rsp+40h] [rbp-19h] BYREF
  struct IRpcOptions *v14; // [rsp+48h] [rbp-11h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-9h] BYREF
  GUID v16; // [rsp+60h] [rbp+7h] BYREF
  GUID v17; // [rsp+70h] [rbp+17h] BYREF
  LPSTREAM ppstm[6]; // [rsp+80h] [rbp+27h] BYREF
  signed __int32 v19; // [rsp+C0h] [rbp+67h] BYREF
  signed __int32 v20; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+77h] BYREF
  struct IUnknown *v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0;
  v19 = -2;
  _InterlockedCompareExchange(&v19, *(_DWORD *)(a1 + 48), -2);
  if ( !v19 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v13 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v20, *(_DWORD *)(a1 + 48), v20);
      v3 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v16 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v3(Microsoft::WRL::gCausality, 0LL, 2LL, &v16, a1, v20);
    }
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncAction>(&v15, (__int64 *)&v13) >= 0 )
    {
      v21 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v21, *(_DWORD *)(a1 + 48), -2);
      v22 = 0LL;
      v4 = (__int64 *)(a1 + 112);
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal<Windows::Foundation::IAsyncActionCompletedHandler>(
                  (_QWORD *)(a1 + 112),
                  (__int64 *)&v22) >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v5 = *(_QWORD *)Microsoft::WRL::gCausality;
          v17 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v5 + 72))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v17,
            a1,
            0);
        }
        v14 = 0LL;
        RpcOptionsHelper::GetRpcOptions(v22, &v14);
        BiasHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,1>::CreateBias(
          ppstm,
          (__int64)v14,
          v13,
          (__int64)v22);
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v22->lpVtbl[1].QueryInterface)(
               v22,
               v13,
               v21);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v6,
               v22,
               *(_QWORD *)(a1 + 120));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v12, 0);
          v7 = *v4;
          *v4 = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((int *)ppstm);
        v8 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          ((void (__fastcall *)(struct IRpcOptions *))v8->lpVtbl->Release)(v8);
        }
      }
      v9 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      }
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      ((void (__fastcall *)(IUnknown *))v10->lpVtbl->Release)(v10);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
