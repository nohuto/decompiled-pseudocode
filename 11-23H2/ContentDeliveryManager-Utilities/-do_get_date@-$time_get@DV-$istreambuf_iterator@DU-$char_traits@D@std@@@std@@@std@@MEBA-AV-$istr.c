/*
 * XREFs of ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800201F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006E54 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008D70 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B704 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D8DC (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  struct std::_Facet_base *v13; // r12
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v15; // r13d
  char v16; // al
  _DWORD *v17; // rsi
  __int64 v18; // rbx
  _DWORD *v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  _DWORD *v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rbx
  _OWORD *result; // rax
  __int64 v30; // [rsp+30h] [rbp-50h]
  __int128 v31; // [rsp+50h] [rbp-30h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int128 v33; // [rsp+70h] [rbp-10h] BYREF
  __int64 v34; // [rsp+C0h] [rbp+40h] BYREF
  _OWORD *v35; // [rsp+C8h] [rbp+48h]

  v35 = a2;
  v10 = **(_QWORD **)(a5 + 64);
  v34 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v13 = std::use_facet<std::ctype<char>>(&v34);
  if ( v10 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = v14;
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)a1 + 24LL))(
          a1,
          v11,
          v12);
  if ( !v15 )
    v15 = 2;
  v16 = std::istreambuf_iterator<char>::equal(a3, a4);
  v17 = a6;
  if ( v16 )
    goto LABEL_11;
  if ( (*(_WORD *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 4) == 0 )
  {
    v31 = *(_OWORD *)a4;
    v32 = *(_OWORD *)a3;
    v18 = a7;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      &v33,
      &v32,
      &v31,
      a5,
      v17,
      a7);
    *(_OWORD *)a3 = v33;
    v15 = 2;
    goto LABEL_17;
  }
  if ( v15 == 2 )
  {
    v19 = (_DWORD *)(a7 + 16);
    *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
              a1,
              a3,
              a4,
              1,
              12,
              (_DWORD *)(a7 + 16),
              (__int64)v13);
    --*v19;
LABEL_11:
    v18 = a7;
    goto LABEL_17;
  }
  if ( v15 == 1 )
  {
    v18 = a7;
    *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
              a1,
              a3,
              a4,
              1,
              31,
              (_DWORD *)(a7 + 12),
              (__int64)v13);
  }
  else
  {
    v33 = *(_OWORD *)a4;
    v32 = *(_OWORD *)a3;
    v18 = a7;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
      a1,
      &v31,
      &v32,
      &v33,
      a5,
      v17,
      a7);
    *(_OWORD *)a3 = v31;
  }
LABEL_17:
  while ( !std::istreambuf_iterator<char>::equal(a3, a4)
       && (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 0x48) != 0 )
    std::istreambuf_iterator<char>::_Inc(a3);
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    goto LABEL_24;
  LOBYTE(v20) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
  v21 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v20, 0LL);
  if ( (unsigned __int8)v21 > 0x3Au )
    goto LABEL_24;
  v22 = 0x400900000000000LL;
  if ( !_bittest64(&v22, v21) )
    goto LABEL_24;
  do
  {
    std::istreambuf_iterator<char>::_Inc(a3);
LABEL_24:
    ;
  }
  while ( !std::istreambuf_iterator<char>::equal(a3, a4)
       && (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 0x48) != 0 );
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    goto LABEL_34;
  if ( (*(_WORD *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 4) != 0 )
  {
    if ( ((v15 - 1) & 0xFFFFFFFD) != 0 )
    {
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(v18 + 12),
                (__int64)v13);
    }
    else
    {
      v24 = (_DWORD *)(v18 + 16);
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 1, 12, v24, (__int64)v13);
      --*v24;
    }
    goto LABEL_34;
  }
  if ( v15 == 2 )
  {
    *v17 |= 2u;
LABEL_34:
    v23 = a5;
    goto LABEL_37;
  }
  v33 = *(_OWORD *)a4;
  v32 = *(_OWORD *)a3;
  v30 = v18;
  v23 = a5;
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
    a1,
    &v31,
    &v32,
    &v33,
    a5,
    v17,
    v30);
  *(_OWORD *)a3 = v31;
  if ( v15 == 4 )
    v15 = 3;
LABEL_37:
  while ( !std::istreambuf_iterator<char>::equal(a3, a4)
       && (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 0x48) != 0 )
    std::istreambuf_iterator<char>::_Inc(a3);
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    goto LABEL_44;
  LOBYTE(v25) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
  v26 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v25, 0LL);
  if ( (unsigned __int8)v26 > 0x3Au )
    goto LABEL_44;
  v27 = 0x400900000000000LL;
  if ( !_bittest64(&v27, v26) )
    goto LABEL_44;
  do
  {
    std::istreambuf_iterator<char>::_Inc(a3);
LABEL_44:
    ;
  }
  while ( !std::istreambuf_iterator<char>::equal(a3, a4)
       && (*(_BYTE *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 0x48) != 0 );
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    goto LABEL_46;
  if ( (*(_WORD *)(*((_QWORD *)v13 + 3) + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 4) != 0 )
  {
    if ( v15 == 4 )
    {
      v28 = (_DWORD *)(a7 + 16);
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                (__int64)v13);
      --*v28;
      goto LABEL_56;
    }
    if ( v15 == 3 )
    {
      *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                (__int64)v13);
      goto LABEL_56;
    }
    v33 = *(_OWORD *)a4;
    v32 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
      a1,
      &v31,
      &v32,
      &v33,
      v23,
      v17,
      a7);
  }
  else
  {
    if ( v15 != 4 )
    {
LABEL_46:
      *v17 |= 2u;
      goto LABEL_56;
    }
    v33 = *(_OWORD *)a4;
    v32 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      &v31,
      &v32,
      &v33,
      v23,
      v17,
      a7);
  }
  *(_OWORD *)a3 = v31;
LABEL_56:
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    *v17 |= 1u;
  result = v35;
  *v35 = *(_OWORD *)a3;
  return result;
}
