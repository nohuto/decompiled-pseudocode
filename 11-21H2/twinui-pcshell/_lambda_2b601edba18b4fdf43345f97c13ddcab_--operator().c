/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1801B1DE8
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1801B2A20 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@XZ @ 0x1800F81AC (--1-$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator() @ 0x1801B1AA0 (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  _DWORD *v6; // rax
  int v8; // [rsp+198h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v9; // [rsp+1A0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x131uLL);
  v8 = 0;
  lambda_2b601edba18b4fdf43345f97c13ddcab___InitCoro_2::operator()((__int64)&v8, v6, a2, (__int64)a3, a1);
  winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>::~TypedEventHandler<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs>(a3);
  return a2;
}
