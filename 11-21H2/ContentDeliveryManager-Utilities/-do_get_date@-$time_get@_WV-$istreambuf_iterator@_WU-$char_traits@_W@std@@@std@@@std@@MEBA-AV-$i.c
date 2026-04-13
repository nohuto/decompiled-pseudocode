/*
 * XREFs of ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800E9860
 * Callers:
 *     <none>
 * Callees:
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800A8A14 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800E8F80 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v15; // r12d
  char v16; // bl
  _DWORD *v17; // r14
  __int128 v18; // xmm0
  _DWORD *v19; // rbx
  char v20; // r15
  char v21; // r12
  char v22; // bl
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  char v25; // r15
  char v26; // r12
  char v27; // bl
  __int64 v28; // r15
  int v29; // ebx
  _DWORD *v30; // rbx
  char v31; // r15
  char v32; // r12
  char v33; // bl
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  char v36; // r15
  char v37; // r12
  char v38; // bl
  __int64 v39; // r15
  _DWORD *v40; // rbx
  _OWORD *result; // rax
  __int128 v42; // [rsp+40h] [rbp-30h] BYREF
  __int128 v43; // [rsp+50h] [rbp-20h] BYREF
  __int128 v44; // [rsp+60h] [rbp-10h] BYREF
  __int64 v45; // [rsp+B0h] [rbp+40h] BYREF
  _OWORD *v46; // [rsp+B8h] [rbp+48h]
  struct std::_Facet_base *v47; // [rsp+C0h] [rbp+50h]

  v46 = a2;
  v10 = **(_QWORD **)(a5 + 64);
  v45 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v13 = std::use_facet<std::ctype<wchar_t>>(&v45);
  v47 = v13;
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
  LODWORD(v45) = v15;
  v16 = *(_BYTE *)(a3 + 8);
  if ( !v16 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v16 = *(_BYTE *)(a3 + 8);
  }
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
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
  if ( !v16 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
          v13,
          4LL,
          *(unsigned __int16 *)(a3 + 10)) )
  {
    v42 = *(_OWORD *)a4;
    v43 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
      a1,
      &v44,
      &v43,
      &v42,
      a5,
      v17,
      a7);
    v18 = v44;
    LODWORD(v45) = 2;
LABEL_23:
    *(_OWORD *)a3 = v18;
    goto LABEL_24;
  }
  if ( v15 == 2 )
  {
    v19 = (_DWORD *)(a7 + 16);
    *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              a3,
              a4,
              1,
              12,
              (_DWORD *)(a7 + 16),
              (__int64)v13);
    --*v19;
  }
  else
  {
    if ( v15 != 1 )
    {
      v44 = *(_OWORD *)a4;
      v43 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        &v42,
        &v43,
        &v44,
        a5,
        v17,
        a7);
      v18 = v42;
      goto LABEL_23;
    }
    *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              a3,
              a4,
              1,
              31,
              (_DWORD *)(a7 + 12),
              (__int64)v13);
  }
LABEL_24:
  v20 = *(_BYTE *)(a4 + 8);
  v21 = v20;
  while ( 1 )
  {
    v22 = *(_BYTE *)(a3 + 8);
    if ( !v22 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v22 = *(_BYTE *)(a3 + 8);
    }
    if ( !v20 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      v20 = *(_BYTE *)(a4 + 8);
      v21 = v20;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !v22 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v22 = *(_BYTE *)(a3 + 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
            v47,
            72LL,
            *(unsigned __int16 *)(a3 + 10)) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( !v22 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v22 = *(_BYTE *)(a3 + 8);
  }
  if ( !v21 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  v23 = 0x400900000000000LL;
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
    {
LABEL_44:
      if ( !v22 )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v24 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v47 + 112LL))(
              v47,
              *(unsigned __int16 *)(a3 + 10),
              0LL);
      if ( (unsigned __int8)v24 <= 0x3Au && _bittest64(&v23, v24) )
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
    }
  }
  else if ( *(_QWORD *)a4 )
  {
    goto LABEL_44;
  }
  v25 = *(_BYTE *)(a4 + 8);
  v26 = v25;
  while ( 1 )
  {
    v27 = *(_BYTE *)(a3 + 8);
    if ( !v27 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v27 = *(_BYTE *)(a3 + 8);
    }
    if ( !v25 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      v25 = *(_BYTE *)(a4 + 8);
      v26 = v25;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !v27 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v27 = *(_BYTE *)(a3 + 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
            v47,
            72LL,
            *(unsigned __int16 *)(a3 + 10)) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( !v27 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v27 = *(_BYTE *)(a3 + 8);
  }
  if ( !v26 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
    {
LABEL_69:
      if ( !v27 )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v28 = (__int64)v47;
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
             v47,
             4LL,
             *(unsigned __int16 *)(a3 + 10)) )
      {
        if ( (((_DWORD)v45 - 1) & 0xFFFFFFFD) != 0 )
        {
          *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
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
          *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
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
        v29 = v45;
        if ( (_DWORD)v45 == 2 )
        {
          *v17 |= 2u;
        }
        else
        {
          v44 = *(_OWORD *)a4;
          v43 = *(_OWORD *)a3;
          (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            &v42,
            &v43,
            &v44,
            a5,
            v17,
            a7);
          *(_OWORD *)a3 = v42;
          if ( v29 == 4 )
            LODWORD(v45) = 3;
        }
      }
    }
  }
  else if ( *(_QWORD *)a4 )
  {
    goto LABEL_69;
  }
  v31 = *(_BYTE *)(a4 + 8);
  v32 = v31;
  while ( 1 )
  {
    v33 = *(_BYTE *)(a3 + 8);
    if ( !v33 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v33 = *(_BYTE *)(a3 + 8);
    }
    if ( !v31 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      v31 = *(_BYTE *)(a4 + 8);
      v32 = v31;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !v33 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v33 = *(_BYTE *)(a3 + 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
            v47,
            72LL,
            *(unsigned __int16 *)(a3 + 10)) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( !v33 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v33 = *(_BYTE *)(a3 + 8);
  }
  if ( !v32 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
    {
LABEL_99:
      if ( !v33 )
        std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v34 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v47 + 112LL))(
              v47,
              *(unsigned __int16 *)(a3 + 10),
              0LL);
      if ( (unsigned __int8)v34 <= 0x3Au )
      {
        v35 = 0x400900000000000LL;
        if ( _bittest64(&v35, v34) )
          std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      }
    }
  }
  else if ( *(_QWORD *)a4 )
  {
    goto LABEL_99;
  }
  v36 = *(_BYTE *)(a4 + 8);
  v37 = v36;
  while ( 1 )
  {
    v38 = *(_BYTE *)(a3 + 8);
    if ( !v38 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v38 = *(_BYTE *)(a3 + 8);
    }
    if ( !v36 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
      v36 = *(_BYTE *)(a4 + 8);
      v37 = v36;
    }
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !v38 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
      v38 = *(_BYTE *)(a3 + 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
            v47,
            72LL,
            *(unsigned __int16 *)(a3 + 10)) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
  }
  if ( !v38 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    v38 = *(_BYTE *)(a3 + 8);
  }
  if ( !v37 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_128;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_128;
  }
  if ( !v38 )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  v39 = (__int64)v47;
  if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v47 + 32LL))(
          v47,
          4LL,
          *(unsigned __int16 *)(a3 + 10)) )
  {
    if ( (_DWORD)v45 == 4 )
    {
      v44 = *(_OWORD *)a4;
      v43 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        &v42,
        &v43,
        &v44,
        a5,
        v17,
        a7);
      goto LABEL_134;
    }
LABEL_128:
    *v17 |= 2u;
    goto LABEL_135;
  }
  if ( (_DWORD)v45 == 4 )
  {
    v40 = (_DWORD *)(a7 + 16);
    *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              a3,
              a4,
              1,
              12,
              (_DWORD *)(a7 + 16),
              v39);
    --*v40;
    goto LABEL_135;
  }
  if ( (_DWORD)v45 == 3 )
  {
    *v17 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              a3,
              a4,
              1,
              31,
              (_DWORD *)(a7 + 12),
              v39);
    goto LABEL_135;
  }
  v44 = *(_OWORD *)a4;
  v43 = *(_OWORD *)a3;
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
    a1,
    &v42,
    &v43,
    &v44,
    a5,
    v17,
    a7);
LABEL_134:
  *(_OWORD *)a3 = v42;
LABEL_135:
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_144;
    goto LABEL_143;
  }
  if ( *(_QWORD *)a4 )
LABEL_143:
    *v17 |= 1u;
LABEL_144:
  result = v46;
  *v46 = *(_OWORD *)a3;
  return result;
}
