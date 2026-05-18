/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180059860
 * Callers:
 *     ??$_Try_emplace@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@$$V@?$map@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@U?$less@U?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@V?$allocator@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@UVector4@Math@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEBU?$pair@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x180058D64 (--$_Try_emplace@AEBU-$pair@HV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::string::_Tidy_deallocate(v2 + 40);
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::pair<int,std::string> const,Spectre::Utils::Math::Vector4>,void *>>>(a1);
}
