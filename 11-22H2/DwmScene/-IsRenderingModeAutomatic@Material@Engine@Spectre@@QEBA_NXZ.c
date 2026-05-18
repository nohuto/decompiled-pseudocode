/*
 * XREFs of ?IsRenderingModeAutomatic@Material@Engine@Spectre@@QEBA_NXZ @ 0x180044464
 * Callers:
 *     ?OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4ShaderProperty@23@@Z @ 0x18009AB60 (-OnLoadTextureComplete@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@AEBV-$shared_ptr.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Material::IsRenderingModeAutomatic(Spectre::Engine::Material *this)
{
  return *((_BYTE *)this + 184);
}
