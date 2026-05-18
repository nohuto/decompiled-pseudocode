/*
 * XREFs of ?GetPropertyName@Material@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180044368
 * Callers:
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetProperties@Material@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180044344 (-GetProperties@Material@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyBlock@Engine@Spectre@.c)
 *     ?GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderProperty@23@@Z @ 0x180082F9C (-GetPropertyName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@s.c)
 *     ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0 (-GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::Material::GetPropertyName(__int64 a1)
{
  _QWORD *Properties; // rax
  _QWORD *Layout; // rax
  unsigned __int16 v3; // r9
  __int64 PropertyName; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-10h]

  Properties = (_QWORD *)Spectre::Engine::Material::GetProperties(a1, &v8);
  Layout = (_QWORD *)Spectre::Engine::ShaderPropertyBlock::GetLayout(*Properties, v6);
  PropertyName = Spectre::Engine::ShaderPropertyLayout::GetPropertyName(*Layout, v3);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return PropertyName;
}
