/*
 * XREFs of ?_Buy_nonzero@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180056A68
 * Callers:
 *     ??$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUTextureImageDesc@Engine@Spectre@@1@Z @ 0x1800CC498 (--$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@-$vector@UTextureImageDesc@Engine@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001E974 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<Spectre::Engine::TextureImageDesc>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  size_of = std::_Get_size_of_n<32>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[32 * a2];
  return result;
}
