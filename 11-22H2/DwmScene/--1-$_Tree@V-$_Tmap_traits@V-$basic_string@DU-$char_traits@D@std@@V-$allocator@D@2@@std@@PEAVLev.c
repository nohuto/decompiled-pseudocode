/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVLevelSettings@Trace@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18001D258
 * Callers:
 *     ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18002B854 (--1-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4ShaderOption@Engine@Spe.c)
 *     ?LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ @ 0x18002C56C (-LogGpuProfilingData@RenderOutput@Engine@Spectre@@AEAAXXZ.c)
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 *     ??1ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EBA4 (--1ShaderManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??1ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FC40 (--1ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 *     _std::map_std::basic_string_char_std::char_traits_char__std::allocator_char____float_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__float_____::map_std::basic_string_char_std::char_traits_char__std::allocator_char____float_std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__float______::_1_::dtor$0 @ 0x1800E5419 (_std--map_std--basic_string_char_std--char_traits_char__std--allocator_char____float_std--less_s.c)
 *     _Trace::GetAreaList_::_2_::_dynamic_atexit_destructor_for__list__ @ 0x1800F24C0 (_Trace--GetAreaList_--_2_--_dynamic_atexit_destructor_for__list__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@1@@Z @ 0x18001C9AC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>::~_Tree<std::_Tmap_traits<std::string,Trace::LevelSettings *,std::less<std::string>,std::allocator<std::pair<std::string const,Trace::LevelSettings *>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,double>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x48uLL);
}
