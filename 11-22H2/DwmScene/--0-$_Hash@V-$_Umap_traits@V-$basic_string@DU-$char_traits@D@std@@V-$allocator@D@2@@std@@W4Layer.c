/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@1@AEBV?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@1@@Z @ 0x1800987E0
 * Callers:
 *     ?GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA?AW4Layer@MaterialMaker@Framework@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009A630 (-GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA-AW4Layer@MaterialMaker@Fr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180042718 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rax

  dword_1801D8A50 = *a2;
  qword_1801D8A58 = 0LL;
  qword_1801D8A60 = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1801D8A58 = (__int64)v2;
  qword_1801D8A68 = 0LL;
  xmmword_1801D8A70 = 0LL;
  qword_1801D8A80 = 7LL;
  qword_1801D8A88 = 8LL;
  dword_1801D8A50 = LODWORD(FLOAT_1_0);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>>>>>::_Assign_grow(
    (__int64)&qword_1801D8A68,
    0x10uLL,
    (__int64)v2);
  return &dword_1801D8A50;
}
