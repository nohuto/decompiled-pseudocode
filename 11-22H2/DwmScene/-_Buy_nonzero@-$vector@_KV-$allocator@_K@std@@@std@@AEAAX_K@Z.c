/*
 * XREFs of ?_Buy_nonzero@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18007E4DC
 * Callers:
 *     ??$_Construct_n@PEB_KPEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z @ 0x18007C8CC (--$_Construct_n@PEB_KPEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K$$QEAPEB_K1@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017058 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<8>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[8 * a2];
  a1[2] = result;
  return result;
}
