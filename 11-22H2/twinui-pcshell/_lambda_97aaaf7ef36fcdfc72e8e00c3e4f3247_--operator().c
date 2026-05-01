/*
 * XREFs of _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator() @ 0x18021B3B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18021BA90 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2::operator() @ 0x18021B09C (_lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_$_InitCoro$2--operator().c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247_::operator()(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+138h] [rbp+10h] BYREF

  v4 = operator new(0xF9uLL);
  v6 = 0;
  lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247___InitCoro_2::operator()(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
