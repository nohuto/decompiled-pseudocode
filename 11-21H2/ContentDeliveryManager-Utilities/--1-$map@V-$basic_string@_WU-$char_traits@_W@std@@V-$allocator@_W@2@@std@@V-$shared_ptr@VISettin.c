/*
 * XREFs of ??1?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@@std@@QEAA@XZ @ 0x1800A8E10
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$13 @ 0x1800F319F (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$13.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$4 @ 0x1800F337C (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName_::_1_::dtor$9 @ 0x1800F33B2 (_Windows--Services--TargetedContent--Internal--GetTriggerSettingsContainerFromName_--_1_--dtor$9.c)
 *     _CreativeFramework::CommonHelper::SettingsContainer::DeleteContainer_::_1_::dtor$0 @ 0x1800F759F (_CreativeFramework--CommonHelper--SettingsContainer--DeleteContainer_--_1_--dtor$0.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180066F70 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::map<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>>::~map<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>>(
        void **a1)
{
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  operator delete(*a1);
}
