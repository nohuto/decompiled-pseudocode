/*
 * XREFs of ?SetTextureSampler@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x180044A68
 * Callers:
 *     ?SetTexture@SpectreMaterial@@UEAAJV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUISpectreTexture@@PEAUISpectreSampler@@@Z @ 0x180013890 (-SetTexture@SpectreMaterial@@UEAAJV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VSampler@Engine@Spectre@@@5@@Z @ 0x1800857F0 (-SetTextureSampler@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 */

__int64 __fastcall Spectre::Engine::Material::SetTextureSampler(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v7, a3);
  return Spectre::Engine::ShaderPropertyBlock::SetTextureSampler(v4, v5, v3);
}
