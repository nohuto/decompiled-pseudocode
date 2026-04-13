/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180006554
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18000A7F0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A7F0.c)
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001FC80 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020800 (-do_get_monthname@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020A40 (-do_get_weekday@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006E54 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008D70 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B704 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062B0C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<char>>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  char v6; // dl
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r15
  void **v14; // r14
  char v16; // al
  void **v17; // rax
  void **v18; // rax
  char v19; // al
  void **v20; // rdx
  char v21; // cl
  char v22; // [rsp+20h] [rbp-50h]
  unsigned int v23; // [rsp+24h] [rbp-4Ch]
  void *v26[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]

  if ( *a4 )
  {
    v6 = *a4;
    v7 = a4;
    do
    {
      v8 = a3 + 1;
      if ( v6 != *a4 )
        v8 = a3;
      a3 = v8;
      v6 = *++v7;
    }
    while ( *v7 );
  }
  v27 = 15LL;
  v26[2] = 0LL;
  LOBYTE(v26[0]) = 0;
  std::string::assign(v26, a3, 0LL);
  v9 = 0;
  v22 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v23 = -2;
  v12 = 1LL;
  v13 = v27;
  v14 = (void **)v26[0];
  if ( a3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = a4[v10];
        if ( !v16 || v16 == *a4 )
          break;
        ++v10;
      }
      v17 = v26;
      if ( v13 >= 0x10 )
        v17 = v14;
      if ( *((_BYTE *)v17 + v11) )
      {
        v18 = v26;
        if ( v13 >= 0x10 )
          v18 = v14;
        v10 += *((char *)v18 + v11);
      }
      else
      {
        v10 += v12;
        v19 = a4[v10];
        if ( v19 == *a4 || !v19 )
        {
          v23 = v11;
LABEL_25:
          v20 = v26;
          if ( v13 >= 0x10 )
            v20 = v14;
          v21 = 127;
          if ( v12 < 0x7F )
            v21 = v12;
          *((_BYTE *)v20 + v11) = v21;
          v9 = v22;
          v14 = (void **)v26[0];
          v13 = v27;
          goto LABEL_30;
        }
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2)
          || a4[v10] != *(_BYTE *)std::istreambuf_iterator<char>::operator*(a1) )
        {
          goto LABEL_25;
        }
        v9 = 1;
        v22 = 1;
      }
LABEL_30:
      if ( ++v11 >= a3 )
      {
        if ( !v9 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
          break;
        ++v12;
        std::istreambuf_iterator<char>::_Inc(a1);
        v23 = -1;
        v9 = 0;
        v22 = 0;
        v10 = 0LL;
        v11 = 0LL;
      }
    }
  }
  if ( v13 >= 0x10 )
    operator delete(v14);
  return v23;
}
