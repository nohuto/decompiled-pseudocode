/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x18020DF98
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator() @ 0x18020DCAC (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  void *v6; // rax
  int v8; // [rsp+D8h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v9; // [rsp+E0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x7AuLL);
  v8 = 0;
  lambda_2b601edba18b4fdf43345f97c13ddcab___InitCoro_2::operator()((__int64)&v8, (__int64)v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>(a3);
  return a2;
}
