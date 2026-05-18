/*
 * XREFs of Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kRenderer_DisplayPerformanceStats__ @ 0x180007420
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kRenderer_DisplayPerformanceStats__()
{
  std::wstring::wstring(
    &Spectre::Engine::ConfigurationProperties::kRenderer_DisplayPerformanceStats,
    L"/Internal/Renderer.DisplayPerformanceStats");
  return atexit((void (__cdecl *)())Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kRenderer_DisplayPerformanceStats__);
}
