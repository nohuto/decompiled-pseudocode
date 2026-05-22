/*
 * XREFs of ??0?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180042A54
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ?_Do_rep0@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180055A1C (-_Do_rep0@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std.c)
 *     ?_Do_rep@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x18008A92C (-_Do_rep@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@.c)
 * Callees:
 *     ??0?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@QEAA@AEBV01@@Z @ 0x180042B04 (--0-$vector@U_Grp_t@-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@s.c)
 *     ?_Buy_nonzero@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180042BA8 (-_Buy_nonzero@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

_QWORD *__fastcall std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  void **v2; // r14
  const void *v5; // rdx
  char *v6; // rdi
  signed __int64 v7; // rbx

  v2 = (void **)(a1 + 1);
  *a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  if ( (__int64)(a2[2] - a2[1]) >> 2 )
  {
    std::vector<unsigned int>::_Buy_nonzero(a1 + 1);
    v5 = (const void *)a2[1];
    v6 = (char *)*v2;
    v7 = a2[2] - (_QWORD)v5;
    memmove_0(*v2, v5, v7);
    v2[1] = &v6[4 * (v7 >> 2)];
  }
  v2[3] = (void *)a2[4];
  std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>(
    a1 + 5,
    a2 + 5);
  return a1;
}
