/*
 * XREFs of ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x180150CD0
 * Callers:
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x180150120 (-_Add_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEAV-$_Node_class@GV-$regex_traits@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Regex_traits<unsigned short>::isctype(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  char v4; // al
  char v5; // cl

  if ( a3 != 0xFFFF )
    return std::ctype<unsigned short>::is(*(_QWORD *)(a1 + 8), a3, a2);
  if ( a2 == 95 )
    return 1;
  v4 = std::ctype<unsigned short>::is(*(_QWORD *)(a1 + 8), 263LL, a2);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
