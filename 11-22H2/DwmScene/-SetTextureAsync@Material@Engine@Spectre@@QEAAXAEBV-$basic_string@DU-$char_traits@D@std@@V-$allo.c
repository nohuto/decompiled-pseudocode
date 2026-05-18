/*
 * XREFs of ?SetTextureAsync@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KPEAVResourceManager@23@@Z @ 0x180044924
 * Callers:
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C58 (-FindProperty@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_string@.c)
 *     ?GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@XZ @ 0x1800850B0 (-GetLayout@ShaderPropertyBlock@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 */

__int64 __fastcall Spectre::Engine::Material::SetTextureAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *Layout; // rax
  __int64 v8; // r10
  unsigned __int16 Property; // bp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]

  Layout = (_QWORD *)Spectre::Engine::ShaderPropertyBlock::GetLayout(*(_QWORD *)(a1 + 120), &v11);
  Property = Spectre::Engine::ShaderPropertyLayout::FindProperty(*Layout, v8);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return Spectre::Engine::Material::SetTextureAsync(a1, Property, a3, a4);
}
