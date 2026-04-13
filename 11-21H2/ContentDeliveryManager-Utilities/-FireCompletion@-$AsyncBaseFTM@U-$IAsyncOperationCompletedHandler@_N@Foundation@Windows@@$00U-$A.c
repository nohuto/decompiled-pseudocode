/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800B4DE0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800B5170 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Wind.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800B5E80 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperat.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1800B7E44 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCom.c)
 * Callees:
 *     ??1?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@QEAA@XZ @ 0x1800288C0 (--1-$AutoStubBias@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler@_.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800341C0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18003880C (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32); // r11
  __int64 v4; // rcx
  __int64 v5; // rax
  IUnknown *v6; // rdi
  struct IUnknown *v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  struct IRpcOptions *v10; // rcx
  struct IUnknown *v11; // rcx
  LPUNKNOWN v12; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-69h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-29h] BYREF
  struct IRpcOptions *v16[2]; // [rsp+48h] [rbp-21h] BYREF
  LPSTREAM ppstm; // [rsp+58h] [rbp-11h] BYREF
  HRESULT v18; // [rsp+60h] [rbp-9h]
  GUID v19; // [rsp+70h] [rbp+7h] BYREF
  GUID v20; // [rsp+80h] [rbp+17h] BYREF
  signed __int32 v21; // [rsp+D0h] [rbp+67h] BYREF
  signed __int32 v22; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v23; // [rsp+E0h] [rbp+77h] BYREF
  struct IUnknown *v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  v21 = -2;
  _InterlockedCompareExchange(&v21, *(_DWORD *)(a1 + 48), -2);
  if ( !v21 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v16[1] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v22, *(_DWORD *)(a1 + 48), v22);
      v3 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v19 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v3(Microsoft::WRL::gCausality, 0LL, 2LL, &v19, a1, v22);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_cdb5efb3_5788_509d_9be1_71ccb8a3362a,
           &pUnk) >= 0 )
    {
      v23 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v23, *(_DWORD *)(a1 + 48), -2);
      v4 = *(_QWORD *)(a1 + 112);
      if ( v4 )
      {
        v24 = 0LL;
        if ( (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v4 + 24LL))(
               v4,
               &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a,
               &v24) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v5 = *(_QWORD *)Microsoft::WRL::gCausality;
            v20 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v5 + 72))(
              Microsoft::WRL::gCausality,
              0LL,
              2LL,
              &v20,
              a1,
              0);
          }
          v16[0] = 0LL;
          RpcOptionsHelper::GetRpcOptions(v24, v16);
          v6 = pUnk;
          ppstm = 0LL;
          v18 = 0;
          v7 = v24;
          if ( v16[0] && v24 )
          {
            v18 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
            if ( v18 >= 0 )
              v18 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v6, 0, 0LL, 1u);
            v7 = v24;
          }
          else
          {
            v18 = -2147467262;
          }
          v8 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v7->lpVtbl[1].QueryInterface)(
                 v7,
                 pUnk,
                 v23);
          v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v8,
                 (__int64)v24);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v14, 0);
            v9 = *(_QWORD *)(a1 + 112);
            *(_QWORD *)(a1 + 112) = 0LL;
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              0LL,
              2LL);
          AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>((int *)&ppstm);
          v10 = v16[0];
          if ( v16[0] )
          {
            v16[0] = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v10->lpVtbl->Release)(v10);
          }
        }
        v11 = v24;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        v24 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
      }
    }
    v12 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v12->lpVtbl->Release)(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
