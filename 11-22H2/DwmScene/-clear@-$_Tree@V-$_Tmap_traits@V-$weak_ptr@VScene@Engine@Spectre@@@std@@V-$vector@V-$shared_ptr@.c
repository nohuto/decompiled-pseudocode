/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@U?$owner_less@V?$weak_ptr@VScene@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x1800385D8
 * Callers:
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VScene@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@2@@std@@PEAX@1@@Z @ 0x18002E95C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$weak_ptr@VScene@Engine@Spectre@@@std@@V.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Scene>,std::vector<std::shared_ptr<Spectre::Engine::Camera>>,std::owner_less<std::weak_ptr<Spectre::Engine::Scene>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = std::_Tree_val<std::_Tree_simple_types<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::weak_ptr<Spectre::Engine::Scene> const,std::vector<std::shared_ptr<Spectre::Engine::Camera>>>,void *>>>(
             (__int64)a1,
             (__int64)a1,
             *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
