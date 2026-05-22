/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay__Windows::UI::Composition::Internal::HolographicCompositionDisplay___Windows::Internal::ComTaskPoolHandler__lambda_4328ccf16b233a81f6b03adc706b18ed___ @ 0x180118E6C
 * Callers:
 *     ?CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@MPEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180119810 (-CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay_____lambda_4328ccf16b233a81f6b03adc706b18ed___ @ 0x180118A3C (Windows--Internal--COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed___ea_180118A3C.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@Windows@@@01@@Z @ 0x180118D7C (--$MakeAsyncHelper@U-$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay__Windows::UI::Composition::Internal::HolographicCompositionDisplay___Windows::Internal::ComTaskPoolHandler__lambda_4328ccf16b233a81f6b03adc706b18ed___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  LPVOID v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax

  v7 = DefaultHeap::Alloc(0x20uLL);
  v9 = 0LL;
  if ( v7 )
    v9 = Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay_____lambda_4328ccf16b233a81f6b03adc706b18ed___(
           (__int64)v7,
           a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositionDisplay *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Composition.Internal.HolographicCompositionDisplay>",
           v8,
           v9);
}
