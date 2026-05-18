/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18004E918
 * Callers:
 *     ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18004EAA4 (--1-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShaderInfo@ShaderManager.c)
 *     ??1ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EBA4 (--1ShaderManager@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18004D874 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D874.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>::~_Tree<std::_Tmap_traits<std::string,Spectre::Engine::ShaderManager::ShaderInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((char **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x68uLL);
}
