/*
 * XREFs of ?_Buy_nonzero@?$vector@U_PROCESSOR_POWER_INFORMATION@@V?$allocator@U_PROCESSOR_POWER_INFORMATION@@@std@@@std@@AEAAX_K@Z @ 0x18022BCDA
 * Callers:
 *     ?GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z @ 0x18032F34C (-GetCpuSpeed@GamingOverlayExperienceManager@@AEAAJPEAN@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<_PROCESSOR_POWER_INFORMATION>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<24>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[24 * a2];
  a1[2] = result;
  return result;
}
