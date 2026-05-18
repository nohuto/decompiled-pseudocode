/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180058BEC
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x180058B94 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$pair@HV-$basic_string@DU-$char_traits@D.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>(
        __int64 a1,
        void *a2)
{
  std::string::_Tidy_deallocate((__int64)a2 + 40);
  std::_Deallocate<16,0>(a2, 0x58uLL);
}
