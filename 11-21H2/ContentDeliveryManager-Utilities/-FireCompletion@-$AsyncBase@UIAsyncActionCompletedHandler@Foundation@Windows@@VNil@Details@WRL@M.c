/*
 * XREFs of ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJXZ @ 0x180033250
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIAsyncAction@Foundation@Windows@@@?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncAction@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024144 (--$As@UIAsyncAction@Foundation@Windows@@@-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1800341C0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // edi
  void (__fastcall *v3)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, unsigned __int32); // r11
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  GUID v9; // [rsp+40h] [rbp-20h] BYREF
  GUID v10; // [rsp+50h] [rbp-10h] BYREF
  signed __int32 v11; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int32 v12; // [rsp+88h] [rbp+28h] BYREF
  __int64 v13; // [rsp+90h] [rbp+30h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+38h] BYREF

  v2 = 0;
  v11 = -2;
  _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 + 48), -2);
  if ( !v11 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(_QWORD *)(a1 + 24) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v13 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)&v12, *(_DWORD *)(a1 + 48), v12);
      v3 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, unsigned __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v3(Microsoft::WRL::gCausality, 0LL, 2LL, &v9, a1, v12);
    }
    if ( (int)Microsoft::WRL::ComPtr<IAsyncInfo>::As<Windows::Foundation::IAsyncAction>(&v14, &v13) >= 0 )
    {
      v12 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v12, *(_DWORD *)(a1 + 48), -2);
      if ( Microsoft::WRL::gCausality )
      {
        v4 = *(_QWORD *)Microsoft::WRL::gCausality;
        v10 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v4 + 72))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL,
          &v10,
          a1,
          0);
      }
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             v13,
             v12);
      v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
             v5,
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 32));
      v6 = *(_QWORD *)(a1 + 24);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 24) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      if ( Microsoft::WRL::gCausality )
        (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
          Microsoft::WRL::gCausality,
          0LL,
          2LL);
    }
    v7 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
