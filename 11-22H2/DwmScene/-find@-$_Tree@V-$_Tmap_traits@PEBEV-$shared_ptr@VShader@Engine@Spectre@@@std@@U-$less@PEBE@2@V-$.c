/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@U?$less@PEBE@2@V?$allocator@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@std@@@std@@@2@AEBQEBE@Z @ 0x180050BE0
 * Callers:
 *     ?GetShader@ShaderManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18004FE4C (-GetShader@ShaderManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@V-$ba.c)
 * Callees:
 *     ??$_Find_lower_bound@PEBE@?$_Tree@V?$_Tmap_traits@PEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@U?$less@PEBE@2@V?$allocator@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBQEBE@Z @ 0x18004DA0C (--$_Find_lower_bound@PEBE@-$_Tree@V-$_Tmap_traits@PEBEV-$shared_ptr@VShader@Engine@Spectre@@@std.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned char const *,std::shared_ptr<Spectre::Engine::Shader>,std::less<unsigned char const *>,std::allocator<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned char const *,std::shared_ptr<Spectre::Engine::Shader>,std::less<unsigned char const *>,std::allocator<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>>,0>>::_Find_lower_bound<unsigned char const *>(
    a1,
    (__int64)v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
