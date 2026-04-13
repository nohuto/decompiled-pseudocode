/*
 * XREFs of CreativeFramework::Health::details::_dynamic_atexit_destructor_for__s_placementToBaseScenarioEventsMap__ @ 0x1800F7AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180066F70 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 */

// Hidden C++ exception states: #wind=2
void CreativeFramework::Health::details::_dynamic_atexit_destructor_for__s_placementToBaseScenarioEventsMap__()
{
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
    (__int64)&CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap,
    *(__int64 **)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 8));
  *(_QWORD *)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 8) = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  *(_QWORD *)CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  *(_QWORD *)(CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap + 16) = CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap;
  qword_1801AF4A8 = 0LL;
  operator delete((void *)CreativeFramework::Health::details::s_placementToBaseScenarioEventsMap);
}
