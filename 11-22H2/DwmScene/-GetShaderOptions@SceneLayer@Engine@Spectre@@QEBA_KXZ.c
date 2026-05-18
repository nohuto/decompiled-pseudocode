/*
 * XREFs of ?GetShaderOptions@SceneLayer@Engine@Spectre@@QEBA_KXZ @ 0x1800413B4
 * Callers:
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Spectre::Engine::SceneLayer::GetShaderOptions(Spectre::Engine::SceneLayer *this)
{
  return *((_QWORD *)this + 12);
}
