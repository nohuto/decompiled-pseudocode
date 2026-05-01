/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ec805711c79670d05ccf93f6b458b0f9___::Invoke @ 0x180774AD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ec805711c79670d05ccf93f6b458b0f9_::operator() @ 0x180772B44 (_lambda_ec805711c79670d05ccf93f6b458b0f9_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_ec805711c79670d05ccf93f6b458b0f9___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_ec805711c79670d05ccf93f6b458b0f9_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
