/*
 * XREFs of ?NotifyModified@SharedResource@Engine@Spectre@@MEAAXXZ @ 0x1800296B0
 * Callers:
 *     ?NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ @ 0x180088C00 (-NotifyModified@ArrayBuffer@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SharedResource::NotifyModified(Spectre::Engine::SharedResource *this)
{
  std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,bool,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,bool>>,0>>::clear((char *)this + 80);
}
