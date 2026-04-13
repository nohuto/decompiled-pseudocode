/*
 * XREFs of ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x18006E3D0
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800F06FD (_Windows--Services--TargetedContent--Internal--TargetedContentActionInternalImpl--RuntimeClassIn.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$4 @ 0x1800F07F9 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$4.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$0 @ 0x1800F09E5 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800F09E5.c)
 *     _CreativeFramework::Actions::GetActionService_::_1_::dtor$0 @ 0x1800F3F60 (_CreativeFramework--Actions--GetActionService_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$4 @ 0x1800F5702 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800F5702.c)
 *     _CreativeFramework::Actions::NotificationManagerService::NotificationManagerService_::_1_::dtor$25 @ 0x1800F57B0 (_CreativeFramework--Actions--NotificationManagerService--NotificationManagerService_ea_1800F57B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<std::wstring,std::wstring>::~map<std::wstring,std::wstring>(void **a1)
{
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>(a1);
}
