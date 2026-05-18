/*
 * XREFs of Spectre::Engine::SceneLayerStandardID::_dynamic_initializer_for__kLights__ @ 0x1800039A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Engine::SceneLayerStandardID::_dynamic_initializer_for__kLights__()
{
  std::wstring::wstring(&Spectre::Engine::SceneLayerStandardID::kLights, L"Lights");
  return atexit((void (__cdecl *)())Spectre::Engine::SceneLayerStandardID::_dynamic_atexit_destructor_for__kLights__);
}
