/*
 * XREFs of ?CameraRenderPrioritySortPredicate@Engine@Spectre@@YA_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@0@Z @ 0x1800657B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderPriority@Camera@Engine@Spectre@@QEBAHXZ @ 0x18005BAA8 (-GetRenderPriority@Camera@Engine@Spectre@@QEBAHXZ.c)
 */

bool __fastcall Spectre::Engine::CameraRenderPrioritySortPredicate(Spectre::Engine::Camera **a1)
{
  Spectre::Engine::Camera **v1; // rdx
  int RenderPriority; // eax
  int v3; // r8d

  Spectre::Engine::Camera::GetRenderPriority(*a1);
  RenderPriority = Spectre::Engine::Camera::GetRenderPriority(*v1);
  return v3 > RenderPriority;
}
