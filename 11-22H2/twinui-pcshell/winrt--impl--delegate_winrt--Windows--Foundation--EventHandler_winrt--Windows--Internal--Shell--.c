/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs___lambda_f7708ede42cbb90dfb878b61b26817f2___::Invoke @ 0x18027BCA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_ @ 0x18027A4DC (_lambda_f7708ede42cbb90dfb878b61b26817f2_--operator()_winrt--Windows--Internal--Shell--ProcessIn.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs___lambda_f7708ede42cbb90dfb878b61b26817f2___::Invoke(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = a1 + 8;
  try
  {
    lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_(
      v3,
      a2,
      &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v5);
  }
  return result;
}
