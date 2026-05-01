/*
 * XREFs of _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::__lambda_5a859347bbbbbb78c34c3a6938b2a83e_ @ 0x1801A6FCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___::_CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___ @ 0x1801A7000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a859347bbbbbb78c34c3a6938b2a83e___--_CTask.c)
 *     ?ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1803A1320 (-ActivateSearch@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXAEBUSearchAppActivatedEventA.c)
 *     _CUndockedMiniSearchAppExperienceManagerConfig::ActivateSearch_::_1_::dtor$2 @ 0x1803A147D (_CUndockedMiniSearchAppExperienceManagerConfig--ActivateSearch_--_1_--dtor$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_5a859347bbbbbb78c34c3a6938b2a83e_::__lambda_5a859347bbbbbb78c34c3a6938b2a83e_(
        volatile signed __int32 **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(this + 41));
  winrt::handle_type<winrt::impl::hstring_traits>::close(this + 40, v2, v3, v4);
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync::~MiniSearchAppExperienceManager_ActivateAppAsync((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivateAppAsync *)this);
}
