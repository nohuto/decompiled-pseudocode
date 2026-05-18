/*
 * XREFs of Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kColorGrading_Saturation_Global__ @ 0x1800F3AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 */

void Spectre::Engine::ConfigurationProperties::_dynamic_atexit_destructor_for__kColorGrading_Saturation_Global__()
{
  std::wstring::_Tidy_deallocate((__int64)&Spectre::Engine::ConfigurationProperties::kColorGrading_Saturation_Global);
  std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>::~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>();
}
