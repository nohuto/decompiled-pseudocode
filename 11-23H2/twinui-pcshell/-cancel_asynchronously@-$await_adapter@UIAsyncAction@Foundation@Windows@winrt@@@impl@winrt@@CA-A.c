/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x1802495D0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_dcee8798513fab46317d31c20fdb92c7_@@CA@PEAX@Z @ 0x1806936B0 (-_lambda_invoker_cdecl_@_lambda_dcee8798513fab46317d31c20fdb92c7_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously$_InitCoro$2 @ 0x180249304 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncAction_--cancel_asynchronously$_Ini.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>::cancel_asynchronously(
        winrt::Windows::Foundation::IUnknown *a1)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+68h] [rbp+10h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = operator new(0x2AuLL);
  v6 = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncAction_::cancel_asynchronously__InitCoro_2(
    (__int64)&v5,
    (__int64)&v6,
    (__int64)v2,
    (__int64)a1);
  v3 = v5;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a1);
  return v3;
}
