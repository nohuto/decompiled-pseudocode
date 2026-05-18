/*
 * XREFs of ??$_Find@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043584
 * Callers:
 *     ?OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@_K@Z @ 0x180044474 (-OnTextureAsyncLoaded@Material@Engine@Spectre@@QEAAXV-$shared_ptr@VTexture@Engine@Spectre@@@std@.c)
 *     ?TextureExists@Material@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x180044AD8 (-TextureExists@Material@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@std@@@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043610 (--$_Find_lower_bound@W4ShaderProperty@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4ShaderProperty@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState,std::less<enum Spectre::Engine::ShaderProperty>,std::allocator<std::pair<enum Spectre::Engine::ShaderProperty const,enum Spectre::Engine::Material::ETextureState>>,0>>::_Find<enum Spectre::Engine::ShaderProperty>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  _WORD *v3; // r11
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState,std::less<enum Spectre::Engine::ShaderProperty>,std::allocator<std::pair<enum Spectre::Engine::ShaderProperty const,enum Spectre::Engine::Material::ETextureState>>,0>>::_Find_lower_bound<enum Spectre::Engine::ShaderProperty>(
    a1,
    v5,
    a2);
  result = v6;
  if ( *(_BYTE *)(v6 + 25) || *v3 < *(_WORD *)(v6 + 28) )
    return *(_QWORD *)v2;
  return result;
}
