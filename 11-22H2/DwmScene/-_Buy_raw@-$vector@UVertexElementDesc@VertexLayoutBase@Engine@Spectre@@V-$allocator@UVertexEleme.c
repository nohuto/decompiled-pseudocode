/*
 * XREFs of ?_Buy_raw@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180087E14
 * Callers:
 *     ??0?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180086594 (--0-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$allocator@UVertexElementDesc@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008C420 (-_Clear_and_reserve_geometric@-$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V-$al.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Buy_raw(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<48>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[48 * a2];
  return result;
}
