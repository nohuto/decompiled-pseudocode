/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180059830
 * Callers:
 *     ??1Camera@Engine@Spectre@@UEAA@XZ @ 0x180059904 (--1Camera@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@1@@Z @ 0x180058B94 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$pair@HV-$basic_string@DU-$char_traits@D.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::pair<int,std::string>,Spectre::Utils::Math::Vector4,std::less<std::pair<int,std::string>>,std::allocator<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>,0>>::~_Tree<std::_Tmap_traits<std::pair<int,std::string>,Spectre::Utils::Math::Vector4,std::less<std::pair<int,std::string>>,std::allocator<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x58uLL);
}
