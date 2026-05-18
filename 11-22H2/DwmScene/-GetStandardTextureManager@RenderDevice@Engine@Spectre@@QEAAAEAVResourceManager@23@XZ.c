/*
 * XREFs of ?GetStandardTextureManager@RenderDevice@Engine@Spectre@@QEAAAEAVResourceManager@23@XZ @ 0x18002685C
 * Callers:
 *     ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8 (-CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::ResourceManager *__fastcall Spectre::Engine::RenderDevice::GetStandardTextureManager(
        Spectre::Engine::RenderDevice *this)
{
  return (Spectre::Engine::RenderDevice *)((char *)this + 608);
}
