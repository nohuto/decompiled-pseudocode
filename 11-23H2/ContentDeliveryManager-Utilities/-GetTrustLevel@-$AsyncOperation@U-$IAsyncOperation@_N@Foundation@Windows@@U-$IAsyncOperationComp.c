/*
 * XREFs of ?GetTrustLevel@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180036D40
 * Callers:
 *     ?GetTrustLevel@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@WKI@EAAJPEAW4TrustLevel@@@Z @ 0x180036D60 (-GetTrustLevel@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsync_ea_180036D60.c)
 *     sub_1800598A0 @ 0x1800598A0 (sub_1800598A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 232);
  return 0LL;
}
