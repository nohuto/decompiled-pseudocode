/*
 * XREFs of ?PutOnProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUINilDelegate@23@@Z @ 0x18003C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Initialize@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJPEAUINilDelegate@12@@Z @ 0x1800244F4 (--$Initialize@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@Internal@Wind.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnProgress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v7; // edi
  __int64 v8; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  GUID v11; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v12; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 48);
  v12 = -2;
  _InterlockedCompareExchange(&v12, v4, -2);
  if ( v12 == 4 )
  {
    v7 = -2147483634;
    RoOriginateError(2147483662LL, 0LL, v4, a4);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 156)) == 1 )
  {
    v7 = Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::Initialize<Windows::Internal::INilDelegate>(
           (__int64 *)(a1 + 136),
           a2);
    if ( a2 )
    {
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 152));
    }
    _InterlockedOr(v10, 0);
    if ( Microsoft::WRL::gCausality )
    {
      v8 = *(_QWORD *)Microsoft::WRL::gCausality;
      v11 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(v8 + 64))(
        Microsoft::WRL::gCausality,
        2LL,
        2LL,
        &v11,
        a1,
        0);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return v7;
}
