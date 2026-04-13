/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x1800342D0
 * Callers:
 *     ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180045850 (-SetProgress@-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@.c)
 * Callees:
 *     ??$As@UIUnknown@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800241BC (--$As@UIUnknown@@@-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIUnknown@@@.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800242C4 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windo.c)
 *     ??1?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@QEAA@XZ @ 0x1800288C0 (--1-$AutoStubBias@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@_.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x180030D88 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800341C0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18003880C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // esi
  signed __int32 v5; // eax
  __int64 *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // eax
  struct IRpcOptions *v9; // rcx
  __int64 v10; // rcx
  struct IUnknown *v11; // rcx
  IUnknown *v12; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-30h] BYREF
  GUID v16; // [rsp+50h] [rbp-20h] BYREF
  LPSTREAM ppstm[2]; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v18; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *v19; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v20; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v19 = 0LL;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 152);
    if ( v5 <= 0 )
      break;
    if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), v5 + 1, v5) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<IUnknown>(&v15, (__int64 *)&v19) >= 0 )
      {
        v18 = 0LL;
        v6 = (__int64 *)(a1 + 136);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    (_QWORD *)(a1 + 136),
                    (__int64 *)&v18) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v7 = *(_QWORD *)Microsoft::WRL::gCausality;
            v16 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int))(v7 + 72))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v16,
              a1,
              1);
          }
          v20 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v18, &v20);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(ppstm, (__int64)v20, v19, (__int64)v18);
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v18->lpVtbl[1].QueryInterface)(
                 v18,
                 v19,
                 a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v8,
                 (__int64)v18);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((int *)ppstm);
          v9 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v9->lpVtbl->Release)(v9);
          }
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 152), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v14, 0);
          v10 = *v6;
          *v6 = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v11 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
        }
      }
      break;
    }
  }
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
