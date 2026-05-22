/*
 * XREFs of ??0?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@QEAA@AEBV01@@Z @ 0x180042B04
 * Callers:
 *     ??0?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180042A54 (--0-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  SIZE_T size_of; // rax
  _OWORD *v6; // rax
  _OWORD *v7; // rdx
  _OWORD *i; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = (__int64)(a2[1] - *a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error((const char *)a1);
    size_of = std::_Get_size_of_n<16>((__int64)(a2[1] - *a2) >> 4);
    v6 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = &v6[v4];
    v7 = (_OWORD *)a2[1];
    for ( i = (_OWORD *)*a2; i != v7; ++i )
      *v6++ = *i;
    *(_QWORD *)(a1 + 8) = v6;
  }
  return a1;
}
