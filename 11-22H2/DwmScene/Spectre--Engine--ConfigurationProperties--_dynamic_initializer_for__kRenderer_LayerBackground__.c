/*
 * XREFs of Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kRenderer_LayerBackground__ @ 0x180007750
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kRenderer_LayerBackground__()
{
  std::wstring::wstring(
    &Spectre::Engine::ConfigurationProperties::kRenderer_LayerBackground,
    L"/Internal/Renderer.LayerBackground");
  return atexit((void (__cdecl *)())Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kRenderer_LayerBackground__);
}
