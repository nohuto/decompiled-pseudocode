/*
 * XREFs of _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2::operator() @ 0x18021B09C
 * Callers:
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator() @ 0x18021B3B4 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_--operator().c)
 * Callees:
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type::promise_type @ 0x180066B70 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_180066B70.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::get_return_object @ 0x180069A30 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_180069A30.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1::operator() @ 0x18021B1C0 (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 129) = a4;
  *(_QWORD *)a2 = lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type::promise_type(v6);
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 128) = 0;
  return lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___ResumeCoro_1::operator()(a2);
}
