/*
 * XREFs of ?SetName@SceneNode@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18003D43C
 * Callers:
 *     ?CreateLayer@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x1800408BC (-CreateLayer@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneLayer@Engine@Spectre@@@std@@V-$basi.c)
 *     ?FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800666A0 (-FillBackground@ViewerEngine@Engine@Spectre@@MEAAXAEAVShaderManager@23@AEBV-$shared_ptr@VScene@E.c)
 * Callees:
 *     <none>
 */

void **__fastcall Spectre::Engine::SceneNode::SetName(__int64 a1, void **a2)
{
  return std::string::operator=((void **)(a1 + 400), a2);
}
