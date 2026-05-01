/*
 * XREFs of ?_Buy_nonzero@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAX_K@Z @ 0x180182920
 * Callers:
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180182830 (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

void *__fastcall std::vector<std::wstring>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  void *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  size_of = std::_Get_size_of_n<32>(a2);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds = result;
  qword_18098F028 = (__int64)result + 32 * a2;
  *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1) = result;
  return result;
}
