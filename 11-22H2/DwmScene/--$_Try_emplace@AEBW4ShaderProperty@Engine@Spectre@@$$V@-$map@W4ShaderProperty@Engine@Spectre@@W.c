/*
 * XREFs of ??$_Try_emplace@AEBW4ShaderProperty@Engine@Spectre@@$$V@?$map@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@std@@_N@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043664
 * Callers:
 *     ?SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z @ 0x18004499C (-SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180029284 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@E_ea_180029284.c)
 *     ??$_Find_lower_bound@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@std@@@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043610 (--$_Find_lower_bound@W4ShaderProperty@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4ShaderProperty@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState>::_Try_emplace<enum Spectre::Engine::ShaderProperty const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v6; // rdi
  unsigned __int64 size_of; // rax
  _WORD *v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState,std::less<enum Spectre::Engine::ShaderProperty>,std::allocator<std::pair<enum Spectre::Engine::ShaderProperty const,enum Spectre::Engine::Material::ETextureState>>,0>>::_Find_lower_bound<enum Spectre::Engine::ShaderProperty>(
    a1,
    (__int64)&v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *a3 < *(_WORD *)(v12 + 28) )
  {
    if ( a1[1] == 0x666666666666666LL )
      std::_Throw_tree_length_error();
    v6 = *a1;
    v10 = (unsigned __int64)a1;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v8[14] = *a3;
    *((_DWORD *)v8 + 8) = 0;
    *(_QWORD *)v8 = v6;
    *((_QWORD *)v8 + 1) = v6;
    *((_QWORD *)v8 + 2) = v6;
    v8[12] = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>,void *>>>((__int64)&v10);
    v10 = v11;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v10,
                      (__int64)v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
