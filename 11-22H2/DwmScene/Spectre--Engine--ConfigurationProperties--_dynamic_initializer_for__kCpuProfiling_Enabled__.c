/*
 * XREFs of Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kCpuProfiling_Enabled__ @ 0x180004E70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kCpuProfiling_Enabled__()
{
  std::wstring::wstring(
    &Spectre::Engine::ConfigurationProperties::kCpuProfiling_Enabled,
    L"/Internal/CpuProfiling.Enabled");
  return atexit((void (__cdecl *)())Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kCpuProfiling_Enabled__);
}
