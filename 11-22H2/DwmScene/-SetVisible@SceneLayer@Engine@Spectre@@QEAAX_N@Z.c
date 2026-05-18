/*
 * XREFs of ?SetVisible@SceneLayer@Engine@Spectre@@QEAAX_N@Z @ 0x1800420A4
 * Callers:
 *     ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614 (-UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SceneLayer::SetVisible(Spectre::Engine::SceneLayer *this, char a2)
{
  *((_BYTE *)this + 80) = a2;
}
