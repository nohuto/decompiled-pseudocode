/*
 * XREFs of ??1?$producer_ref@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802355D0
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Management::Deployment::PackageVolume__winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume__LockScreenWidgetPackageHelperBase___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume__void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::dtor$0 @ 0x180230241 (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncOperationCompletedHandler_win_ea_180230241.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::producer_ref<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>::~producer_ref<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Deployment::PackageVolume>>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  *(_QWORD *)a1 = 0LL;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a1);
}
