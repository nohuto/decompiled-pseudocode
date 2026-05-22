/*
 * XREFs of ??0?$_Bt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800B7180
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     ?_Buy_nonzero@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180042BA8 (-_Buy_nonzero@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

_QWORD *__fastcall std::_Bt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Bt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  void **v2; // rsi
  unsigned __int64 v5; // rdx
  const void *v6; // rdx
  char *v7; // rdi
  signed __int64 v8; // rbx

  v2 = (void **)(a1 + 1);
  *a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = (__int64)(a2[2] - a2[1]) >> 2;
  if ( v5 )
  {
    std::vector<unsigned int>::_Buy_nonzero((__int64)(a1 + 1), v5);
    v6 = (const void *)a2[1];
    v7 = (char *)*v2;
    v8 = a2[2] - (_QWORD)v6;
    memmove_0(*v2, v6, v8);
    v2[1] = &v7[4 * (v8 >> 2)];
  }
  v2[3] = (void *)a2[4];
  return a1;
}
