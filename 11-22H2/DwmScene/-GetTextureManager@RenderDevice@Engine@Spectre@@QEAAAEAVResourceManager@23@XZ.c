/*
 * XREFs of ?GetTextureManager@RenderDevice@Engine@Spectre@@QEAAAEAVResourceManager@23@XZ @ 0x180026AAC
 * Callers:
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::ResourceManager *__fastcall Spectre::Engine::RenderDevice::GetTextureManager(
        Spectre::Engine::RenderDevice *this)
{
  return (Spectre::Engine::RenderDevice *)((char *)this + 832);
}
