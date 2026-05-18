/*
 * XREFs of ?SetScalar@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180044878
 * Callers:
 *     ?SetAlphaCutoff@SpectreMaterial@@UEAAJM@Z @ 0x180013580 (-SetAlphaCutoff@SpectreMaterial@@UEAAJM@Z.c)
 *     ?SetOcclusionStrength@SpectreMaterial@@UEAAJM@Z @ 0x180013780 (-SetOcclusionStrength@SpectreMaterial@@UEAAJM@Z.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetScalar(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetScalar(*(_QWORD *)(a1 + 120));
}
