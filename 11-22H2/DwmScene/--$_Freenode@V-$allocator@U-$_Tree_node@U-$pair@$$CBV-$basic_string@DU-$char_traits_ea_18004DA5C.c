/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18004DA5C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@1@@Z @ 0x18004D95C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D95C.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@@std@@QEAA@XZ @ 0x18004EAF0 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$shared_ptr@VIShad.c)
 */

void __fastcall std::_Tree_node<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>,void *>>>(
        __int64 a1,
        char *a2)
{
  std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>::~pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>(a2 + 32);
  std::_Deallocate<16,0>(a2, 0x50uLL);
}
