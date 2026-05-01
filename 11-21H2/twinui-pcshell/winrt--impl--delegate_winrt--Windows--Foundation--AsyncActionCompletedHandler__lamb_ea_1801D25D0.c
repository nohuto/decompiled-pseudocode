/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke @ 0x1801D25D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_ @ 0x1801D0CC0 (_lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_--operator()_winrt--Windows--Foundation--IAsyncAction_.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (__int64 *)(a1 + 8);
  try
  {
    lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d_::operator()_winrt::Windows::Foundation::IAsyncAction_(v3, (__int64)&v6, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
