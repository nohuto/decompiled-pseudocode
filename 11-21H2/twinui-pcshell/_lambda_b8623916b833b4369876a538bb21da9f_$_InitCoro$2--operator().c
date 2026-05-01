/*
 * XREFs of _lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2::operator() @ 0x1801BAF30
 * Callers:
 *     _lambda_b8623916b833b4369876a538bb21da9f_::operator() @ 0x1801BB280 (_lambda_b8623916b833b4369876a538bb21da9f_--operator().c)
 * Callees:
 *     std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type::promise_type @ 0x18003A1C4 (std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncOperation_win_ea_18003A1C4.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::get_return_object @ 0x18003C8A8 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18003C8A8.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator() @ 0x1801BB050 (_lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1--operator().c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b8623916b833b4369876a538bb21da9f___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 289) = a4;
  *(_QWORD *)a2 = lambda_b8623916b833b4369876a538bb21da9f___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type::promise_type(v6);
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 288) = 0;
  return lambda_b8623916b833b4369876a538bb21da9f___ResumeCoro_1::operator()(a2);
}
