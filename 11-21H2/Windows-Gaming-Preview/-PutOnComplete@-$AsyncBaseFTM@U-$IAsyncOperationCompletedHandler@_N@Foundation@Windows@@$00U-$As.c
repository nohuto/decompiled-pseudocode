/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x18003ABD0
 * Callers:
 *     ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x18003A210 (-put_Completed@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  int AgileReference; // edi
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  signed __int32 v9[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v10; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v11; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v12; // [rsp+70h] [rbp+18h] BYREF

  v11 = -2;
  _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 + 48), -2);
  if ( v11 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return (unsigned int)AgileReference;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
    return (unsigned int)-2147483624;
  v5 = (__int64 *)(a1 + 112);
  v6 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  v7 = 0LL;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *v5;
  }
  if ( !a2 )
  {
    *v5 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    AgileReference = 0;
    goto LABEL_14;
  }
  if ( v7 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  AgileReference = RoGetAgileReference(0LL, &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a, a2, v5);
  if ( AgileReference >= 0 )
  {
LABEL_14:
    if ( Microsoft::WRL::gCausality )
    {
      v10 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL))(
        Microsoft::WRL::gCausality,
        2LL,
        2LL,
        &v10,
        a1,
        0);
    }
    if ( a2 )
    {
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
    }
    _InterlockedOr(v9, 0);
    v12 = -2;
    _InterlockedCompareExchange(&v12, *(_DWORD *)(a1 + 48), -2);
    if ( (unsigned int)(v12 - 1) <= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  }
  return (unsigned int)AgileReference;
}
