/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800381C0
 * Callers:
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180037C40 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800380A0 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180039504 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ??1?$AutoStubBias@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@@@QEAA@XZ @ 0x1800261D8 (--1-$AutoStubBias@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800294C8 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800295F8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  IUnknown *v4; // rdi
  struct IUnknown *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  struct IRpcOptions *v8; // rcx
  struct IUnknown *v9; // rcx
  LPUNKNOWN v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-50h] BYREF
  struct IRpcOptions *v13[2]; // [rsp+30h] [rbp-20h] BYREF
  LPSTREAM ppstm; // [rsp+40h] [rbp-10h] BYREF
  HRESULT v15; // [rsp+48h] [rbp-8h]
  signed __int32 v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+38h] BYREF
  struct IUnknown *v18; // [rsp+90h] [rbp+40h] BYREF
  LPUNKNOWN pUnk; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v16 = -2;
  _InterlockedCompareExchange(&v16, *(_DWORD *)(a1 + 48), -2);
  if ( !v16 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v13[1] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
           &pUnk) >= 0 )
    {
      v17 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v17, *(_DWORD *)(a1 + 48), -2);
      v3 = *(_QWORD *)(a1 + 112);
      v18 = 0LL;
      if ( v3
        && (*(int (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v3 + 24LL))(
             v3,
             &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
             &v18) >= 0 )
      {
        v13[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v18, v13);
        v4 = pUnk;
        ppstm = 0LL;
        v15 = 0;
        v5 = v18;
        if ( v13[0] && v18 )
        {
          v15 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v15 >= 0 )
            v15 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v4, 0, 0LL, 1u);
          v5 = v18;
        }
        else
        {
          v15 = -2147467262;
        }
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v5->lpVtbl[1].QueryInterface)(v5, pUnk, v17);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v6,
               (__int64)v18);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v12, 0);
          v7 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>((int *)&ppstm);
        v8 = v13[0];
        if ( v13[0] )
        {
          v13[0] = 0LL;
          ((void (__fastcall *)(struct IRpcOptions *))v8->lpVtbl->Release)(v8);
        }
      }
      v9 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      }
    }
    v10 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v10->lpVtbl->Release)(v10);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
