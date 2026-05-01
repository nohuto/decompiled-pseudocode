/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::DragStartingEventArgs___lambda_941eca72fc43b2c4835a5fc6680f0a4a___::Invoke @ 0x1807748B0
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator() @ 0x1807727F8 (_lambda_941eca72fc43b2c4835a5fc6680f0a4a_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Xaml::UIElement_winrt::Windows::UI::Xaml::DragStartingEventArgs___lambda_941eca72fc43b2c4835a5fc6680f0a4a___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct IWeakReference **v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (struct IWeakReference **)(a1 + 8);
  v6 = a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  v7 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  try
  {
    lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator()(
      v4,
      (winrt::Windows::Foundation::IUnknown *)&v7,
      (winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
