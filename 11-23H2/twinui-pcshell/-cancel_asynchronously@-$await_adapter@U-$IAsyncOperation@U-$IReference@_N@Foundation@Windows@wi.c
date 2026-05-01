/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180253384
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_02c0e7e3e0c9bb1a008abdacb67258b9_@@CA@PEAX@Z @ 0x1806997C0 (-_lambda_invoker_cdecl_@_lambda_02c0e7e3e0c9bb1a008abdacb67258b9_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously$_InitCoro$2 @ 0x180253164 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windo_ea_180253164.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>::cancel_asynchronously(
        __int64 *a1)
{
  void *v2; // rax
  char v3; // bl
  _DWORD v5[14]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  _BYTE v7[8]; // [rsp+60h] [rbp-18h] BYREF

  v6 = a1;
  v2 = operator new(0x2AuLL);
  v5[0] = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____::cancel_asynchronously__InitCoro_2(
    (__int64)v7,
    (__int64)v5,
    (__int64)v2,
    a1);
  v3 = v7[0];
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a1);
  return v3;
}
