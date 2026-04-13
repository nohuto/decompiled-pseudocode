/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x180057E00
 * Callers:
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_3_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$4 @ 0x1800EFC01 (_CreativeFramework--Health--details--GenericOffersHealthTracker_3_1_--GetOrCreateBaseEventForPla.c)
 *     _CreativeFramework::Health::details::GenericOffersHealthTracker_11_1_::GetOrCreateBaseEventForPlacementId_::_1_::dtor$4 @ 0x1800EFC59 (_CreativeFramework--Health--details--GenericOffersHealthTracker_11_1_--GetOrCreateBaseEventForPl.c)
 *     _std::unordered_map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue__std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_______::operator[]_::_1_::dtor$1 @ 0x1800F0663 (_std--unordered_map_std--basic_string_unsigned_short_std--char_traits_unsigned_shor_ea_1800F0663.c)
 *     _std::map_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::CommonHelper::Details::less_std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer_______::operator[]_::_1_::dtor$3 @ 0x1800F2F76 (_std--map_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar__ea_1800F2F76.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$14 @ 0x1800F31B1 (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$14.c)
 *     _CreativeFramework::CommonHelper::SettingsContainer::ResolveContainers_::_1_::dtor$4 @ 0x1800F76D5 (_CreativeFramework--CommonHelper--SettingsContainer--ResolveContainers_--_1_--dtor$4.c)
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>(
        __int64 a1)
{
  __int64 result; // rax

  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
