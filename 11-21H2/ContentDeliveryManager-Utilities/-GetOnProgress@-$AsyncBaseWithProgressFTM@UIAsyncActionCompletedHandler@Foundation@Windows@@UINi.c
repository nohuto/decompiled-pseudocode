/*
 * XREFs of ?GetOnProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUINilDelegate@23@@Z @ 0x180038480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableContextualSuggestionsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnProgress(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  unsigned int v6; // edi
  signed __int32 i; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = -2;
  v5 = *(unsigned int *)(a1 + 48);
  _InterlockedCompareExchange(&v12, v5, -2);
  if ( v12 == 4 )
  {
    v6 = -2147483634;
    RoOriginateError(2147483662LL, 0LL, v5, a4);
  }
  else
  {
    v6 = 0;
    for ( i = *(_DWORD *)(a1 + 152); i > 0; i = *(_DWORD *)(a1 + 152) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 152), i + 1, i) )
      {
        if ( *(_QWORD *)(a1 + 136) )
        {
          *a2 = 0LL;
          v8 = *(_QWORD *)(a1 + 136);
          if ( v8 )
            v6 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v8 + 24LL))(
                   v8,
                   &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
                   a2);
          else
            v6 = 0;
        }
        else
        {
          *a2 = 0LL;
          v6 = -2147024809;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 152), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v11, 0);
          v9 = *(_QWORD *)(a1 + 136);
          *(_QWORD *)(a1 + 136) = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        return v6;
      }
    }
  }
  return v6;
}
