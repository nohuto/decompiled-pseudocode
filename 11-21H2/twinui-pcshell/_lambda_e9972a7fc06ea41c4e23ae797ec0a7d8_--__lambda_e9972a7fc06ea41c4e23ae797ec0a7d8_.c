/*
 * XREFs of _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_ @ 0x18019B99C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___::_CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___ @ 0x18019BB1C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___--_CTask.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$4 @ 0x18019D9D3 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$4.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 44);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 336));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 40, v2, v3, v4);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(this);
}
