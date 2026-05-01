/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_9c7f48dca1dc7726f0d5a31e6a2a9389___::Invoke @ 0x1805AFA60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_::operator() @ 0x1805AEEDC (_lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_9c7f48dca1dc7726f0d5a31e6a2a9389___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 8;
  try
  {
    lambda_9c7f48dca1dc7726f0d5a31e6a2a9389_::operator()(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
