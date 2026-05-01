/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs___lambda_1cf95a55fff0866401cd411783285d2a___::Invoke @ 0x180721AE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x1807203FC (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteSystemTimeOutInfoChangedEventArgs___lambda_1cf95a55fff0866401cd411783285d2a___::Invoke(
        __int64 a1,
        volatile signed __int32 *a2,
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
    lambda_1cf95a55fff0866401cd411783285d2a_::operator()(v3, a2, &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
