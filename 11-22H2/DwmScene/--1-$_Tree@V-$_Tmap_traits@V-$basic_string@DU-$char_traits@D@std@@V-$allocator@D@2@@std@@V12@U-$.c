/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800317AC
 * Callers:
 *     ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@QEAA@XZ @ 0x180031AB0 (--1-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V12@U-$less@V-$basic_stri.c)
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 *     ??1SceneNode@Engine@Spectre@@UEAA@XZ @ 0x18003B364 (--1SceneNode@Engine@Spectre@@UEAA@XZ.c)
 *     _std::map_std::basic_string_char_std::char_traits_char__std::allocator_char____std::basic_string_char_std::char_traits_char__std::allocator_char____std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__std::basic_string_char_std::char_traits_char__std::allocator_char_________::map_std::basic_string_char_std::char_traits_char__std::allocator_char____std::basic_string_char_std::char_traits_char__std::allocator_char____std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__std::basic_string_char_std::char_traits_char__std::allocator_char__________::_1_::dtor$0 @ 0x1800E542B (_std--map_std--basic_string_char_std--char_traits_char__std--allocator_char____std--basic_string.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@PEAX@1@@Z @ 0x18002E8AC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18002E8AC.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>::~_Tree<std::_Tmap_traits<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,std::string>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,std::string>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x60uLL);
}
