/*
 * XREFs of ?at@?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@@std@@QEBAAEBW4Layer@MaterialMaker@Framework@Spectre@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x18009BB38
 * Callers:
 *     ?GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA?AW4Layer@MaterialMaker@Framework@3@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009A630 (-GetSerializablePropertyLayer@BaseShaderExtension@Engine@Spectre@@UEBA-AW4Layer@MaterialMaker@Fr.c)
 * Callees:
 *     ??$_Hash_array_representation@D@std@@YA_KQEBD_K@Z @ 0x18001E9A0 (--$_Hash_array_representation@D@std@@YA_KQEBD_K@Z.c)
 *     ??$_Find_last@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@V?$_Uhash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Layer@MaterialMaker@Framework@Spectre@@@std@@PEAX@std@@@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@_K@Z @ 0x1800984C4 (--$_Find_last@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 */

__int64 __fastcall std::unordered_map<std::string,enum Spectre::Framework::MaterialMaker::Layer>::at(
        __int64 a1,
        __int64 a2)
{
  unsigned __int8 *v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  size_t *v5; // r11
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (unsigned __int8 *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
    v2 = *(unsigned __int8 **)a2;
  v3 = std::_Hash_array_representation<char>(v2, *(_QWORD *)(a2 + 16));
  std::_Hash<std::_Umap_traits<std::string,enum Spectre::Framework::MaterialMaker::Layer,std::_Uhash_compare<std::string,std::hash<std::string>,std::equal_to<std::string>>,std::allocator<std::pair<std::string const,enum Spectre::Framework::MaterialMaker::Layer>>,0>>::_Find_last<std::string>(
    v4,
    &v7,
    v5,
    v3);
  if ( !v8 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18009BB8DLL);
  }
  return v8 + 48;
}
