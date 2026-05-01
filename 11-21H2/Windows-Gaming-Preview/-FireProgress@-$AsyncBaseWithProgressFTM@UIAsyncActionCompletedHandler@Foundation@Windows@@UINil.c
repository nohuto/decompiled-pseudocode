/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180039254
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180037C20 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ??1?$AutoStubBias@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@@@QEAA@XZ @ 0x1800261D8 (--1-$AutoStubBias@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x180026DBC (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027254 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windo.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800294C8 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800295F8 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::DisableCausality>::FireProgress(
        _DWORD *a1,
        unsigned int a2)
{
  unsigned int v4; // esi
  signed __int32 v5; // eax
  int (__fastcall *v6)(_DWORD *, GUID *, IUnknown **); // rdi
  IUnknown *v7; // rcx
  __int64 *v8; // rdi
  unsigned int v9; // eax
  struct IRpcOptions *v10; // rcx
  __int64 v11; // rcx
  struct IUnknown *v12; // rcx
  IUnknown *v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-40h] BYREF
  _DWORD *v16; // [rsp+20h] [rbp-20h]
  LPSTREAM ppstm[3]; // [rsp+28h] [rbp-18h] BYREF
  struct IUnknown *v18; // [rsp+70h] [rbp+30h] BYREF
  IUnknown *v19; // [rsp+80h] [rbp+40h] BYREF
  struct IRpcOptions *v20; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  v16 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
  v19 = 0LL;
  while ( 1 )
  {
    v5 = a1[38];
    if ( v5 <= 0 )
      break;
    if ( v5 == _InterlockedCompareExchange(a1 + 38, v5 + 1, v5) )
    {
      v6 = **(int (__fastcall ***)(_DWORD *, GUID *, IUnknown **))a1;
      v7 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &v19) >= 0 )
      {
        v18 = 0LL;
        v8 = (__int64 *)(a1 + 34);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    (_QWORD *)a1 + 17,
                    (__int64 *)&v18) >= 0 )
        {
          v20 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v18, &v20);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(ppstm, (__int64)v20, v19, (__int64)v18);
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v18->lpVtbl[1].QueryInterface)(
                 v18,
                 v19,
                 a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v9,
                 (__int64)v18);
          AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>((int *)ppstm);
          v10 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v10->lpVtbl->Release)(v10);
          }
        }
        if ( _InterlockedExchangeAdd(a1 + 38, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v11 = *v8;
          *v8 = 0LL;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
        }
      }
      break;
    }
  }
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
