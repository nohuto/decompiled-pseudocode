/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kGlobal_EnvironmentMap_Color__ @ 0x1800F6E50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kGlobal_EnvironmentMap_Color__()
{
  std::string::_Tidy_deallocate((__int64)&Spectre::Engine::ShaderConstants::kGlobal_EnvironmentMap_Color);
  std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>::~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>();
}
