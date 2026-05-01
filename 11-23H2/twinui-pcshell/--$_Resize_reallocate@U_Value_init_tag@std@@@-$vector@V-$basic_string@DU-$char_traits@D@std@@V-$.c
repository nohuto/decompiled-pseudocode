/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804146DC
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1801B21BC (--$load@VJSONInputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1804148F0 (--$_Uninitialized_move@PEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$alloc.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEAV10@_KAEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1804149A8 (--$_Uninitialized_value_construct_n@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 */

__int64 __fastcall std::vector<std::string>::_Resize_reallocate<std::_Value_init_tag>(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t size_of; // rax
  char *v9; // r14
  unsigned __int64 v10; // r8
  __int64 v12; // [rsp+68h] [rbp+10h]

  v4 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (__int64)(a1[1] - *a1) >> 5;
  v6 = (__int64)(a1[2] - *a1) >> 5;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v4);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    v12 = std::_Uninitialized_value_construct_n<std::allocator<std::string>>(&v9[32 * v5], a2 - v5);
    std::_Uninitialized_move<std::string *>(*a1, a1[1], v9);
    v10 = a2;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::string>>((__int64)&v9[32 * v5], v12, v10);
    std::_Deallocate<16,0>(v9, 32 * v4);
    throw;
  }
  return std::vector<std::string>::_Change_array();
}
