/*
 * XREFs of ??$_Try_emplace@AEBQEBE$$V@?$map@PEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@U?$less@PEBE@2@V?$allocator@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBQEBE@Z @ 0x18004DAB4
 * Callers:
 *     ?GetShader@ShaderManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18004FE4C (-GetShader@ShaderManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@V-$ba.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180027FB4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ??$_Find_lower_bound@PEBE@?$_Tree@V?$_Tmap_traits@PEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@U?$less@PEBE@2@V?$allocator@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEBQEBE@Z @ 0x18004DA0C (--$_Find_lower_bound@PEBE@-$_Tree@V-$_Tmap_traits@PEBEV-$shared_ptr@VShader@Engine@Spectre@@@std.c)
 */

__int64 __fastcall std::map<unsigned char const *,std::shared_ptr<Spectre::Engine::Shader>>::_Try_emplace<unsigned char const * const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned char const *,std::shared_ptr<Spectre::Engine::Shader>,std::less<unsigned char const *>,std::allocator<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>>,0>>::_Find_lower_bound<unsigned char const *>(
    a1,
    (__int64)&v10,
    a3);
  if ( *(_BYTE *)(v11 + 25) || *a3 < *(_QWORD *)(v11 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    v9 = (unsigned __int64)a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v7[4] = *a3;
    v7[6] = 0LL;
    v7[5] = 0LL;
    v7[6] = 0LL;
    *v7 = v6;
    v7[1] = v6;
    v7[2] = v6;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)&v9 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>((__int64)&v9);
    v9 = v10;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v9,
                      (__int64)v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
