/*
 * XREFs of ?PutOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x18003C240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v12; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v13; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = -2;
  v6 = *(unsigned int *)(a1 + 48);
  _InterlockedCompareExchange(&v13, v6, -2);
  if ( v13 == 4 )
  {
    v7 = -2147483634;
    v8 = 2147483662LL;
LABEL_16:
    RoOriginateError(v8, 0LL, v6, a4);
    return v7;
  }
  v7 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
  {
    v8 = 2147483672LL;
    v7 = -2147483624;
    goto LABEL_16;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)(a1 + 24) = a2;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  _InterlockedOr(v11, 0);
  if ( Microsoft::WRL::gCausality )
  {
    v12 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL))(
      Microsoft::WRL::gCausality,
      2LL,
      2LL,
      &v12,
      a1,
      0);
  }
  v14 = -2;
  _InterlockedCompareExchange(&v14, *(_DWORD *)(a1 + 48), -2);
  if ( (unsigned int)(v14 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v7;
}
