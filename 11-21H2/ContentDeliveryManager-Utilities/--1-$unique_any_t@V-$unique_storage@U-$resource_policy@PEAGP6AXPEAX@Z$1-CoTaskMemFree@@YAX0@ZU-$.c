/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180028F9C
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$6 @ 0x1800EFD70 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$6.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$16 @ 0x1800EFD82 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUpdated_--_1_--.c)
 *     _ShellMRTHelper::MRTHelperBase::Resolve_::_1_::dtor$6 @ 0x1800EFD94 (_ShellMRTHelper--MRTHelperBase--Resolve_--_1_--dtor$6.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$0 @ 0x1800F07C3 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$0 @ 0x1800F08BF (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$0.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionState_::_1_::dtor$0 @ 0x1800F08F5 (_CreativeFramework--SubscribedContentStore--GetSubscriptionState_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$17 @ 0x1800F29B7 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$17.c)
 *     _Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray_::_1_::dtor$2 @ 0x1800F2A1A (_Windows--Services--TargetedContent--Internal--DecodeBase64ToBtyeArray_--_1_--dtor$2.c)
 *     _Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator_::_1_::dtor$0 @ 0x1800F2A3E (_Windows--Services--TargetedContent--Internal--GuidBiPredicateCreator_--_1_--dtor$0.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterWnfTrigger_::_1_::dtor$1 @ 0x1800F2C99 (_Windows--Services--TargetedContent--Internal--RegisterWnfTrigger_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer_::_1_::dtor$9 @ 0x1800F3322 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainer_--_1_--dtor$9.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService_::_1_::dtor$2 @ 0x1800F5A6A (_CreativeFramework--Actions--SetLockScreenHotspotsService--SetLockScreenHotspotsSer_ea_1800F5A6A.c)
 *     _CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage_::_1_::dtor$1 @ 0x1800F5C77 (_CreativeFramework--NotificationManager--ToastHelpers--ResolveRatingImage_--_1_--dtor$1.c)
 *     _CreativeFramework::Actions::SetDesktopWallpaperService::NotifyForDesktopSpotlightUpdates_::_1_::dtor$1 @ 0x1800F5C89 (_CreativeFramework--Actions--SetDesktopWallpaperService--NotifyForDesktopSpotlightUpdates_--_1_-.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType_::_1_::dtor$0 @ 0x1800F5C9B (_CreativeFramework--TargetedContentLayoutHelpers--Settings--GetLayoutType_--_1_--dtor$0.c)
 *     __lambda_201f500c0b3e8aa9f89acabd232435e5_::operator()_::_1_::dtor$0 @ 0x1800F5D48 (__lambda_201f500c0b3e8aa9f89acabd232435e5_--operator()_--_1_--dtor$0.c)
 *     _GetEdgeFaviconCache_::_1_::dtor$1 @ 0x1800F5F01 (_GetEdgeFaviconCache_--_1_--dtor$1.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$3 @ 0x1800F5F5B (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$3.c)
 *     _EdgeTileUtils::GetTileIdforNavigationUrl_::_1_::dtor$4 @ 0x1800F5F6D (_EdgeTileUtils--GetTileIdforNavigationUrl_--_1_--dtor$4.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800F63AA (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800F63AA.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType_::_1_::dtor$0 @ 0x1800F7129 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetLayoutType_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
