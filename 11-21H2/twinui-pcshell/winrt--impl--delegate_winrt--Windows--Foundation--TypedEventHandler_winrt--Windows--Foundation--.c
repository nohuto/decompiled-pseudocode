/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___::Invoke @ 0x1801C8E10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c7ad7d039b35a8565706af83963bb0b1_::operator() @ 0x1801C5694 (_lambda_c7ad7d039b35a8565706af83963bb0b1_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___::Invoke(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3)
{
  DashboardTaskbarSettings *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (DashboardTaskbarSettings *)(a1 + 8);
  try
  {
    lambda_c7ad7d039b35a8565706af83963bb0b1_::operator()(v3, a2, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
