/*
 * XREFs of ?_Buy_nonzero@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18009B6A0
 * Callers:
 *     ??$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@?$vector@UShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUShaderPropertyDefinition@Engine@Spectre@@1@Z @ 0x180098368 (--$_Construct_n@PEBUShaderPropertyDefinition@Engine@Spectre@@PEBU123@@-$vector@UShaderPropertyDe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180024DE0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<Spectre::Engine::ShaderPropertyDefinition>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<64>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[64 * a2];
  return result;
}
