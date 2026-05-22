/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180040B38
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ?_Do_rep0@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180055A1C (-_Do_rep0@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std.c)
 *     ??4?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800813C8 (--4-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 *     ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B7222 (--4-$vector@_NV-$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x18004497C (-_Calculate_growth@-$vector@IV-$allocator@I@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Clear_and_reserve_geometric(char *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v3 = std::vector<unsigned int>::_Calculate_growth();
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(*(_QWORD *)a1, (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
    *((_QWORD *)a1 + 2) = 0LL;
  }
  return std::vector<unsigned int>::_Buy_raw((__int64 *)a1, v3);
}
