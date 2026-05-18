/*
 * XREFs of ??$_Find_last@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_K@Z @ 0x1800984C4
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@1@@Z @ 0x180098648 (--$emplace@AEBU-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Layer@.c)
 *     ?at@?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@@std@@QEBAAEBW4Layer@MaterialMaker@Framework@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x18009BB38 (-at@-$unordered_map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4Layer@Materi.c)
 * Callees:
 *     ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z @ 0x18009831C (--$-RV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Find_last<std::string>(
        __int64 a1,
        __int64 *a2,
        size_t *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi

  v5 = qword_1801D8A58;
  v7 = *(_QWORD *)(qword_1801D8A68 + 16 * (a4 & qword_1801D8A80) + 8);
  if ( v7 == qword_1801D8A58 )
  {
    a2[1] = 0LL;
    *a2 = v5;
  }
  else
  {
    v8 = *(_QWORD *)(qword_1801D8A68 + 16 * (a4 & qword_1801D8A80));
    while ( std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>::operator()<std::string,std::string>(
              v5,
              a3,
              (const void **)(v7 + 16)) )
    {
      if ( v7 == v8 )
      {
        a2[1] = 0LL;
        *a2 = v7;
        return a2;
      }
      v7 = *(_QWORD *)(v7 + 8);
    }
    *a2 = *(_QWORD *)v7;
    a2[1] = v7;
  }
  return a2;
}
