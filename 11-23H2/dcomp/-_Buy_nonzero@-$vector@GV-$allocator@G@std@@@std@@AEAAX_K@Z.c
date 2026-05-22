/*
 * XREFs of ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x180150460
 * Callers:
 *     ??$?0PEBG$0A@@?$vector@GV?$allocator@G@std@@@std@@QEAA@PEBG0AEBV?$allocator@G@1@@Z @ 0x18014DF48 (--$-0PEBG$0A@@-$vector@GV-$allocator@G@std@@@std@@QEAA@PEBG0AEBV-$allocator@G@1@@Z.c)
 *     ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x18014E410 (--$_Construct_n@PEAGPEAG@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180043FA0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned short>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  size_of = std::_Get_size_of_n<2>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = v5 + 2 * a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
