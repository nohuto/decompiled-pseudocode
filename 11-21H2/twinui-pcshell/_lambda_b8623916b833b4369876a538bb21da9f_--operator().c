/*
 * XREFs of _lambda_b8623916b833b4369876a538bb21da9f_::operator() @ 0x1801BB280
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x1801BB9D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2::operator() @ 0x1801BAF30 (_lambda_b8623916b833b4369876a538bb21da9f_$_InitCoro$2--operator().c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall lambda_b8623916b833b4369876a538bb21da9f_::operator()(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+1D8h] [rbp+10h] BYREF

  v4 = operator new(0x199uLL);
  v6 = 0;
  lambda_b8623916b833b4369876a538bb21da9f___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
