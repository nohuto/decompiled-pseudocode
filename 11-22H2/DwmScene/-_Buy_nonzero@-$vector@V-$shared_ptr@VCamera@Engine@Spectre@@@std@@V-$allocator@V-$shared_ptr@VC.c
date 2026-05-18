/*
 * XREFs of ?_Buy_nonzero@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180058440
 * Callers:
 *     ??0?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180057058 (--0-$vector@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VCamera@Engin.c)
 *     ??$?0PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@std@@QEAA@PEBV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@1@0AEBV?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@1@@Z @ 0x18006164C (--$-0PEBV-$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@$0A@@-$vector@V-$shared_ptr@VCamera.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 */

char *__fastcall std::vector<std::shared_ptr<Spectre::Engine::Camera>>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  size_of = std::_Get_size_of_n<16>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[16 * a2];
  return result;
}
