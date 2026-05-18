/*
 * XREFs of ?TextureExists@Material@Engine@Spectre@@QEBA_NW4ShaderProperty@23@@Z @ 0x180044AD8
 * Callers:
 *     ?TextureExists@Material@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180044AAC (-TextureExists@Material@Engine@Spectre@@QEBA_NAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$_Find@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043584 (--$_Find@W4ShaderProperty@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4ShaderProperty@Engine@Spect.c)
 *     ?GetTexture@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x180044400 (-GetTexture@Material@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Shader.c)
 */

bool __fastcall Spectre::Engine::Material::TextureExists(__int64 a1, __int16 a2)
{
  _QWORD *Texture; // rax
  bool v4; // di
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  __int16 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  Texture = (_QWORD *)Spectre::Engine::Material::GetTexture(a1, (__int64)v7);
  v4 = std::operator!=<Spectre::Engine::Scene>(Texture);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( v4 )
    return 1;
  v6 = std::_Tree<std::_Tmap_traits<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState,std::less<enum Spectre::Engine::ShaderProperty>,std::allocator<std::pair<enum Spectre::Engine::ShaderProperty const,enum Spectre::Engine::Material::ETextureState>>,0>>::_Find<enum Spectre::Engine::ShaderProperty>(
         a1 + 200,
         (__int64)&v9);
  return v6 != *(_QWORD *)(a1 + 200) && (unsigned int)(*(_DWORD *)(v6 + 32) - 1) <= 1;
}
