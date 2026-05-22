/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor__Windows::UI::Composition::Internal::HolographicCompositor___Windows::Internal::ComTaskPoolHandler__lambda_525e999c26fbeca1a1e2a68ab2096671___ @ 0x180114E10
 * Callers:
 *     ?CreateAsync@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@IPEAPEAU?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180116350 (-CreateAsync@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor_____lambda_525e999c26fbeca1a1e2a68ab2096671___ @ 0x18011464C (Windows--Internal--COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows--Inte.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIHolographicCompositor@Internal@Composition@UI@Windows@@@Internal@Windows@@@01@@Z @ 0x180114D20 (--$MakeAsyncHelper@U-$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor__Windows::UI::Composition::Internal::HolographicCompositor___Windows::Internal::ComTaskPoolHandler__lambda_525e999c26fbeca1a1e2a68ab2096671___(
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
    v9 = Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor_____lambda_525e999c26fbeca1a1e2a68ab2096671___(
           (__int64)v7,
           a4);
  return Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::Internal::HolographicCompositor *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::Internal::HolographicCompositor *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositor>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           a1,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Composition.Internal.HolographicCompositor>",
           v8,
           v9);
}
