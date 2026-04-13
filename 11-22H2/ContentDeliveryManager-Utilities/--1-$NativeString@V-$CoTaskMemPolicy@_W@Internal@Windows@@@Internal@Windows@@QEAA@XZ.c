/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18002BC80
 * Callers:
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$0 @ 0x1800D5A36 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$1 @ 0x1800D5A48 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$1.c)
 *     _ContentManagement::CreativeEventReportedCache::SetEventReported_::_1_::dtor$0 @ 0x1800D697F (_ContentManagement--CreativeEventReportedCache--SetEventReported_--_1_--dtor$0.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$0 @ 0x1800D6991 (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys_::_1_::dtor$1 @ 0x1800D6A21 (_CreativeFramework--LockScreenCreativeConfigHelpers--PeekLockScreenRegistryKeys_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$1 @ 0x1800D7301 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath_::_1_::dtor$0 @ 0x1800D73D9 (_CreativeFramework--SubscribedContentStore--Details--GetSubscriptionRegPath_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::CreateTriggerKey_::_1_::dtor$4 @ 0x1800D92D6 (_Windows--Services--TargetedContent--Internal--CreateTriggerKey_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$4 @ 0x1800D948F (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger_::_1_::dtor$5 @ 0x1800D94A1 (_Windows--Services--TargetedContent--Internal--GetTaskNameForTrigger_--_1_--dtor$5.c)
 *     _CreativeFramework::SubscribedContentStore::Details::GetSubscriptionRegPath_::_1_::dtor$0_0 @ 0x1800D94C5 (_CreativeFramework--SubscribedContentStore--Details--GetSubscriptionRegPath_--_1_--dtor$0_0.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$0 @ 0x1800DC7DB (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$1 @ 0x1800DCD85 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::~NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>(
        void *a1)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1);
}
