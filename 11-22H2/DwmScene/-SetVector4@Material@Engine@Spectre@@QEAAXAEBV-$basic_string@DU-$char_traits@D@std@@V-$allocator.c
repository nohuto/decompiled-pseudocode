/*
 * XREFs of ?SetVector4@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x180044A9C
 * Callers:
 *     ?SetNormalScale@SpectreMaterial@@UEAAJM@Z @ 0x180013730 (-SetNormalScale@SpectreMaterial@@UEAAJM@Z.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetVector4(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetVector4(*(_QWORD *)(a1 + 120));
}
