/*
 * XREFs of ?IsVisible@SceneLayer@Engine@Spectre@@QEBA_NXZ @ 0x180041810
 * Callers:
 *     ?Render@Scene@Engine@Spectre@@QEBAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@AEBV?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@5@_K@Z @ 0x180041CD0 (-Render@Scene@Engine@Spectre@@QEBAXV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::SceneLayer::IsVisible(Spectre::Engine::SceneLayer *this)
{
  return *((_BYTE *)this + 80);
}
