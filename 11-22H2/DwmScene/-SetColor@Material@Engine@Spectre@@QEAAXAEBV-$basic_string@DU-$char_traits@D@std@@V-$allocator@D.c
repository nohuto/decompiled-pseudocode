/*
 * XREFs of ?SetColor@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x180044630
 * Callers:
 *     ?SetBaseColorFactor@SpectreMaterial@@UEAAJAEBUD2D_VECTOR_4F@@@Z @ 0x180013600 (-SetBaseColorFactor@SpectreMaterial@@UEAAJAEBUD2D_VECTOR_4F@@@Z.c)
 *     ?SetEmissiveFactor@SpectreMaterial@@UEAAJAEBUD2D_VECTOR_3F@@@Z @ 0x180013640 (-SetEmissiveFactor@SpectreMaterial@@UEAAJAEBUD2D_VECTOR_3F@@@Z.c)
 *     ?SetMetallicRoughnessFactor@SpectreMaterial@@UEAAJMM@Z @ 0x1800136E0 (-SetMetallicRoughnessFactor@SpectreMaterial@@UEAAJMM@Z.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetColor(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetColor(*(_QWORD *)(a1 + 120));
}
