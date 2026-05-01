/*
 * XREFs of ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180238260
 * Callers:
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_ResumeCoro$1 @ 0x1802493E0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress__ea_1802493E0.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1803E2B1C (--$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::Cancel(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(a1, &v2);
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
  if ( v1 < 0 )
    winrt::throw_hresult((unsigned int)v1);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v2);
}
