/*
 * XREFs of ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18005430C
 * Callers:
 *     ?do_get_monthname@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018AB0 (-do_get_monthname@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018D10 (-do_get_weekday@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18006AF60 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18006AF60.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800CD9A0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800CD9A0.c)
 *     ?do_get_monthname@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800EA140 (-do_get_monthname@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-.c)
 *     ?do_get_weekday@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800EA390 (-do_get_weekday@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180069D80 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        size_t a3,
        __int16 *a4)
{
  __int64 v8; // r10
  __int16 v9; // cx
  size_t v10; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  size_t v13; // r14
  __int16 v15; // ax
  void **v16; // rax
  void **v17; // rax
  __int16 v18; // ax
  char v19; // cl
  void **v20; // rax
  char v21; // cl
  char v22; // [rsp+20h] [rbp-30h]
  unsigned int v23; // [rsp+24h] [rbp-2Ch]
  void *v24[3]; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-10h]

  v8 = 0LL;
  if ( *a4 )
  {
    v9 = *a4;
    do
    {
      v10 = a3 + 1;
      if ( v9 != *a4 )
        v10 = a3;
      a3 = v10;
      v9 = a4[++v8];
    }
    while ( v9 );
  }
  v25 = 15LL;
  v24[2] = 0LL;
  LOBYTE(v24[0]) = 0;
  std::string::assign(v24, a3);
  v23 = -2;
  v11 = 1LL;
  while ( 2 )
  {
    v22 = 0;
    v12 = 0LL;
    v13 = 0LL;
    if ( !a3 )
      break;
    do
    {
      while ( 1 )
      {
        v15 = a4[v12];
        if ( !v15 || v15 == *a4 )
          break;
        ++v12;
      }
      v16 = v24;
      if ( v25 >= 0x10 )
        v16 = (void **)v24[0];
      if ( *((_BYTE *)v16 + v13) )
      {
        v17 = v24;
        if ( v25 >= 0x10 )
          v17 = (void **)v24[0];
        v12 += *((char *)v17 + v13);
        goto LABEL_44;
      }
      v12 += v11;
      v18 = a4[v12];
      if ( v18 == *a4 || !v18 )
      {
        v19 = 127;
        if ( v11 < 0x7F )
          v19 = v11;
        v20 = v24;
        if ( v25 >= 0x10 )
          v20 = (void **)v24[0];
        v23 = v13;
        goto LABEL_43;
      }
      if ( !*(_BYTE *)(a1 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a1);
      if ( !*(_BYTE *)(a2 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a2);
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_QWORD *)a2 )
        {
LABEL_34:
          if ( !*(_BYTE *)(a1 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a1);
          if ( a4[v12] == *(_WORD *)(a1 + 10) )
          {
            v21 = 1;
            v22 = 1;
            goto LABEL_45;
          }
        }
      }
      else if ( *(_QWORD *)a2 )
      {
        goto LABEL_34;
      }
      v19 = 127;
      if ( v11 < 0x7F )
        v19 = v11;
      v20 = v24;
      if ( v25 >= 0x10 )
        v20 = (void **)v24[0];
LABEL_43:
      *((_BYTE *)v20 + v13) = v19;
LABEL_44:
      v21 = v22;
LABEL_45:
      ++v13;
    }
    while ( v13 < a3 );
    if ( v21 )
    {
      if ( !*(_BYTE *)(a1 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a1);
      if ( !*(_BYTE *)(a2 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a2);
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_QWORD *)a2 )
          goto LABEL_55;
      }
      else if ( *(_QWORD *)a2 )
      {
LABEL_55:
        ++v11;
        std::istreambuf_iterator<unsigned short>::_Inc(a1);
        v23 = -1;
        continue;
      }
    }
    break;
  }
  if ( v25 >= 0x10 )
    operator delete(v24[0]);
  return v23;
}
