/*
 * XREFs of ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801BD2D4
 * Callers:
 *     ??0?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801BC9BC (--0-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA@AEBV01@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801BD31C (-_Clear_and_reserve_geometric@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0LA@@std@@YA_K_K@Z @ 0x180149438 (--$_Get_size_of_n@$0LA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<176>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[176 * a2];
  return result;
}
