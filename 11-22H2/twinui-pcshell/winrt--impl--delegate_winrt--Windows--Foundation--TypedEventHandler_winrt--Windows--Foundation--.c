/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_4c3f00df1550c08ca3a36d5763d73df3___::Invoke @ 0x18005C8A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator() @ 0x18005C8E4 (_lambda_4c3f00df1550c08ca3a36d5763d73df3_--operator().c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Microsoft::UI::Xaml::ResourceManagerRequestedEventArgs___lambda_4c3f00df1550c08ca3a36d5763d73df3___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    v4 = a3;
    lambda_4c3f00df1550c08ca3a36d5763d73df3_::operator()(a1, a2, &v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
