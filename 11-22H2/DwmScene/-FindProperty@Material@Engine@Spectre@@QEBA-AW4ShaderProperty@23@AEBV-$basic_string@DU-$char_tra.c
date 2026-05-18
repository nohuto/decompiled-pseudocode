/*
 * XREFs of ?FindProperty@Material@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800442D8
 * Callers:
 *     ?TextureExists@Material@Engine@Spectre@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180044AAC (-TextureExists@Material@Engine@Spectre@@QEBA_NAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetProperties@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180044344 (-GetProperties@Material@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyBlock@Engine@Spectre@.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 *     ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0 (-GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 */

__int64 __fastcall Spectre::Engine::Material::FindProperty(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *Properties; // rax
  _QWORD *Layout; // rax
  __int64 v5; // r9
  unsigned __int16 Property; // bx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-10h]

  Properties = (_QWORD *)Spectre::Engine::Material::GetProperties(a1, v10, a3, a2);
  Layout = (_QWORD *)Spectre::Engine::ShaderPropertyBlock::GetLayout(*Properties, v8);
  Property = Spectre::Engine::ShaderPropertyLayout::FindProperty(*Layout, v5);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return Property;
}
