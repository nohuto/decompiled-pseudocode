/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::unhandled_exception @ 0x18057D9A0
 * Callers:
 *     __lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1::operator()_::_1_::catch$10 @ 0x1801BB23E (__lambda_b8623916b833b4369876a538bb21da9f_$_ResumeCoro$1--operator()_--_1_--catch$10.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x180341628 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18041CF04 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18041D194 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18041EAD4 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18041F138 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_b8623916b833b4369876a538bb21da9f__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__void_::unhandled_exception(
        __int64 a1)
{
  void *v2; // rax
  std::exception_ptr *v3; // rcx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (RTL_SRWLOCK *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=((void *)(a1 + 32), v2);
  __ExceptionPtrDestroy(v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 88) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 88) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
