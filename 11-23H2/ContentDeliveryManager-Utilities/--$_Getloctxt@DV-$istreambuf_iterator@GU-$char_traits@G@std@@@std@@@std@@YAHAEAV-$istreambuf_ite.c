/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x18000E53C
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x180018390 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061A50 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180062340 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062ABC (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  char v6; // dl
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rax
  char v9; // r8
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r13
  void **v14; // r12
  char v16; // al
  void **v17; // rax
  void **v18; // rax
  char v19; // al
  _QWORD *v20; // rax
  void **v21; // rdx
  char v22; // cl
  _BYTE *v23; // rcx
  _QWORD *v24; // rax
  char v25; // [rsp+20h] [rbp-50h]
  unsigned int v26; // [rsp+24h] [rbp-4Ch]
  void *v29[3]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]

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
  v30 = 15LL;
  v29[2] = 0LL;
  LOBYTE(v29[0]) = 0;
  std::string::assign(v29, a3, 0LL);
  v9 = 0;
  v25 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v26 = -2;
  v12 = 1LL;
  v13 = v30;
  v14 = (void **)v29[0];
  if ( !a3 )
    goto LABEL_7;
  while ( 2 )
  {
    v23 = a4;
    do
    {
      while ( 1 )
      {
        v16 = v23[v10];
        if ( !v16 || v16 == *v23 )
          break;
        ++v10;
      }
      v17 = v29;
      if ( v13 >= 0x10 )
        v17 = v14;
      if ( !*((_BYTE *)v17 + v11) )
      {
        v10 += v12;
        v19 = v23[v10];
        if ( v19 == *v23 || !v19 )
        {
          v26 = v11;
          goto LABEL_34;
        }
        if ( !*(_BYTE *)(a1 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a1);
        v20 = (_QWORD *)a2;
        if ( !*(_BYTE *)(a2 + 8) )
        {
          std::istreambuf_iterator<wchar_t>::_Peek(a2);
          v20 = (_QWORD *)a2;
        }
        if ( *(_QWORD *)a1 )
        {
          if ( !*v20 )
          {
LABEL_27:
            if ( !*(_BYTE *)(a1 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a1);
            if ( (char)a4[v10] == *(unsigned __int16 *)(a1 + 10) )
            {
              v9 = 1;
              v25 = 1;
LABEL_39:
              v23 = a4;
              goto LABEL_40;
            }
          }
        }
        else if ( *v20 )
        {
          goto LABEL_27;
        }
        v9 = v25;
LABEL_34:
        v21 = v29;
        if ( v13 >= 0x10 )
          v21 = v14;
        v22 = 127;
        if ( v12 < 0x7F )
          v22 = v12;
        *((_BYTE *)v21 + v11) = v22;
        v14 = (void **)v29[0];
        v13 = v30;
        goto LABEL_39;
      }
      v18 = v29;
      if ( v13 >= 0x10 )
        v18 = v14;
      v10 += *((char *)v18 + v11);
LABEL_40:
      ++v11;
    }
    while ( v11 < a3 );
    if ( v9 )
    {
      if ( !*(_BYTE *)(a1 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a1);
      v24 = (_QWORD *)a2;
      if ( !*(_BYTE *)(a2 + 8) )
      {
        std::istreambuf_iterator<wchar_t>::_Peek(a2);
        v24 = (_QWORD *)a2;
      }
      if ( *(_QWORD *)a1 )
      {
        if ( !*v24 )
          goto LABEL_50;
      }
      else if ( *v24 )
      {
LABEL_50:
        ++v12;
        std::istreambuf_iterator<unsigned short>::_Inc(a1);
        v26 = -1;
        v9 = 0;
        v25 = 0;
        v10 = 0LL;
        v11 = 0LL;
        continue;
      }
    }
    break;
  }
LABEL_7:
  if ( v13 >= 0x10 )
    operator delete(v14);
  return v26;
}
