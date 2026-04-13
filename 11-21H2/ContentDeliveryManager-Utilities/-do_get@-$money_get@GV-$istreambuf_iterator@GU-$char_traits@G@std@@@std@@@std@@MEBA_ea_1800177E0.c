/*
 * XREFs of ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800177E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x180011DB8 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180069CAC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  void **v14; // rax
  _WORD *v15; // rcx
  void **v16; // rax
  __int16 v17; // cx
  _QWORD *v18; // rax
  _WORD v20[8]; // [rsp+10h] [rbp-81h]
  __int64 v21; // [rsp+48h] [rbp-49h]
  void *v22[3]; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-29h]
  __int16 v24[12]; // [rsp+70h] [rbp-21h] BYREF

  v21 = -2LL;
  std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(a1, v22, a3, a4, a5, a6, v24);
  v11 = (char *)v22[2];
  v12 = 0LL;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( !*(_QWORD *)a4 )
LABEL_9:
    *a7 |= 1u;
LABEL_10:
  if ( v11 )
  {
    if ( (unsigned __int64)v11 > a8[2] )
    {
      std::wstring::append(a8, &v11[-a8[2]], 0LL);
    }
    else
    {
      if ( a8[3] < 8uLL )
        v13 = a8;
      else
        v13 = (_QWORD *)*a8;
      a8[2] = v11;
      *((_WORD *)v13 + (_QWORD)v11) = 0;
    }
    v14 = v22;
    if ( v23 >= 0x10 )
      v14 = (void **)v22[0];
    if ( *(_BYTE *)v14 == 45 )
    {
      if ( a8[3] < 8uLL )
        v15 = a8;
      else
        v15 = (_WORD *)*a8;
      *v15 = v24[10];
      v12 = 1LL;
    }
    while ( v12 < (unsigned __int64)v11 )
    {
      v16 = v22;
      if ( v23 >= 0x10 )
        v16 = (void **)v22[0];
      v17 = v20[*((char *)v16 + v12)];
      if ( a8[3] < 8uLL )
        v18 = a8;
      else
        v18 = (_QWORD *)*a8;
      *((_WORD *)v18 + v12++) = v17;
    }
  }
  else
  {
    *a7 |= 2u;
  }
  *a2 = *(_OWORD *)a3;
  if ( v23 >= 0x10 )
    operator delete(v22[0]);
  return a2;
}
