/*
 * XREFs of ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x180096548
 * Callers:
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@V?$initializer_list@H@1@AEBV?$allocator@H@1@@Z @ 0x180096D90 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@V-$initializer_list@H@1@AEBV-$allocator@H@1@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801AD008 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180093BA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<int>::_Buy_raw(__int64 *a1, unsigned __int64 a2)
{
  __int64 size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  size_of = std::_Get_size_of_n<4>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * a2;
  a1[2] = result;
  return result;
}
