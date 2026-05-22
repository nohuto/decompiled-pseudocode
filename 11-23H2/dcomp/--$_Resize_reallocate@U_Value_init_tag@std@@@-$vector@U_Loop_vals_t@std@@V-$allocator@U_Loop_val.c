/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180042824
 * Callers:
 *     ??0?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@61@@Z @ 0x18004241C (--0-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@GV-$r.c)
 * Callees:
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x1800427E4 (--$_Uninitialized_value_construct_n@V-$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

void *__fastcall std::vector<std::_Loop_vals_t>::_Resize_reallocate<std::_Value_init_tag>(
        char *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // r14
  void *result; // rax

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v5 = *((_QWORD *)a1 + 1) - *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(&v10[16 * v7], a2 - v7);
  result = memmove_0(v10, *(const void **)a1, *((_QWORD *)a1 + 1) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    result = (void *)std::_Deallocate<16,0>(
                       *(_QWORD *)a1,
                       (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)a1 = v10;
  *((_QWORD *)a1 + 1) = &v10[16 * a2];
  *((_QWORD *)a1 + 2) = &v10[16 * v2];
  return result;
}
