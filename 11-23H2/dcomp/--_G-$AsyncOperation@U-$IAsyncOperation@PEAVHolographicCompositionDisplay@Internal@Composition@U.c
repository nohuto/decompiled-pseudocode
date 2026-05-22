/*
 * XREFs of ??_G?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@EEAAPEAXI@Z @ 0x180119540
 * Callers:
 *     ??_E?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@G7EAAPEAXI@Z @ 0x1800ADD90 (--_E-$AsyncOperation@U-$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@U.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1?$AsyncOperation@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@EEAA@XZ @ 0x180119270 (--1-$AsyncOperation@U-$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI.c)
 */

_QWORD *__fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::~AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
