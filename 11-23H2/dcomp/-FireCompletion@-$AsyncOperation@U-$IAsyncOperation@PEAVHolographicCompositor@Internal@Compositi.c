/*
 * XREFs of ?FireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180116870
 * Callers:
 *     <none>
 * Callees:
 *     ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x180118338 (-_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositor *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositor *>,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositor>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 256)) == 2 )
    return (unsigned int)Windows::Internal::ComTaskPoolHandler::_FireCompletion((struct Windows::Internal::IAsyncFireCompletion *)((a1 + 200) & -(__int64)(a1 != 8)));
  return v1;
}
