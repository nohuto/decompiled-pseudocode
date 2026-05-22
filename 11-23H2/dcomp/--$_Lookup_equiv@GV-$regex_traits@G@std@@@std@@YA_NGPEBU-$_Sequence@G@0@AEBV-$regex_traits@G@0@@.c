/*
 * XREFs of ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x18014E678
 * Callers:
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18001E6F8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x18014EC74 (--$transform_primary@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@-$_.c)
 */

char __fastcall std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(
        unsigned __int16 a1,
        unsigned int *a2,
        __int64 a3)
{
  char v5; // si
  __int64 v6; // rdi
  unsigned int i; // r14d
  __int128 *v8; // rcx
  __int128 *v9; // r8
  __int64 v10; // rdi
  char *v11; // rax
  __int64 v12; // rdx
  char *v13; // rcx
  unsigned __int16 v14; // r8
  signed __int64 v15; // rcx
  bool v16; // cc
  unsigned __int16 v17; // r8
  __int128 v19; // [rsp+20h] [rbp-49h] BYREF
  __int128 v20; // [rsp+30h] [rbp-39h]
  __int128 v21; // [rsp+40h] [rbp-29h] BYREF
  __int128 v22; // [rsp+50h] [rbp-19h]
  _BYTE v23[32]; // [rsp+60h] [rbp-9h] BYREF

  *(_QWORD *)&v21 = a1;
  *(_QWORD *)&v19 = 0LL;
  *(_QWORD *)&v20 = 0LL;
  v5 = 1;
  *((_QWORD *)&v20 + 1) = 7LL;
  *((_QWORD *)&v22 + 1) = 7LL;
  *(_QWORD *)&v22 = 1LL;
  v6 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
         a3,
         v23,
         &v21,
         (char *)&v21 + 2);
  if ( &v21 != (__int128 *)v6 )
  {
    std::wstring::_Tidy_deallocate((__int64)&v21);
    v21 = *(_OWORD *)v6;
    v22 = *(_OWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 7LL;
    *(_WORD *)v6 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v23);
  while ( a2 )
  {
    for ( i = 0; i < a2[3]; i += *a2 )
    {
      std::wstring::assign((char *)&v19, (const void *)(*((_QWORD *)a2 + 2) + 2LL * i), *a2);
      v8 = &v19;
      v9 = &v19;
      if ( *((_QWORD *)&v20 + 1) >= 8uLL )
      {
        v8 = (__int128 *)v19;
        v9 = (__int128 *)v19;
      }
      v10 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
              a3,
              v23,
              v9,
              (char *)v8 + 2 * v20);
      if ( &v19 != (__int128 *)v10 )
      {
        std::wstring::_Tidy_deallocate((__int64)&v19);
        v19 = *(_OWORD *)v10;
        v20 = *(_OWORD *)(v10 + 16);
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = 7LL;
        *(_WORD *)v10 = 0;
      }
      std::wstring::_Tidy_deallocate((__int64)v23);
      v11 = (char *)&v21;
      v12 = v20;
      v13 = (char *)&v19;
      if ( *((_QWORD *)&v22 + 1) >= 8uLL )
        v11 = (char *)v21;
      if ( *((_QWORD *)&v20 + 1) >= 8uLL )
        v13 = (char *)v19;
      if ( (_QWORD)v20 == (_QWORD)v22 )
      {
        if ( !(_QWORD)v20 )
          goto LABEL_24;
        v14 = *(_WORD *)v13;
        if ( *(_WORD *)v13 >= *(_WORD *)v11 )
        {
          v15 = v13 - v11;
          v16 = v14 <= *(_WORD *)v11;
          do
          {
            if ( !v16 )
              break;
            if ( v12 == 1 )
              goto LABEL_24;
            v11 += 2;
            --v12;
            v17 = *(_WORD *)&v11[v15];
            v16 = v17 <= *(_WORD *)v11;
          }
          while ( v17 >= *(_WORD *)v11 );
        }
      }
    }
    a2 = (unsigned int *)*((_QWORD *)a2 + 3);
  }
  v5 = 0;
LABEL_24:
  std::wstring::_Tidy_deallocate((__int64)&v21);
  std::wstring::_Tidy_deallocate((__int64)&v19);
  return v5;
}
