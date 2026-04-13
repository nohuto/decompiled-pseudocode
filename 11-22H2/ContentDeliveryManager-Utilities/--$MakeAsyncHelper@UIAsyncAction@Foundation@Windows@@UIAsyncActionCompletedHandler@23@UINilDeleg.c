/*
 * XREFs of ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180027B04
 * Callers:
 *     ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002FB40 (-AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIA.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x1800266D8 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall ***a5)(_QWORD, __int64))
{
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  __int64 v8; // rbx
  int v9; // edi
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+28h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v10 = 0;
  v11 = L"Windows.Foundation.IAsyncAction";
  *a1 = 0LL;
  v6 = a5;
  if ( !a5 )
    return 2147942414LL;
  Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>(
    (__int64)&v12,
    a2,
    &v11,
    &v10);
  v8 = v12;
  if ( !v12 )
  {
    (**v6)(v6, 1LL);
    return 2147942414LL;
  }
  *(_QWORD *)(v12 + 256) = v6;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
  if ( v9 >= 0 )
  {
    *a1 = (v8 + 176) & -(__int64)(v8 != 0);
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  return (unsigned int)v9;
}
