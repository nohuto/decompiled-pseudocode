/*
 * XREFs of winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_89d43c20f0f7bb0e860cd8602b20fbb7___::Invoke @ 0x18067B6D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator() @ 0x18067A394 (_lambda_89d43c20f0f7bb0e860cd8602b20fbb7_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_89d43c20f0f7bb0e860cd8602b20fbb7___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 8);
  try
  {
    lambda_89d43c20f0f7bb0e860cd8602b20fbb7_::operator()(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
