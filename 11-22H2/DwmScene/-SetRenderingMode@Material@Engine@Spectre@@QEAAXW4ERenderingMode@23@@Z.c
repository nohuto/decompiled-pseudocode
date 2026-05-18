/*
 * XREFs of ?SetRenderingMode@Material@Engine@Spectre@@QEAAXW4ERenderingMode@23@@Z @ 0x180044840
 * Callers:
 *     ?SetAlphaMode@SpectreMaterial@@UEAAJI@Z @ 0x1800135B0 (-SetAlphaMode@SpectreMaterial@@UEAAJI@Z.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Material::SetRenderingMode(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 188) = a2;
}
