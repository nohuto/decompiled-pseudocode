/*
 * XREFs of ?CompareLightsPriority@LightGatherer@Engine@Spectre@@CA_NAEBV?$shared_ptr@VLight@Engine@Spectre@@@std@@0@Z @ 0x1800A4510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderPriority@Light@Engine@Spectre@@QEBAHXZ @ 0x18004327C (-GetRenderPriority@Light@Engine@Spectre@@QEBAHXZ.c)
 */

char __fastcall Spectre::Engine::LightGatherer::CompareLightsPriority(__int64 a1, Spectre::Engine::Light **a2)
{
  char result; // al
  Spectre::Engine::Light *v3; // r8
  int RenderPriority; // eax
  int v5; // edx

  result = *(_BYTE *)(*(_QWORD *)a1 + 124LL);
  if ( result == *((_BYTE *)*a2 + 124) )
  {
    Spectre::Engine::Light::GetRenderPriority(*a2);
    RenderPriority = Spectre::Engine::Light::GetRenderPriority(v3);
    return RenderPriority > v5;
  }
  return result;
}
