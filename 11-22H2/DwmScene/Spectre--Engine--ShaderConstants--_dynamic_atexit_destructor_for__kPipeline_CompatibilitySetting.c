/*
 * XREFs of Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kPipeline_CompatibilitySettings__ @ 0x1800F7C30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void Spectre::Engine::ShaderConstants::_dynamic_atexit_destructor_for__kPipeline_CompatibilitySettings__()
{
  std::string::_Tidy_deallocate((__int64)&Spectre::Engine::ShaderConstants::kPipeline_CompatibilitySettings);
  std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>::~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>();
}
