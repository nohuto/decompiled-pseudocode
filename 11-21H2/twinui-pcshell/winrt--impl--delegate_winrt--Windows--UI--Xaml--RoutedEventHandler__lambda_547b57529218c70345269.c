/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_547b57529218c70345269c3b33480baf___::Invoke @ 0x18060A3D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_547b57529218c70345269c3b33480baf_::operator() @ 0x1806084EC (_lambda_547b57529218c70345269c3b33480baf_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_547b57529218c70345269c3b33480baf___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_547b57529218c70345269c3b33480baf_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
