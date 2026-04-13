/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180038380
 * Callers:
 *     ?get_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x1800490E0 (-get_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
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
    for ( i = *(_DWORD *)(a1 + 128); i > 0; i = *(_DWORD *)(a1 + 128) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 128), i + 1, i) )
      {
        if ( *(_QWORD *)(a1 + 112) )
        {
          *a2 = 0LL;
          v8 = *(_QWORD *)(a1 + 112);
          if ( v8 )
            v6 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v8 + 24LL))(
                   v8,
                   &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
                   a2);
          else
            v6 = 0;
        }
        else
        {
          *a2 = 0LL;
          v6 = -2147024809;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v11, 0);
          v9 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        return v6;
      }
    }
  }
  return v6;
}
