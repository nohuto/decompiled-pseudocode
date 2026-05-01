/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___::Invoke @ 0x180721A80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d2929146ab183b5cd17811f33a4bdab8_::operator() @ 0x1807206E4 (_lambda_d2929146ab183b5cd17811f33a4bdab8_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemDisplayInfoChangedEventArgs___lambda_d2929146ab183b5cd17811f33a4bdab8___::Invoke(
        __int64 a1,
        volatile signed __int64 *a2,
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
    lambda_d2929146ab183b5cd17811f33a4bdab8_::operator()(v3, a2, &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
