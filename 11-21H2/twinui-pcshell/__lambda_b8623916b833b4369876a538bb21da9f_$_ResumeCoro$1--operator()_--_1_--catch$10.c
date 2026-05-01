/*
 * XREFs of __lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator()_::_1_::catch$10 @ 0x1801BB23E
 * Callers:
 *     <none>
 * Callees:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::unhandled_exception @ 0x18057D9A0 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18057D9A0.c)
 */

__int64 __fastcall _lambda_b8623916b833b4369876a538bb21da9f___ResumeCoro_1::operator()_::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 80);
  *(_WORD *)(v2 + 8) = -1;
  *(_QWORD *)(v2 + 176) = v2 - 112;
  winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::unhandled_exception();
  return 0LL;
}
