/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke @ 0x18068B430
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_eed24a43ab320b602e73bc35d7541654_::operator() @ 0x18068AE5C (_lambda_eed24a43ab320b602e73bc35d7541654_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 8);
  try
  {
    lambda_eed24a43ab320b602e73bc35d7541654_::operator()(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
