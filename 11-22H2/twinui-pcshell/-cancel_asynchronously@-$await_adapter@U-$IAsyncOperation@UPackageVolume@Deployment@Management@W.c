/*
 * XREFs of ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180249500
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_4089c2b9b41646ef709d49c54efaabdd_@@CA@PEAX@Z @ 0x18022E460 (-_lambda_invoker_cdecl_@_lambda_4089c2b9b41646ef709d49c54efaabdd_@@CA@PEAX@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume___::cancel_asynchronously$_InitCoro$2 @ 0x18024914C (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Managemen.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::cancel_asynchronously(
        __int64 *a1)
{
  void *v2; // rax
  char v3; // bl
  char v5; // [rsp+68h] [rbp+10h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v2 = operator new(0x2AuLL);
  v6 = 0;
  winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume___::cancel_asynchronously__InitCoro_2(
    (__int64)&v5,
    (__int64)&v6,
    (__int64)v2,
    a1);
  v3 = v5;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a1);
  return v3;
}
