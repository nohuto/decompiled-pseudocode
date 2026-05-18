/*
 * XREFs of ?GetEngine@SceneNode@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18003BFC0
 * Callers:
 *     ?RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001278C (-RuntimeClassInitialize@SpectreLightNode@@QEAAJW4Dwm3DLightType@@AEBV-$shared_ptr@VSceneNode@Eng.c)
 *     ?AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003B744 (-AddComponentInternal@SceneNode@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VComponent@Engine@Spectre.c)
 *     ?GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18008139C (-GetEngine@Component@Engine@Spectre@@QEBAPEAV223@XZ.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::Engine *__fastcall Spectre::Engine::SceneNode::GetEngine(Spectre::Engine::SceneNode *this)
{
  return (struct Spectre::Engine::Engine *)*((_QWORD *)this + 3);
}
