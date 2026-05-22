/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke @ 0x1800CA030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d47f631da3751d72c8a8e135519addbc_::operator() @ 0x1800C9A88 (_lambda_d47f631da3751d72c8a8e135519addbc_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 8);
  try
  {
    lambda_d47f631da3751d72c8a8e135519addbc_::operator()(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
