/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke @ 0x180656AB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&_ @ 0x180656348 (_lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--ThreadP.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_e0b0b8eaa13602b9fabc447bd0975459___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 8);
  try
  {
    lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const___(
      v2,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
