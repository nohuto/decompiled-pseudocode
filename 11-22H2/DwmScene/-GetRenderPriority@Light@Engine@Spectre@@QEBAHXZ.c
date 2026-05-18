/*
 * XREFs of ?GetRenderPriority@Light@Engine@Spectre@@QEBAHXZ @ 0x18004327C
 * Callers:
 *     ?CompareLightsPriority@LightGatherer@Engine@Spectre@@CA_NAEBV?$shared_ptr@VLight@Engine@Spectre@@@std@@0@Z @ 0x1800A4510 (-CompareLightsPriority@LightGatherer@Engine@Spectre@@CA_NAEBV-$shared_ptr@VLight@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Light::GetRenderPriority(Spectre::Engine::Light *this)
{
  return *((unsigned int *)this + 32);
}
