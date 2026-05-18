/*
 * XREFs of ?GetDefaultElevation@ViewerCamera@Engine@Spectre@@QEBAMXZ @ 0x180092CB0
 * Callers:
 *     ?UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x1800696D0 (-UpdateConfigurationFromCamera@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@.c)
 * Callees:
 *     <none>
 */

float __fastcall Spectre::Engine::ViewerCamera::GetDefaultElevation(Spectre::Engine::ViewerCamera *this)
{
  return *((float *)this + 460);
}
