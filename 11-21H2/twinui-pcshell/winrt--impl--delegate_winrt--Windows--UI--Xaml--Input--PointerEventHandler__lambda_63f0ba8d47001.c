/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f___::Invoke @ 0x18060A330
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_::operator() @ 0x1806085A4 (_lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_63f0ba8d47001b6298cbfa6e1cb1ee7f_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
