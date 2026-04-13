/*
 * XREFs of ??1?$MoveOnCopy@VString@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800281B4
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_a1ff6082cb2eb641f5b40d58c2b5fcec____::_1_::dtor$2 @ 0x1800EE2ED (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentManagement--Ad.c)
 *     _ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync_::_1_::dtor$0 @ 0x1800EE89C (_ContentManagement--ContentManagementService--ResolveLayoutBindingsAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800EE8AE (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$0 @ 0x1800EFE63 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$1 @ 0x1800EFE75 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$2 @ 0x1800EFE87 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x1800EFE99 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$4 @ 0x1800F0745 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$4.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$5 @ 0x1800F0757 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$5 @ 0x1800F0841 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSubscription_--_.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$9 @ 0x1800F0853 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$9.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$4 @ 0x1800F0A2D (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800F0A2D.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$2 @ 0x1800F23EC (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800F23EC.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$3 @ 0x1800F23FE (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800F23FE.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
