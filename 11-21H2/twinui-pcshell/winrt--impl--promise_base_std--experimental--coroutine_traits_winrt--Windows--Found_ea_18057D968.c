/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::rethrow_if_failed @ 0x18057D968
 * Callers:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::ErrorCode @ 0x18057B248 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18057B248.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::GetResults @ 0x18057BA24 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18057BA24.c)
 * Callees:
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18041CF04 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18041F138 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::rethrow_if_failed(
        __int64 a1)
{
  __int64 result; // rax
  std::exception_ptr *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 3 || (result = *(unsigned int *)(a1 + 88), (_DWORD)result == 2) )
  {
    v2 = std::exception_ptr::exception_ptr((std::exception_ptr *)v3, (const struct std::exception_ptr *)(a1 + 32));
    std::rethrow_exception(v2);
    __debugbreak();
  }
  return result;
}
