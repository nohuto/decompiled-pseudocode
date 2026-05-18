/*
 * XREFs of ??$?RV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z @ 0x18009831C
 * Callers:
 *     ??$_Find_last@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_K@Z @ 0x1800984C4 (--$_Find_last@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18009B7A4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 */

char __fastcall std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>::operator()<std::string,std::string>(
        __int64 a1,
        size_t *a2,
        const void **a3)
{
  const void *v3; // r9
  const void *v4; // rcx
  const void *v5; // rax
  size_t v6; // r8
  int v7; // eax
  char v8; // cl

  v3 = a3;
  v4 = a3[2];
  v5 = a2;
  if ( (unsigned __int64)a3[3] >= 0x10 )
    v3 = *a3;
  v6 = a2[2];
  if ( a2[3] >= 0x10 )
    v5 = (const void *)*a2;
  if ( (const void *)v6 != v4 )
    return 1;
  v7 = memcmp_0(v5, v3, v6);
  v8 = 0;
  if ( v7 )
    return 1;
  return v8;
}
