/*
 * XREFs of ?GetDistance@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CC0
 * Callers:
 *     ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0 (-UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 *     ?UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBVInput@23@@Z @ 0x18006AF64 (-UpdateKeyboardInput@ViewerEngine@Engine@Spectre@@AEAA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Engine::ViewerCamera::GetDistance(Spectre::Engine::ViewerCamera *this)
{
  return *((float *)this + 470);
}
