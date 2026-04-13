/*
 * XREFs of ??1?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x180067388
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$4 @ 0x1800D71B5 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$4.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$0 @ 0x1800D7443 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800D7443.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800D82E6 (_Windows--Services--TargetedContent--Internal--TargetedContentActionInternalImpl--R_ea_1800D82E6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<std::wstring,std::wstring>::~map<std::wstring,std::wstring>(void **a1)
{
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>(a1);
}
