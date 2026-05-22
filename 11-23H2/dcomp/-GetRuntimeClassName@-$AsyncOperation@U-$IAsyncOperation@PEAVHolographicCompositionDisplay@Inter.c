/*
 * XREFs of ?GetRuntimeClassName@?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180117090
 * Callers:
 *     ?GetRuntimeClassName@?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@WKI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800ADA10 (-GetRuntimeClassName@-$AsyncOperation@U-$IAsyncOperation@PEAVHolographicCompositor@Internal@Comp.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  HRESULT result; // eax
  const WCHAR *v4; // rcx
  __int64 v5; // rdx

  result = 0;
  *a2 = 0LL;
  v4 = *(const WCHAR **)(a1 + 224);
  if ( v4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v4[v5] );
    return WindowsCreateString(v4, v5, a2);
  }
  return result;
}
