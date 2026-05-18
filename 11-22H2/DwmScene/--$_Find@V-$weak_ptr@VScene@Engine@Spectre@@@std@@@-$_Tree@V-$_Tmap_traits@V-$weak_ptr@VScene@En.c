/*
 * XREFs of ??$_Find@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@1@AEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x18002EADC
 * Callers:
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetCameraByName@Engine@1Spectre@@UEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@V?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033F10 (-GetCameraByName@Engine@1Spectre@@UEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV-$basic_.c)
 *     ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614 (-UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@.c)
 * Callees:
 *     ??$_Find_lower_bound@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002F01C (--$_Find_lower_bound@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@-$_Tree@V-$_Tmap_traits@V-.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::_Find<std::weak_ptr<Spectre::Engine::Scene>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>,0>>::_Find_lower_bound<std::weak_ptr<Spectre::Engine::RenderDevice>>(
    a1,
    v5,
    a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *(_QWORD *)(v3 + 8) < *(_QWORD *)(v6 + 40) )
    return *(_QWORD *)v2;
  return result;
}
