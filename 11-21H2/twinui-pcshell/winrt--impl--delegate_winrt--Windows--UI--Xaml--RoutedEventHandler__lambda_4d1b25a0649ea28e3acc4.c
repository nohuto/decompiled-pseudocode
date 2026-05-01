/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0___::Invoke @ 0x18060A380
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0_::operator() @ 0x180608460 (_lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_4d1b25a0649ea28e3acc4cfd8c5ad9c0_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
