/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18004D874
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18004D874 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D874.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18004E918 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShader.c)
 *     ?Release@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800504D0 (-Release@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18004D874 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D874.c)
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@QEAA@XZ @ 0x18004EAC8 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShaderInfo@ShaderMa.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  char *v3; // rdi
  char *v6; // rbx

  v3 = a3;
  while ( !v3[25] )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>(
      a1,
      a2,
      *((_QWORD *)v3 + 2));
    v6 = v3;
    v3 = *(char **)v3;
    std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>::~pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>(v6 + 32);
    std::_Deallocate<16,0>(v6, 0x68uLL);
  }
}
