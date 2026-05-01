/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke @ 0x18065B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const_&_ @ 0x180657638 (_lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_--operator()_winrt--Windows--Foundation--IInspectable_c.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 8);
  v6 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  try
  {
    lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const___(
      v3,
      v4,
      (winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
