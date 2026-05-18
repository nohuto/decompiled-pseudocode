/*
 * XREFs of ?GetZoomShouldStopIdleAnimations@ViewerCamera@Engine@Spectre@@QEBA_NXZ @ 0x180092DA0
 * Callers:
 *     ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0 (-UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::ViewerCamera::GetZoomShouldStopIdleAnimations(Spectre::Engine::ViewerCamera *this)
{
  return *((_BYTE *)this + 1864);
}
