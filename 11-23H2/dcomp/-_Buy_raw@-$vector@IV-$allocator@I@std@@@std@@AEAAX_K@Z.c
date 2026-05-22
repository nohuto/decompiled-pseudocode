/*
 * XREFs of ?_Buy_raw@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180040A5C
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180040B38 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004490C (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Buy_raw(__int64 *a1, __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rax
  __int64 result; // rax

  size_of = std::_Get_size_of_n<4>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 4 * a2;
  a1[2] = result;
  return result;
}
