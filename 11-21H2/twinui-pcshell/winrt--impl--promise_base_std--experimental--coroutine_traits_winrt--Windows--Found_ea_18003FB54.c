/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::await_transform__winrt::resume_after_::_2_::awaitable_ @ 0x18003FB54
 * Callers:
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator() @ 0x1801BB050 (_lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1--operator().c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::await_transform__winrt::resume_after_::_2_::awaitable_(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v4; // al
  _QWORD *v5; // rdx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v4 = *(_BYTE *)(a1 + 93);
  *a2 = a3;
  v5 = (_QWORD *)((a1 + 72) & -(__int64)(v4 != 0));
  if ( v5 )
  {
    *a3 = v5;
    *(_QWORD *)(((a1 + 72) & -(__int64)(v4 != 0)) + 8) = a3;
    *v5 = _lambda_853bb78cc99d5363e4352e3710d5f65c_::_lambda_invoker_cdecl_;
  }
  return a2;
}
