/*
 * XREFs of ??4?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800813C8
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ?_Do_rep0@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180055A1C (-_Do_rep0@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std.c)
 *     ?_Do_rep@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x18008A92C (-_Do_rep@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@AEAAX_K@Z @ 0x180040AE4 (-_Clear_and_reserve_geometric@-$vector@U_Grp_t@-$_Tgt_state_t@V-$_String_const_iterator@V-$_Stri.c)
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180040B38 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

__int64 __fastcall std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  const void **v2; // r15
  char *v3; // rdi
  const void *v6; // rbp
  signed __int64 v7; // r12
  char *v8; // rbx
  const void **v9; // r14
  void **v10; // rdi
  const void *v11; // rbp
  signed __int64 v12; // r14
  char *v13; // rbx

  v2 = (const void **)(a2 + 1);
  v3 = (char *)(a1 + 8);
  *(_QWORD *)a1 = *a2;
  if ( (_QWORD *)(a1 + 8) != a2 + 1 )
  {
    v6 = *v2;
    v7 = a2[2] - a2[1];
    if ( v7 >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) >> 2) )
      std::vector<unsigned int>::_Clear_and_reserve_geometric(v3, v7 >> 2);
    v8 = *(char **)v3;
    memmove_0(*(void **)v3, v6, v7);
    *((_QWORD *)v3 + 1) = &v8[v7];
    *((_QWORD *)v3 + 3) = v2[3];
  }
  v9 = (const void **)(a2 + 5);
  v10 = (void **)(a1 + 40);
  if ( (const void **)(a1 + 40) != v9 )
  {
    v11 = *v9;
    v12 = (_BYTE *)v9[1] - (_BYTE *)*v9;
    if ( v12 >> 4 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) >> 4) )
      std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Clear_and_reserve_geometric(
        (char *)(a1 + 40),
        v12 >> 4);
    v13 = (char *)*v10;
    memmove_0(*v10, v11, v12);
    *(_QWORD *)(a1 + 48) = &v13[v12];
  }
  return a1;
}
