/*
 * XREFs of ??R?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@QEBAXAEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@123@AEBW4AsyncStatus@123@@Z @ 0x180026544
 * Callers:
 *     ??$invoke@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@4@W4AsyncStatus@234@@impl@winrt@@YA_NAEBU?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@AEBU?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@AEBU1234@AEBU1234@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@01@AEBW4AsyncStatus@341@@Z @ 0x18002636C (--$invoke@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Window.c)
 *     winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void__enum_winrt::Windows::Foundation::AsyncStatus_ @ 0x180026518 (winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_winrt--Windows--S.c)
 *     ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_486da2381732f2ee2a115803ccb9f2a5_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x18057BBC0 (-Invoke@-$delegate@U-$AsyncOperationCompletedHandler@UIRandomAccessStreamReference@_ea_18057BBC0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::operator()(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, *a2, *a3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
