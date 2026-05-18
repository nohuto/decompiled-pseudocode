/*
 * XREFs of ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18009B708
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@1@@Z @ 0x180098648 (--$emplace@AEBU-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Layer@.c)
 * Callees:
 *     _o_ceilf_0 @ 0x18000BFFC (_o_ceilf_0.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Desired_grow_bucket_count(
        __int64 a1,
        __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
       + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
  else
    v2 = (float)(int)a2;
  v3 = o_ceilf_0(v2 / *(float *)&dword_1801D8A50);
  v4 = 0LL;
  if ( v3 >= 9.223372e18 )
  {
    v3 = v3 - 9.223372e18;
    if ( v3 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v5 = v4 + (unsigned int)(int)v3;
  v6 = 8LL;
  if ( v5 > 8 )
    v6 = v5;
  result = qword_1801D8A88;
  if ( qword_1801D8A88 < v6 )
  {
    if ( (unsigned __int64)qword_1801D8A88 < 0x200 && 8 * qword_1801D8A88 >= v6 )
      return 8 * qword_1801D8A88;
    return v6;
  }
  return result;
}
