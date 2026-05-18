/*
 * XREFs of Spectre::Engine::_dynamic_initializer_for__kSceneLayerDefaultID__ @ 0x1800039D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Construct_lv_contents@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXAEBV12@@Z @ 0x1800130E8 (-_Construct_lv_contents@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXAEB.c)
 */

int Spectre::Engine::_dynamic_initializer_for__kSceneLayerDefaultID__()
{
  std::wstring::_Construct_lv_contents(
    &Spectre::Engine::kSceneLayerDefaultID,
    &Spectre::Engine::SceneLayerStandardID::kForeground);
  return atexit((void (__cdecl *)())Spectre::Engine::_dynamic_atexit_destructor_for__kSceneLayerDefaultID__);
}
