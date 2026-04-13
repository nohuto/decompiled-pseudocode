/*
 * XREFs of ?do_get_date@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018920
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x180012308 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18004FEF0 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061A50 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180062340 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  void (__fastcall ***v13)(_QWORD, __int64); // r8
  __int64 v14; // r12
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  int v16; // ebx
  _DWORD *v17; // r14
  __int128 v18; // xmm0
  _DWORD *v19; // rbx
  char v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r15
  int v29; // ebx
  _DWORD *v30; // rbx
  char v31; // r15
  char v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  char v37; // r15
  char v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rax
  char v41; // r15
  __int64 v42; // r15
  _DWORD *v43; // rbx
  _OWORD *result; // rax
  __int128 v45; // [rsp+50h] [rbp-30h] BYREF
  __int128 v46; // [rsp+60h] [rbp-20h] BYREF
  __int128 v47; // [rsp+70h] [rbp-10h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+40h] BYREF
  _OWORD *v49; // [rsp+C8h] [rbp+48h]
  __int64 v50; // [rsp+D0h] [rbp+50h]

  v49 = a2;
  v10 = a5;
  v11 = **(_QWORD **)(a5 + 64);
  v48 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v14 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&v48);
  v50 = v14;
  if ( v11 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v13 = v15;
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)a1 + 24LL))(
          a1,
          v12,
          v13);
  if ( !v16 )
    v16 = 2;
  LODWORD(v48) = v16;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  v17 = a6;
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_24;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_24;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
         v14,
         4LL,
         *(unsigned __int16 *)(a3 + 10)) )
  {
    if ( v16 == 2 )
    {
      v19 = (_DWORD *)(a7 + 16);
      *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                a3,
                a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                v14);
      --*v19;
      goto LABEL_24;
    }
    if ( v16 == 1 )
    {
      *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                v14);
      goto LABEL_24;
    }
    v47 = *(_OWORD *)a4;
    v46 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
      a1,
      &v45,
      &v46,
      &v47,
      v10,
      v17,
      a7);
    v18 = v45;
  }
  else
  {
    v45 = *(_OWORD *)a4;
    v46 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      &v47,
      &v46,
      &v45,
      v10,
      v17,
      a7);
    v18 = v47;
    LODWORD(v48) = 2;
  }
  *(_OWORD *)a3 = v18;
  while ( 1 )
  {
LABEL_24:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v20 = *(_BYTE *)(a4 + 8);
    if ( !v20 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v20 = *(_BYTE *)(a4 + 8);
    }
    v21 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
      break;
    v22 = 0LL;
    if ( !*(_QWORD *)a4 )
      goto LABEL_30;
LABEL_39:
    if ( !*(_BYTE *)(a3 + 8) )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v21 = *(_QWORD *)a3;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
            v14,
            72LL,
            *(unsigned __int16 *)(a3 + 10)) )
      goto LABEL_31;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v22 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a4 )
    goto LABEL_39;
LABEL_30:
  v21 = v22;
LABEL_31:
  if ( !*(_BYTE *)(a3 + 8) )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v21 = *(_QWORD *)a3;
  }
  if ( !v20 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
    v20 = *(_BYTE *)(a4 + 8);
  }
  if ( v21 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_44;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_44:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 112LL))(
            v14,
            *(unsigned __int16 *)(a3 + 10),
            0LL);
    if ( (unsigned __int8)v23 <= 0x3Au )
    {
      v24 = 0x400900000000000LL;
      if ( _bittest64(&v24, v23) )
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  v25 = v20;
  while ( 2 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !v25 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v25 = *(_BYTE *)(a4 + 8);
      v20 = v25;
    }
    v26 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      v27 = 0LL;
      if ( !*(_QWORD *)a4 )
        break;
      goto LABEL_65;
    }
    v27 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a4 )
    {
LABEL_65:
      if ( !*(_BYTE *)(a3 + 8) )
      {
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v26 = *(_QWORD *)a3;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v50 + 32LL))(
              v50,
              72LL,
              *(unsigned __int16 *)(a3 + 10)) )
        goto LABEL_57;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      continue;
    }
    break;
  }
  v26 = v27;
LABEL_57:
  if ( !*(_BYTE *)(a3 + 8) )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v26 = *(_QWORD *)a3;
  }
  if ( !v20 )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( v26 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_70;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_70:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v28 = v50;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v50 + 32LL))(
           v50,
           4LL,
           *(unsigned __int16 *)(a3 + 10)) )
    {
      if ( (((_DWORD)v48 - 1) & 0xFFFFFFFD) != 0 )
      {
        *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  v28);
      }
      else
      {
        v30 = (_DWORD *)(a7 + 16);
        *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  12,
                  (_DWORD *)(a7 + 16),
                  v28);
        --*v30;
      }
    }
    else
    {
      v29 = v48;
      if ( (_DWORD)v48 == 2 )
      {
        *v17 |= 2u;
      }
      else
      {
        v47 = *(_OWORD *)a4;
        v46 = *(_OWORD *)a3;
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          &v45,
          &v46,
          &v47,
          a5,
          v17,
          a7);
        *(_OWORD *)a3 = v45;
        if ( v29 == 4 )
          LODWORD(v48) = 3;
      }
    }
  }
  v31 = *(_BYTE *)(a4 + 8);
  v32 = v31;
  while ( 2 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !v31 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v31 = *(_BYTE *)(a4 + 8);
      v32 = v31;
    }
    v33 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      v34 = 0LL;
      if ( !*(_QWORD *)a4 )
        break;
      goto LABEL_96;
    }
    v34 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a4 )
    {
LABEL_96:
      if ( !*(_BYTE *)(a3 + 8) )
      {
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v33 = *(_QWORD *)a3;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v50 + 32LL))(
              v50,
              72LL,
              *(unsigned __int16 *)(a3 + 10)) )
        goto LABEL_88;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      continue;
    }
    break;
  }
  v33 = v34;
LABEL_88:
  if ( !*(_BYTE *)(a3 + 8) )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v33 = *(_QWORD *)a3;
  }
  if ( !v32 )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( v33 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_101;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_101:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v50 + 112LL))(
            v50,
            *(unsigned __int16 *)(a3 + 10),
            0LL);
    if ( (unsigned __int8)v35 <= 0x3Au )
    {
      v36 = 0x400900000000000LL;
      if ( _bittest64(&v36, v35) )
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  v37 = *(_BYTE *)(a4 + 8);
  v38 = v37;
  while ( 2 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !v37 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
      v37 = *(_BYTE *)(a4 + 8);
      v38 = v37;
    }
    v39 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      v40 = 0LL;
      if ( !*(_QWORD *)a4 )
        break;
      goto LABEL_126;
    }
    v40 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a4 )
    {
LABEL_126:
      if ( !*(_BYTE *)(a3 + 8) )
      {
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v39 = *(_QWORD *)a3;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v50 + 32LL))(
              v50,
              72LL,
              *(unsigned __int16 *)(a3 + 10)) )
        goto LABEL_114;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      continue;
    }
    break;
  }
  v39 = v40;
LABEL_114:
  v41 = *(_BYTE *)(a3 + 8);
  if ( !v41 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v39 = *(_QWORD *)a3;
    v41 = *(_BYTE *)(a3 + 8);
  }
  if ( !v38 )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( v39 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_131;
LABEL_120:
    if ( !v41 )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v42 = v50;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v50 + 32LL))(
           v50,
           4LL,
           *(unsigned __int16 *)(a3 + 10)) )
    {
      if ( (_DWORD)v48 == 4 )
      {
        v43 = (_DWORD *)(a7 + 16);
        *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  12,
                  (_DWORD *)(a7 + 16),
                  v42);
        --*v43;
        goto LABEL_138;
      }
      if ( (_DWORD)v48 == 3 )
      {
        *v17 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  v42);
        goto LABEL_138;
      }
      v47 = *(_OWORD *)a4;
      v46 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        &v45,
        &v46,
        &v47,
        a5,
        v17,
        a7);
    }
    else
    {
      if ( (_DWORD)v48 != 4 )
        goto LABEL_131;
      v47 = *(_OWORD *)a4;
      v46 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        &v45,
        &v46,
        &v47,
        a5,
        v17,
        a7);
    }
    *(_OWORD *)a3 = v45;
  }
  else
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_120;
LABEL_131:
    *v17 |= 2u;
  }
LABEL_138:
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_146;
  }
  else
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_147;
LABEL_146:
    *v17 |= 1u;
  }
LABEL_147:
  result = v49;
  *v49 = *(_OWORD *)a3;
  return result;
}
