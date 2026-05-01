/*
 * XREFs of ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180182830
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x180002ED0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801828B4 (--$_Uninitialized_copy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Buy_nonzero@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAX_K@Z @ 0x180182920 (-_Buy_nonzero@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=1
__int128 *__fastcall std::vector<std::wstring>::vector<std::wstring>(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = 0LL;
  qword_18098F028 = 0LL;
  v2 = a2[1];
  v3 = *a2;
  if ( (v2 - *a2) >> 5 )
  {
    std::vector<std::wstring>::_Buy_nonzero();
    *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = std::_Uninitialized_copy<std::wstring const *>(v3, v2, Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds, &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds);
  }
  return &Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds;
}
