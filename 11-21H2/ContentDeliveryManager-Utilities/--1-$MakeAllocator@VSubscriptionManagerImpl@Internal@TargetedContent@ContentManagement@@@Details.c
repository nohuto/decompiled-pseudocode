/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180028A80
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$2 @ 0x1800EF291 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_1800EF291.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$0 @ 0x1800EF2B5 (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$2 @ 0x1800EF2FD (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$2.c)
 *     _std::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper_::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper__::_1_::dtor$1 @ 0x1800EF6BA (_std--_Ref_count_obj_ContentDeliveryManager--Background--CorrelationVectorWrapper_-_ea_1800EF6BA.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$1 @ 0x1800EFF17 (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$1 @ 0x1800F033C (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$2 @ 0x1800F191F (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800F191F.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$10 @ 0x1800F3E72 (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
