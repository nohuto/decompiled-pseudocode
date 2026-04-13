/*
 * XREFs of ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x180045B10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int32 v4; // edx
  signed __int32 v6; // eax
  int v7; // ebp
  unsigned int v8; // r8d
  __int64 v9; // rbx
  void (__fastcall *v10)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64); // rdi
  HSTRING_HEADER *v11; // rax
  signed __int32 v13[4]; // [rsp+40h] [rbp-68h] BYREF
  GUID v14; // [rsp+50h] [rbp-58h] BYREF
  HSTRING_HEADER v15; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 48);
  v13[0] = -2;
  _InterlockedCompareExchange(v13, v4, -2);
  if ( v13[0] == -1 && (v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 0, -1), v6 == v13[0]) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v7 >= 0
      && InitOnceExecuteOnce(
           &Microsoft::WRL::gCausalityInitOnce,
           (PINIT_ONCE_FN)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::InitCausality,
           0LL,
           0LL)
      && Microsoft::WRL::gCausality )
    {
      v9 = *(unsigned int *)(a1 + 56);
      v10 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, PVOID, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 48LL);
      *(_QWORD *)&v14.Data1 = L"Windows.Foundation.AsyncOperationCompletedHandler`1<ContentManagement.SVUpgradeEligibilityState>";
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)&v14, v8);
      v14 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v10(Microsoft::WRL::gCausality, 0LL, 2LL, &v14, a1, v11[1].Reserved.Reserved1, v9);
    }
  }
  else
  {
    v7 = -2147483635;
    RoOriginateError(2147483661LL, 0LL, a3, a4);
  }
  return (unsigned int)v7;
}
