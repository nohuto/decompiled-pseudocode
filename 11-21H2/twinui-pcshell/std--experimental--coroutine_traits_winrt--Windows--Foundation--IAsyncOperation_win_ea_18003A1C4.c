/*
 * XREFs of std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type::promise_type @ 0x18003A1C4
 * Callers:
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2::operator() @ 0x1801BAF30 (_lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type::promise_type(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = off_180646C58;
  *(_QWORD *)(a1 + 24) = off_180646C00;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &off_18061D758;
  __ExceptionPtrCreate((void *)(a1 + 32));
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)a1 = &off_18061D718;
  result = a1;
  *(_WORD *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  return result;
}
