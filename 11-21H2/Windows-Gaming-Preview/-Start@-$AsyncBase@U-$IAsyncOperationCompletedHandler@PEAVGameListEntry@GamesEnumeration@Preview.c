/*
 * XREFs of ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x1800247D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180029448 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // eax
  int v4; // ebp
  __int64 v5; // rbx
  void (__fastcall *v6)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _QWORD, __int64); // rdi
  __int64 v7; // rax
  signed __int32 v9[4]; // [rsp+40h] [rbp-68h] BYREF
  GUID v10; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v11[32]; // [rsp+60h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v9[0] = -2;
  _InterlockedCompareExchange(v9, v1, -2);
  if ( v9[0] == -1 && (v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 0, -1), v3 == v9[0]) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::InitCausality,
           0LL,
           0LL)
      && Microsoft::WRL::gCausality )
    {
      v5 = *(unsigned int *)(a1 + 56);
      v6 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL);
      *(_QWORD *)&v10.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.Preview.GamesEnumeratio"
                               "n.GameListEntry>";
      v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v11, &v10);
      v10 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v6(Microsoft::WRL::gCausality, 0LL, 2LL, &v10, a1, *(_QWORD *)(v7 + 24), v5);
    }
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
