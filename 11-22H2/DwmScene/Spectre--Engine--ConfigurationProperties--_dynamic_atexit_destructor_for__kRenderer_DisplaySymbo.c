/*
 * XREFs of Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kRenderer_DisplaySymbols__ @ 0x1800F6220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 */

void Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kRenderer_DisplaySymbols__()
{
  std::wstring::_Tidy_deallocate((__int64)&Spectre::Engine::ConfigurationProperties::kRenderer_DisplaySymbols);
  std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>::~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>();
}
