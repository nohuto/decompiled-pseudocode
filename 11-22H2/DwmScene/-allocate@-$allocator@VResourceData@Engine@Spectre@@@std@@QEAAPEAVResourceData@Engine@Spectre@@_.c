/*
 * XREFs of ?allocate@?$allocator@VResourceData@Engine@Spectre@@@std@@QEAAPEAVResourceData@Engine@Spectre@@_K@Z @ 0x1800705E8
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18006FCFC (--$_Construct_n@$$V@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spe.c)
 *     ??$_Emplace_reallocate@VResourceData@Engine@Spectre@@@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAPEAVResourceData@Engine@Spectre@@QEAV234@$$QEAV234@@Z @ 0x18006FDCC (--$_Emplace_reallocate@VResourceData@Engine@Spectre@@@-$vector@VResourceData@Engine@Spectre@@V-$.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180011AC4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

void *__fastcall std::allocator<Spectre::Engine::ResourceData>::allocate(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(a2 << 7);
}
