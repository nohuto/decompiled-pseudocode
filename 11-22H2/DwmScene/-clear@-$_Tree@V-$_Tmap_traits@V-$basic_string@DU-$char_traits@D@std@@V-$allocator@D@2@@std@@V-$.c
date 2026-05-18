/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180050B80
 * Callers:
 *     ?Release@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800504D0 (-Release@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@PEAX@1@@Z @ 0x18004D95C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D95C.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::string,std::shared_ptr<Spectre::Engine::ShaderFamily>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>,void *>>>(
             (__int64)a1,
             (__int64)a1,
             *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
