/*
 * XREFs of ?PutOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?ResolveLayoutBindingsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18003C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x180029984 (--4-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ResolveLayoutBindingsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  signed __int32 v9; // ecx
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v12; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v13; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(unsigned int *)(a1 + 48);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v4, -2);
  if ( v13 == 4 )
  {
    v6 = -2147483634;
    v7 = 2147483662LL;
LABEL_11:
    RoOriginateError(v7, 0LL, v4, a4);
    return v6;
  }
  v6 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
  {
    v7 = 2147483672LL;
    v6 = -2147483624;
    goto LABEL_11;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::operator=((__int64 *)(a1 + 24), a2);
  _InterlockedOr(v11, 0);
  if ( Microsoft::WRL::gCausality )
  {
    v8 = *(_QWORD *)Microsoft::WRL::gCausality;
    v12 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(v8 + 64))(
      Microsoft::WRL::gCausality,
      2LL,
      2LL,
      &v12,
      a1,
      0);
  }
  v9 = *(_DWORD *)(a1 + 48);
  v14 = -2;
  _InterlockedCompareExchange(&v14, v9, -2);
  if ( (unsigned int)(v14 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v6;
}
