/*
 * XREFs of ?_Buy_raw@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18007E584
 * Callers:
 *     ??$?0PEAUVector4@Math@Utils@Spectre@@$0A@@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@QEAA@PEAUVector4@Math@Utils@Spectre@@0AEBV?$allocator@UVector4@Math@Utils@Spectre@@@1@@Z @ 0x18007C6BC (--$-0PEAUVector4@Math@Utils@Spectre@@$0A@@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVe.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@std@@$0A@@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@std@@@std@@@1@0AEBV?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@1@@Z @ 0x180096FAC (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VResourceLoadedFnc@.c)
 *     ??$_Construct_n@$$V@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180097124 (--$_Construct_n@$$V@-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-$allocator.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@2@@std@@AEAAX_K@Z @ 0x180097810 (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@V-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180010B48 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<Spectre::Utils::Math::Vector4>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<16>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[16 * a2];
  return result;
}
