/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004E9B8
 * Callers:
 *     ??$_Emplace@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@$$QEAUShaderInfo@ShaderManager@Engine@Spectre@@@Z @ 0x18004D758 (--$_Emplace@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShaderInfo@ShaderMana.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@QEAA@XZ @ 0x18004EAC8 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShaderInfo@ShaderMa.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>::~pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>(v2 + 32);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (void)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<int const,std::function<void (void)>>,void *>>>(a1);
}
