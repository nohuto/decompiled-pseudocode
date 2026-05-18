/*
 * XREFs of ?GetShaderOptions@Camera@Engine@Spectre@@QEBA_KXZ @ 0x18005BB24
 * Callers:
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::Camera::GetShaderOptions(Spectre::Engine::Camera *this)
{
  return *((_QWORD *)this + 67);
}
