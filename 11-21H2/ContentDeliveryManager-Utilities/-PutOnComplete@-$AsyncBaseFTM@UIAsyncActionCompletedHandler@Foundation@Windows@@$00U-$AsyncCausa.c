/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18003C870
 * Callers:
 *     ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18004AC00 (-put_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x180024434 (--$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v7; // edi
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
    v7 = -2147483634;
    RoOriginateError(2147483662LL, 0LL, v4, a4);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
  {
    v7 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::Initialize<Windows::Foundation::IAsyncActionCompletedHandler>(
           (__int64 *)(a1 + 112),
           a2);
    if ( v7 >= 0 )
    {
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
      if ( a2 )
      {
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
      }
      _InterlockedOr(v11, 0);
      v9 = *(_DWORD *)(a1 + 48);
      v14 = -2;
      _InterlockedCompareExchange(&v14, v9, -2);
      if ( (unsigned int)(v14 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)v7;
}
