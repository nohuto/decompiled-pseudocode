/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180026B5C
 * Callers:
 *     ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x1800239E0 (-SetProgress@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComple.c)
 * Callees:
 *     ??1?$AutoStubBias@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@@@QEAA@XZ @ 0x1800268E8 (--1-$AutoStubBias@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x1800274F4 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027B30 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windo.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180029DF8 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180029F28 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        _DWORD *a1,
        unsigned int a2)
{
  unsigned int v4; // esi
  signed __int32 v5; // eax
  int (__fastcall *v6)(_DWORD *, GUID *, __int64 *); // rdi
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  struct IRpcOptions *v11; // rcx
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  __int64 v14; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-70h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-30h]
  GUID v18; // [rsp+50h] [rbp-20h] BYREF
  LPSTREAM ppstm[2]; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v22; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
  v21 = 0LL;
  while ( 1 )
  {
    v5 = a1[38];
    if ( v5 <= 0 )
      break;
    if ( v5 == _InterlockedCompareExchange(a1 + 38, v5 + 1, v5) )
    {
      v6 = **(int (__fastcall ***)(_DWORD *, GUID *, __int64 *))a1;
      v7 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &v21) >= 0 )
      {
        v20 = 0LL;
        v8 = (__int64 *)(a1 + 34);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    a1 + 34,
                    &v20) >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v9 = *(_QWORD *)Microsoft::WRL::gCausality;
            v18 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, _DWORD *, int))(v9 + 72))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v18,
              a1,
              1);
          }
          v22 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v20, &v22);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(ppstm);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v20->lpVtbl[1].QueryInterface)(
                  v20,
                  v21,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 v20,
                 *((_QWORD *)a1 + 18));
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>((int *)ppstm);
          v11 = v22;
          if ( v22 )
          {
            v22 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v11->lpVtbl->Release)(v11);
          }
        }
        if ( _InterlockedExchangeAdd(a1 + 38, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v16, 0);
          v12 = *v8;
          *v8 = 0LL;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
      break;
    }
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
