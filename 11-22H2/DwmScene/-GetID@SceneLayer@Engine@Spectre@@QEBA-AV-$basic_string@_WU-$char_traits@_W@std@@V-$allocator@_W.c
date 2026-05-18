/*
 * XREFs of ?GetID@SceneLayer@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18004101C
 * Callers:
 *     ?GetNodeLayerID@Scene@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800411F4 (-GetNodeLayerID@Scene@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::SceneLayer::GetID(__int64 a1, _QWORD *a2)
{
  std::wstring::wstring(a2, a1);
  return a2;
}
