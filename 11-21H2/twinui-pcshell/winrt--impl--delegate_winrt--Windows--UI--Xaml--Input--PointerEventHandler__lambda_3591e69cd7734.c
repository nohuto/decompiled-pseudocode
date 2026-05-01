/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_3591e69cd7734f7f9a496e70d8c5fafc___::Invoke @ 0x18060A2E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3591e69cd7734f7f9a496e70d8c5fafc_::operator() @ 0x1806083B4 (_lambda_3591e69cd7734f7f9a496e70d8c5fafc_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_3591e69cd7734f7f9a496e70d8c5fafc___::Invoke(
        __int64 a1)
{
  struct IWeakReference **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct IWeakReference **)(a1 + 8);
  try
  {
    lambda_3591e69cd7734f7f9a496e70d8c5fafc_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
