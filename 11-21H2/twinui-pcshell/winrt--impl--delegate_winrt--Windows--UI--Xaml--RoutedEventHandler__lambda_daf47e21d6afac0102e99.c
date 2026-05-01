/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_daf47e21d6afac0102e99be942e3237f___::Invoke @ 0x18060A420
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_daf47e21d6afac0102e99be942e3237f_::operator() @ 0x18060877C (_lambda_daf47e21d6afac0102e99be942e3237f_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_daf47e21d6afac0102e99be942e3237f___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_daf47e21d6afac0102e99be942e3237f_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
