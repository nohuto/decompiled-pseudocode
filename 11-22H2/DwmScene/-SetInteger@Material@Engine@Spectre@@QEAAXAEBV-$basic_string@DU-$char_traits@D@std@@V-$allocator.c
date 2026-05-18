/*
 * XREFs of ?SetInteger@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z @ 0x180044640
 * Callers:
 *     ?RuntimeClassInitialize@SpectreMaterial@@QEAAJAEBV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180013510 (-RuntimeClassInitialize@SpectreMaterial@@QEAAJAEBV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetInteger(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetInteger(
           *(_QWORD *)(a1 + 120),
           &Spectre::Engine::ShaderConstants::kMaterial_GLTFMaterialType);
}
