/*
 * XREFs of ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200
 * Callers:
 *     ??$_Regex_search2@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@GV?$regex_traits@G@2@V12@@std@@YA_NV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@0PEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x1800420A0 (--$_Regex_search2@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V.c)
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 * Callees:
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ??$_Compare@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@PEBGV?$regex_traits@G@2@@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBG1AEBV?$regex_traits@G@0@W4syntax_option_type@regex_constants@0@@Z @ 0x18014E2A8 (--$_Compare@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@PEBGV-$.c)
 *     ??$_Lookup_coll@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@G@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBU?$_Sequence@G@0@@Z @ 0x18014E5E0 (--$_Lookup_coll@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G@s.c)
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x18014E678 (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ??$_Lookup_range@G@std@@YA_NIPEBU?$_Buf@G@0@@Z @ 0x18014E870 (--$_Lookup_range@G@std@@YA_NIPEBU-$_Buf@G@0@@Z.c)
 *     ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x180150CD0 (-isctype@-$_Regex_traits@G@std@@QEBA_NGF@Z.c)
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180150D2C (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

unsigned __int16 **__fastcall std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Skip(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int16 *v6; // rbx
  unsigned __int16 *v7; // rsi
  int v10; // eax
  unsigned __int16 **v11; // rax
  int v13; // r11d
  unsigned __int16 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r9
  char v17; // al
  unsigned __int16 **v18; // rax
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  _WORD *v21; // rcx
  _WORD *v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  char v25; // al

  v5 = a5;
  v6 = a4;
  v7 = a3;
  if ( !a5 )
    v5 = *(_QWORD *)(a1 + 176);
  if ( a3 == a4 )
  {
LABEL_19:
    *a2 = v7;
    return a2;
  }
  while ( 1 )
  {
LABEL_4:
    if ( !v5 )
      goto LABEL_19;
    v10 = *(_DWORD *)(v5 + 8);
    if ( v10 != 13 )
      break;
LABEL_10:
    v5 = *(_QWORD *)(v5 + 16);
  }
  if ( v10 != 16 )
  {
    switch ( v10 )
    {
      case 1:
      case 8:
      case 9:
      case 14:
      case 20:
        goto LABEL_10;
      case 2:
        if ( *(a3 - 1) != 10 )
        {
          do
          {
            if ( *v7 == 10 )
              break;
            ++v7;
          }
          while ( v7 != a4 );
          if ( v7 != a4 )
            ++v7;
        }
        goto LABEL_19;
      case 3:
        do
        {
          if ( *v7 == 10 )
            break;
          ++v7;
        }
        while ( v7 != a4 );
        goto LABEL_19;
      case 6:
        while ( v7 != v6
             && *(unsigned __int16 **)std::_Compare<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short const *,std::regex_traits<unsigned short>>(
                                        (unsigned int)&a5,
                                        (_DWORD)v7,
                                        (int)v7 + 2,
                                        *(_QWORD *)(v5 + 40),
                                        *(_QWORD *)(v5 + 40) + 2LL,
                                        *(_QWORD *)(a1 + 208),
                                        *(_DWORD *)(a1 + 184)) == v7 )
          ++v7;
        goto LABEL_19;
      case 7:
        v13 = 256;
        break;
      case 12:
      case 21:
        v5 = 0LL;
        goto LABEL_4;
      default:
        goto LABEL_19;
    }
    while ( 1 )
    {
      if ( v7 == v6 )
      {
LABEL_32:
        *a2 = v7;
        return a2;
      }
      v14 = *v7;
      if ( (v13 & *(_DWORD *)(a1 + 184)) != 0 )
      {
        v14 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 208) + 8LL), v14);
        v13 = 256;
      }
      if ( *(_QWORD *)(v5 + 32) )
      {
        v18 = (unsigned __int16 **)std::_Lookup_coll<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short>(
                                     &a5,
                                     v7,
                                     v7 + 1);
        v13 = 256;
        if ( *v18 != v7 )
        {
          v17 = 1;
          goto LABEL_30;
        }
      }
      v15 = *(_QWORD *)(v5 + 56);
      if ( v15 )
      {
        v19 = (*(_DWORD *)(a1 + 184) & 0x800) != 0
            ? std::_Regex_traits<unsigned short>::translate(*(_QWORD *)(a1 + 208), v14)
            : v14;
        if ( (unsigned __int8)std::_Lookup_range<unsigned short>(v19, v15) )
        {
          v17 = 1;
          goto LABEL_30;
        }
      }
      if ( v14 < (unsigned __int16)v13 )
      {
        v16 = *(_QWORD *)(v5 + 40);
        if ( v16 && ((unsigned __int8)(1 << (v14 & 7)) & *(_BYTE *)(((unsigned __int64)v14 >> 3) + v16)) != 0 )
        {
          v17 = 1;
          goto LABEL_30;
        }
LABEL_33:
        v17 = 0;
        goto LABEL_30;
      }
      v20 = *(_QWORD *)(v5 + 48);
      if ( !v20 || (v21 = *(_WORD **)(v20 + 8), v22 = &v21[*(unsigned int *)(v20 + 4)], v21 == v22) )
      {
LABEL_52:
        if ( *(_WORD *)(v5 + 64) )
        {
          v23 = std::_Regex_traits<unsigned short>::isctype(*(_QWORD *)(a1 + 208), v14);
          v13 = 256;
          if ( v23 )
          {
            v17 = 1;
            goto LABEL_30;
          }
        }
        v24 = *(_QWORD *)(v5 + 72);
        if ( !v24 )
          goto LABEL_33;
        v25 = std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(v14, v24, *(_QWORD *)(a1 + 208));
        v13 = 256;
        if ( !v25 )
          goto LABEL_33;
      }
      else
      {
        while ( *v21 != v14 )
        {
          if ( ++v21 == v22 )
            goto LABEL_52;
        }
      }
      v17 = 1;
LABEL_30:
      if ( v17 != ((*(_BYTE *)(v5 + 12) & 1) != 0) )
        goto LABEL_32;
      ++v7;
    }
  }
  while ( v7 != v6 && v5 )
  {
    v11 = (unsigned __int16 **)std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Skip(
                                 a1,
                                 (unsigned int)&a5,
                                 (_DWORD)v7,
                                 (_DWORD)v6,
                                 *(_QWORD *)(v5 + 16));
    v5 = *(_QWORD *)(v5 + 40);
    v6 = *v11;
  }
  *a2 = v6;
  return a2;
}
