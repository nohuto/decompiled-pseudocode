/*
 * XREFs of Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kImageProcessing_BloomEnabled__ @ 0x180005170
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 */

int Spectre::Engine::ConfigurationProperties::_dynamic_initializer_for__kImageProcessing_BloomEnabled__()
{
  std::wstring::wstring(
    &Spectre::Engine::ConfigurationProperties::kImageProcessing_BloomEnabled,
    L"ImageProcessing.BloomEnabled");
  return atexit((void (__cdecl *)())Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kImageProcessing_BloomEnabled__);
}
