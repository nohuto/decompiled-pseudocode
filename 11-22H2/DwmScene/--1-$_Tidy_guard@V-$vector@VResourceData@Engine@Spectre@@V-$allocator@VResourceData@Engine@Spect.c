/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180070084
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18006FCFC (--$_Construct_n@$$V@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spe.c)
 *     _std::vector_Spectre::Engine::ResourceData_std::allocator_Spectre::Engine::ResourceData___::_Construct_n___::_1_::dtor$0 @ 0x1800E83E7 (_std--vector_Spectre--Engine--ResourceData_std--allocator_Spectre--Engine--ResourceData___--_Con.c)
 * Callees:
 *     ?_Tidy@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x1800705A0 (-_Tidy@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@std@@@.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<Spectre::Engine::ResourceData>>::~_Tidy_guard<std::vector<Spectre::Engine::ResourceData>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<Spectre::Engine::ResourceData>::_Tidy();
  return result;
}
