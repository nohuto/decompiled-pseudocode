/*
 * XREFs of ?GetMaterialManager@RenderDevice@Engine@Spectre@@QEAAAEAVResourceManager@23@XZ @ 0x1800265E0
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::ResourceManager *__fastcall Spectre::Engine::RenderDevice::GetMaterialManager(
        Spectre::Engine::RenderDevice *this)
{
  return (Spectre::Engine::RenderDevice *)((char *)this + 1056);
}
