/*
 * XREFs of ?_Buy_raw@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x18001B54C
 * Callers:
 *     ?_Buy_nonzero@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B514 (-_Buy_nonzero@-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre.c)
 *     ?_Clear_and_reserve_geometric@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B5F8 (-_Clear_and_reserve_geometric@-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderMode.c)
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x18001F628 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ?_Buy_nonzero@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180047158 (-_Buy_nonzero@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<float>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<4>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[4 * a2];
  a1[2] = result;
  return result;
}
