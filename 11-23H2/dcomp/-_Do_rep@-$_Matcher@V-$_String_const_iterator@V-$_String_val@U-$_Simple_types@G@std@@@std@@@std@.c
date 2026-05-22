/*
 * XREFs of ?_Do_rep@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x18008A92C
 * Callers:
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     ??0?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180042A54 (--0-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ?_Do_rep0@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180055A1C (-_Do_rep0@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     ??4?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800813C8 (--4-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 *     ?_Tidy@?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@AEAAXXZ @ 0x1800831F0 (-_Tidy@-$vector@U_Grp_t@-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types.c)
 */

char __fastcall std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Do_rep(
        __int64 *a1,
        __int64 a2,
        char a3,
        int a4)
{
  bool matched; // bp
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  _QWORD *v13; // r13
  bool v14; // r15
  __int64 v15; // rdx
  bool v16; // al
  int v17; // [rsp+20h] [rbp-78h]
  __int64 v18; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v21[24]; // [rsp+58h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a2 + 52) == 1 )
    return std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Do_rep0(
             (size_t)a1,
             a2,
             a3);
  matched = 0;
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
    &v19,
    a1);
  v10 = *a1;
  v11 = a1[16] + 16LL * *(unsigned int *)(a2 + 48);
  v12 = *(_DWORD *)v11;
  v13 = *(_QWORD **)(v11 + 8);
  v17 = *(_DWORD *)v11;
  v18 = *a1;
  v14 = !a4 || *v13 != v10;
  if ( *(int *)(a2 + 36) >= 0 && *(_DWORD *)(a2 + 36) <= a4 )
    goto LABEL_21;
  if ( a4 >= *(_DWORD *)(a2 + 32) )
  {
    if ( !a3 )
    {
      matched = std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
                  (size_t)a1,
                  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL));
      if ( matched )
        goto LABEL_24;
      if ( v14 )
      {
        std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
          (__int64)a1,
          &v19);
        goto LABEL_11;
      }
LABEL_23:
      std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
        (__int64)a1,
        &v19);
      goto LABEL_24;
    }
    if ( v14 )
    {
      *(_DWORD *)v11 = a4 + 1;
      *(_QWORD *)(v11 + 8) = &v18;
      v16 = std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
              (size_t)a1,
              *(_QWORD *)(a2 + 16));
      v12 = v17;
      matched = v16;
    }
    else if ( a4 > 1 )
    {
      goto LABEL_23;
    }
    if ( matched )
      goto LABEL_24;
    *(_DWORD *)v11 = v12;
    *(_QWORD *)(v11 + 8) = v13;
    std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
      (__int64)a1,
      &v19);
    goto LABEL_21;
  }
  if ( v14 )
  {
LABEL_11:
    *(_DWORD *)v11 = a4 + 1;
    *(_QWORD *)(v11 + 8) = &v18;
    v15 = *(_QWORD *)(a2 + 16);
    goto LABEL_22;
  }
LABEL_21:
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
LABEL_22:
  matched = std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
              (size_t)a1,
              v15);
  if ( !matched )
    goto LABEL_23;
LABEL_24:
  *(_DWORD *)v11 = v17;
  *(_QWORD *)(v11 + 8) = v13;
  std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Tidy((__int64)v21);
  std::vector<unsigned int>::_Tidy((__int64)v20);
  return matched;
}
