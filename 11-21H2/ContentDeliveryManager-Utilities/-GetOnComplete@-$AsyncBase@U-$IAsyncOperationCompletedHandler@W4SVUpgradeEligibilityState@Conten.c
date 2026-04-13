/*
 * XREFs of ?GetOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x180038060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  signed __int32 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v10 = -2;
  v7 = *(unsigned int *)(a1 + 48);
  _InterlockedCompareExchange(&v10, v7, -2);
  if ( v10 == 4 )
  {
    v6 = -2147483634;
    RoOriginateError(2147483662LL, 0LL, v7, a4);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      v8 = *(_QWORD *)(a1 + 24);
    }
    *a2 = v8;
  }
  return v6;
}
