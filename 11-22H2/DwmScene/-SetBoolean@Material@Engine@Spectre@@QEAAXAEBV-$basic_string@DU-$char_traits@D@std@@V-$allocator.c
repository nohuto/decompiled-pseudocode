/*
 * XREFs of ?SetBoolean@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x180044620
 * Callers:
 *     ?SetTexCoord@SpectreMaterial@@UEAAJII@Z @ 0x1800137B0 (-SetTexCoord@SpectreMaterial@@UEAAJII@Z.c)
 *     ?SetTexture@SpectreMaterial@@UEAAJV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUISpectreTexture@@PEAUISpectreSampler@@@Z @ 0x180013890 (-SetTexture@SpectreMaterial@@UEAAJV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Material::SetBoolean(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetBoolean(*(_QWORD *)(a1 + 120));
}
