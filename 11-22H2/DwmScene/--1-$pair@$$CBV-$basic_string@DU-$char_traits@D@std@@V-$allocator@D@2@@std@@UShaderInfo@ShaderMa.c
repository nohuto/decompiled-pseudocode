/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@QEAA@XZ @ 0x18004EAC8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18004D874 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D874.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18004E9B8 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$cha_ea_18004E9B8.c)
 * Callees:
 *     ??1ShaderInfo@ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EB70 (--1ShaderInfo@ShaderManager@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>::~pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>(
        __int64 a1)
{
  Spectre::Engine::ShaderManager::ShaderInfo::~ShaderInfo((Spectre::Engine::ShaderManager::ShaderInfo *)(a1 + 32));
  std::string::_Tidy_deallocate(a1);
}
