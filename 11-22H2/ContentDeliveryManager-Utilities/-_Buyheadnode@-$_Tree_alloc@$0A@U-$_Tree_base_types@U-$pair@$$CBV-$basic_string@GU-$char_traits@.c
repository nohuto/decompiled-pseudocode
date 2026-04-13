/*
 * XREFs of ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@2@@std@@PEAX@2@XZ @ 0x1800601DC
 * Callers:
 *     CreativeFramework::Health::details::_dynamic_initializer_for__s_placementToBaseScenarioEventsMap__ @ 0x1800045A0 (CreativeFramework--Health--details--_dynamic_initializer_for__s_placementToBaseScenarioEventsMap.c)
 *     ??0?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBUless@Details@CommonHelper@CreativeFramework@@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x1800D3978 (--0-$_Tree_comp@$0A@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$all_ea_1800D3978.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004938 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::Health::details::BaseScenarioEvents>>>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = operator new(0x50uLL);
  if ( !result )
    std::_Xbad_alloc();
  try
  {
    *result = result;
    result[1] = result;
    result[2] = result;
    *((_WORD *)result + 12) = 257;
  }
  catch ( ... )
  {
    operator delete(result);
    throw;
  }
  return result;
}
