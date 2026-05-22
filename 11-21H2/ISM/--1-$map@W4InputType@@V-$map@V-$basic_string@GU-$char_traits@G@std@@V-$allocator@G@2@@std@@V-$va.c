/*
 * XREFs of ??1?$map@W4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@W4InputType@@@3@V?$allocator@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18009465C
 * Callers:
 *     _MPCConstantManager::MPCConstantManager_::_1_::dtor$1 @ 0x1800587BC (_MPCConstantManager--MPCConstantManager_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4InputType@@V?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@PEAX@1@@Z @ 0x180093DE0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4InputType@@V-$map@V-$basic_string@GU-$ch.c)
 */

void __fastcall std::map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>::~map<enum InputType,std::map<std::wstring,std::variant<unsigned long,bool,float>>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum InputType const,std::map<std::wstring,std::variant<unsigned long,bool,float>>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((void ***)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
