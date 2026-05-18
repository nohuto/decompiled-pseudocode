/*
 * XREFs of Spectre::Engine::SceneLayerStandardID::_dynamic_initializer_for__kCameras__ @ 0x1800038E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Engine::SceneLayerStandardID::_dynamic_initializer_for__kCameras__()
{
  std::wstring::wstring(&Spectre::Engine::SceneLayerStandardID::kCameras, L"Cameras");
  return atexit((void (__cdecl *)())Spectre::Engine::SceneLayerStandardID::_dynamic_atexit_destructor_for__kCameras__);
}
