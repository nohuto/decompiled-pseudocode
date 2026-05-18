/*
 * XREFs of ?GetRenderPriority@Camera@Engine@Spectre@@QEBAHXZ @ 0x18005BAA8
 * Callers:
 *     ?CameraRenderPrioritySortPredicate@Engine@Spectre@@YA_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@0@Z @ 0x1800657B0 (-CameraRenderPrioritySortPredicate@Engine@Spectre@@YA_NAEBV-$shared_ptr@VCamera@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Camera::GetRenderPriority(Spectre::Engine::Camera *this)
{
  return *((unsigned int *)this + 73);
}
