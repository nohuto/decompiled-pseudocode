/*
 * XREFs of Spectre::Engine::Lineage::_dynamic_atexit_destructor_for__kLineageKey_Asset__ @ 0x1800F96D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void Spectre::Engine::Lineage::_dynamic_atexit_destructor_for__kLineageKey_Asset__()
{
  std::string::_Tidy_deallocate((__int64)&Spectre::Engine::Lineage::kLineageKey_Asset);
  std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>::~_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>>,1>();
}
