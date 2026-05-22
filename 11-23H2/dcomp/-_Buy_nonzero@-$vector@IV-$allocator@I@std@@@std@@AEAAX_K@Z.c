/*
 * XREFs of ?_Buy_nonzero@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180042BA8
 * Callers:
 *     ??0?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180042A54 (--0-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 *     ??0?$_Bt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800B7180 (--0-$_Bt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@s.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004490C (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned int>::_Buy_nonzero(__int64 a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  size_of = std::_Get_size_of_n<4>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = v5 + 4 * a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
