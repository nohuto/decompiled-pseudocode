/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003FEE4
 * Callers:
 *     ??$_Emplace@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@AEAV?$shared_ptr@VSceneLayer@Engine@Spectre@@@1@@Z @ 0x18003F1E0 (--$_Emplace@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAV-$shared_ptr.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18003F5C4 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$$V@-$map@V-.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x18003FF58 (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VSc.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>::~pair<std::wstring const,std::shared_ptr<Spectre::Engine::SceneLayer>>(v2 + 32);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>,void *>>>(a1);
}
