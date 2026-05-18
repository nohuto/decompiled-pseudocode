/*
 * XREFs of ?_Buy_raw@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E540
 * Callers:
 *     ??$?0PEAUMatrix@Math@Utils@Spectre@@$0A@@?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUMatrix@Math@Utils@Spectre@@0AEBV?$allocator@UMatrix@Math@Utils@Spectre@@@1@@Z @ 0x18007C62C (--$-0PEAUMatrix@Math@Utils@Spectre@@$0A@@-$vector@UMatrix@Math@Utils@Spectre@@V-$allocator@UMatr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180024DE0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<Spectre::Utils::Math::Matrix>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<64>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[64 * a2];
  return result;
}
