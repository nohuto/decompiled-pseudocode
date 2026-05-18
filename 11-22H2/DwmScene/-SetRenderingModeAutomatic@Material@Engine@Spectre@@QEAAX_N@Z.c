/*
 * XREFs of ?SetRenderingModeAutomatic@Material@Engine@Spectre@@QEAAX_N@Z @ 0x180044850
 * Callers:
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Material::SetRenderingModeAutomatic(Spectre::Engine::Material *this)
{
  *((_BYTE *)this + 184) = 1;
}
