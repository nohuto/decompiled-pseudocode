/*
 * XREFs of ?_Buy_nonzero@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAX_K@Z @ 0x18009D6BC
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18009D714 (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 */

void *__fastcall std::vector<std::wstring>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  void *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  size_of = std::_Get_size_of_n<32>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = result;
  qword_1807B4960 = (__int64)result + 32 * a2;
  *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = result;
  return result;
}
