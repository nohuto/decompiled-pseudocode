/*
 * XREFs of _lambda_ccf65d9649214ffd774f2e628ae5cb52_::__lambda_ccf65d9649214ffd774f2e628ae5cb52_ @ 0x18019B958
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::_CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x18019BACC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___--_CTask.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$5 @ 0x18019D9DF (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$5.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_ccf65d9649214ffd774f2e628ae5cb52_::__lambda_ccf65d9649214ffd774f2e628ae5cb52_(
        volatile signed __int32 **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(this + 42));
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 40, v2, v3, v4);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)this);
}
