/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004290C
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@std@@@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA_NPEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@1@_N@Z @ 0x180042594 (--$_Match@V-$allocator@V-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@AEBA_K_K@Z @ 0x1800429EC (-_Calculate_growth@-$vector@U_Grp_t@-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int128 *__fastcall std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  SIZE_T size_of; // rax
  __int64 v7; // r14
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  __int128 *v10; // rdx
  _OWORD *v11; // rcx
  __int128 *result; // rax
  __int128 v13; // xmm0

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v4 = (a1[1] - *a1) >> 4;
  v5 = std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Calculate_growth();
  size_of = std::_Get_size_of_n<16>(v5);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v8 = (_QWORD *)(v7 + 16 * v4);
  v9 = a2 - v4;
  if ( a2 != v4 )
  {
    do
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      v8 += 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = (__int128 *)a1[1];
  v11 = (_OWORD *)v7;
  for ( result = (__int128 *)*a1; result != v10; ++result )
  {
    v13 = *result;
    *v11++ = v13;
  }
  if ( *a1 )
    result = (__int128 *)std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  *a1 = v7;
  a1[1] = v7 + 16 * a2;
  a1[2] = v7 + 16 * v5;
  return result;
}
