/*
 * XREFs of ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800B7222
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180040B38 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

char *__fastcall std::vector<bool>::operator=(char *a1, __int64 *a2)
{
  const void *v4; // rbp
  signed __int64 v5; // r14
  char *v6; // rbx

  if ( a1 != (char *)a2 )
  {
    v4 = (const void *)*a2;
    v5 = a2[1] - *a2;
    if ( v5 >> 2 > (unsigned __int64)((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 2) )
      std::vector<unsigned int>::_Clear_and_reserve_geometric(a1, v5 >> 2);
    v6 = *(char **)a1;
    memmove_0(*(void **)a1, v4, v5);
    *((_QWORD *)a1 + 1) = &v6[v5];
    *((_QWORD *)a1 + 3) = a2[3];
  }
  return a1;
}
