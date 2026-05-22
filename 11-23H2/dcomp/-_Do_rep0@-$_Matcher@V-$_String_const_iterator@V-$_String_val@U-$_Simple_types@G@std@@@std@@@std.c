/*
 * XREFs of ?_Do_rep0@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180055A1C
 * Callers:
 *     ?_Do_rep@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x18008A92C (-_Do_rep@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@AEAAX_K@Z @ 0x180040AE4 (-_Clear_and_reserve_geometric@-$vector@U_Grp_t@-$_Tgt_state_t@V-$_String_const_iterator@V-$_Stri.c)
 *     ?_Clear_and_reserve_geometric@?$vector@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x180040B38 (-_Clear_and_reserve_geometric@-$vector@IV-$allocator@I@std@@@std@@AEAAX_K@Z.c)
 *     ??0?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180042A54 (--0-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x180080744 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     ??4?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800813C8 (--4-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 *     ?_Tidy@?$vector@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@3@@std@@AEAAXXZ @ 0x1800831F0 (-_Tidy@-$vector@U_Grp_t@-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ??1?$_Tgt_state_t@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@QEAA@XZ @ 0x18014EE20 (--1-$_Tgt_state_t@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@.c)
 */

char __fastcall std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Do_rep0(
        size_t a1,
        __int64 a2,
        char a3)
{
  char v5; // r14
  char v6; // bl
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  void **v12; // r12
  unsigned __int64 v13; // rdx
  char *v14; // rbx
  __int64 v15; // rbx
  void *v16; // rcx
  const void **v17; // rax
  const void *v18; // rcx
  signed __int64 v19; // r12
  __int64 *v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+20h] [rbp-59h] BYREF
  void *v26[4]; // [rsp+28h] [rbp-51h] BYREF
  void *v27[3]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h] BYREF
  void *Src; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+70h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp+7h]
  _BYTE v32[72]; // [rsp+88h] [rbp+Fh] BYREF
  char v33; // [rsp+E0h] [rbp+67h]
  __int64 v34; // [rsp+E0h] [rbp+67h]
  size_t v35; // [rsp+E0h] [rbp+67h]
  size_t Size; // [rsp+E8h] [rbp+6Fh]
  void *Sizea; // [rsp+E8h] [rbp+6Fh]

  v5 = 0;
  v6 = a3;
  v7 = 0;
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
    &v28,
    (_QWORD *)a1);
  if ( *(int *)(a2 + 32) > 0 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)a1;
      if ( !std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
              a1,
              *(_QWORD *)(a2 + 16)) )
        break;
      if ( v8 == *(_QWORD *)a1 )
        v7 = *(_DWORD *)(a2 + 32) - 1;
      if ( ++v7 >= *(_DWORD *)(a2 + 32) )
      {
        v6 = a3;
        goto LABEL_7;
      }
    }
    std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
      a1,
      &v28);
    goto LABEL_36;
  }
LABEL_7:
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
    &v25,
    (_QWORD *)a1);
  v9 = *(_QWORD *)a1;
  v33 = 0;
  if ( !std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
          a1,
          *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL)) )
    goto LABEL_10;
  if ( !v6 )
  {
LABEL_35:
    std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
      &v25,
      v10,
      v11);
    v5 = 1;
LABEL_36:
    std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
      &v28,
      v22,
      v23);
    return v5;
  }
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
    &v25,
    a1);
  v33 = 1;
LABEL_10:
  while ( 1 )
  {
    if ( *(_DWORD *)(a2 + 36) != -1 )
    {
      v24 = v7++;
      if ( v24 >= *(_DWORD *)(a2 + 36) )
        break;
    }
    v12 = (void **)(a1 + 8);
    *(_QWORD *)a1 = v9;
    if ( (void **)(a1 + 8) != &Src )
    {
      Size = v30 - (_QWORD)Src;
      v13 = (v30 - (__int64)Src) >> 2;
      if ( v13 > (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 8)) >> 2 )
        std::vector<unsigned int>::_Clear_and_reserve_geometric((char *)(a1 + 8), v13);
      v14 = (char *)*v12;
      memmove_0(*v12, Src, Size);
      *(_QWORD *)(a1 + 16) = &v14[Size];
      *(_QWORD *)(a1 + 32) = v31;
    }
    if ( !std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
            a1,
            *(_QWORD *)(a2 + 16)) )
      break;
    v15 = *(_QWORD *)a1;
    if ( std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match_pat(
           a1,
           *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL)) )
    {
      if ( !a3 )
        goto LABEL_35;
      v25 = *(_QWORD *)a1;
      if ( v26 != v12 )
      {
        v16 = *v12;
        Sizea = *v12;
        v34 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
        if ( v34 >> 2 > (unsigned __int64)(((char *)v26[2] - (char *)v26[0]) >> 2) )
        {
          std::vector<unsigned int>::_Clear_and_reserve_geometric((char *)v26, v34 >> 2);
          v16 = Sizea;
        }
        memmove_0(v26[0], v16, v34);
        v26[1] = (char *)v26[0] + v34;
        v26[3] = *(void **)(a1 + 32);
      }
      v17 = (const void **)(a1 + 40);
      if ( v27 != (void **)(a1 + 40) )
      {
        v18 = *v17;
        v19 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 40);
        v35 = (size_t)*v17;
        if ( v19 >> 4 > (unsigned __int64)(((char *)v27[2] - (char *)v27[0]) >> 4) )
        {
          std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Clear_and_reserve_geometric(
            (char *)v27,
            v19 >> 4);
          v18 = (const void *)v35;
        }
        memmove_0(v27[0], v18, v19);
        v27[1] = (char *)v27[0] + v19;
      }
      v33 = 1;
    }
    if ( v9 == v15 )
      break;
    v9 = v15;
  }
  v20 = &v28;
  if ( v33 )
    v20 = &v25;
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::operator=(
    a1,
    v20);
  std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Tidy(v27);
  std::vector<unsigned int>::_Tidy(v26);
  std::vector<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t,std::allocator<std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Grp_t>>::_Tidy(v32);
  std::vector<unsigned int>::_Tidy(&Src);
  return v33;
}
