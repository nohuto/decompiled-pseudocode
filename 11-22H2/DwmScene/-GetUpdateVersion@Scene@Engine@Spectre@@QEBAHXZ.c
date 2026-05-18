/*
 * XREFs of ?GetUpdateVersion@Scene@Engine@Spectre@@QEBAHXZ @ 0x180057A5C
 * Callers:
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Scene::GetUpdateVersion(Spectre::Engine::Scene *this)
{
  return std::atomic<int>::operator int();
}
