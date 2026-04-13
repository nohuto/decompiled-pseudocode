/*
 * XREFs of ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180067C0C
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800672D4 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180054EE0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180069AD8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  struct std::_Facet_base *v11; // r15
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  void *v16; // rdx
  _WORD *v17; // rbx
  char v18; // cl
  __int16 v19; // ax
  char *v20; // rbx
  int v21; // esi
  int v22; // r12d
  void **v23; // r13
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  void **v26; // r13
  void **v27; // r13
  void **v28; // rax
  __int64 v29; // rsi
  char v30; // cl
  void **v31; // rax
  void **v32; // rax
  char v33; // cl
  __int16 v34; // ax
  __int16 *v35; // rcx
  __int16 j; // ax
  unsigned __int64 v37; // rcx
  int v38; // edx
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  __int64 v42; // r15
  char v43; // r12
  __int16 *v44; // rcx
  __int16 i; // ax
  unsigned __int64 v46; // rcx
  int k; // r15d
  int v48; // r15d
  __int16 *v49; // rcx
  __int16 m; // ax
  unsigned __int64 v51; // rcx
  __int16 v52; // ax
  int v53; // esi
  char v54; // cl
  __int16 v55; // ax
  __int16 *v57; // rax
  __int16 n; // cx
  unsigned __int64 v59; // rax
  char v60; // [rsp+30h] [rbp-99h]
  char v61; // [rsp+31h] [rbp-98h]
  int v62; // [rsp+34h] [rbp-95h]
  __int64 v63; // [rsp+38h] [rbp-91h] BYREF
  __int64 v64; // [rsp+40h] [rbp-89h] BYREF
  void **v65; // [rsp+48h] [rbp-81h]
  char *v66; // [rsp+50h] [rbp-79h]
  int *v67; // [rsp+58h] [rbp-71h]
  void *v68[3]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v69; // [rsp+78h] [rbp-51h]
  void *v70[3]; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v71; // [rsp+98h] [rbp-31h]
  _WORD v72[22]; // [rsp+A0h] [rbp-29h] BYREF
  __int16 v73; // [rsp+CCh] [rbp+3h]
  __int16 v74; // [rsp+CEh] [rbp+5h]
  __int16 v75; // [rsp+D0h] [rbp+7h]
  __int16 v76; // [rsp+D2h] [rbp+9h]
  __int16 v77; // [rsp+D4h] [rbp+Bh]
  __int16 v78; // [rsp+D6h] [rbp+Dh]

  v66 = a2;
  v67 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v64 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<unsigned short>>(&v64);
  v64 = (__int64)v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v70,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v63 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<unsigned short>>(&v63);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _WORD *))(*(_QWORD *)v14 + 88LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v72);
  v17 = a2;
  v61 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_24;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_24;
  }
  v18 = *(_BYTE *)(a3 + 8);
  if ( !v18 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v18 = *(_BYTE *)(a3 + 8);
  }
  v19 = *(_WORD *)(a3 + 10);
  if ( v19 == v74 )
  {
    *a2 = 43;
LABEL_23:
    v17 = a2 + 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    goto LABEL_24;
  }
  if ( !v18 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v19 = *(_WORD *)(a3 + 10);
  }
  if ( v19 == v73 )
  {
    *a2 = 45;
    goto LABEL_23;
  }
LABEL_24:
  *v17 = 30768;
  v20 = (char *)(v17 + 1);
  v60 = 0;
  v21 = 0;
  LODWORD(v63) = 0;
  v22 = 0;
  v62 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_32;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_32:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) != v72[0] )
      goto LABEL_42;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_41;
    }
    else if ( !*(_QWORD *)a4 )
    {
LABEL_41:
      v60 = 1;
      goto LABEL_42;
    }
    v33 = *(_BYTE *)(a3 + 8);
    if ( !v33 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v33 = *(_BYTE *)(a3 + 8);
    }
    v34 = *(_WORD *)(a3 + 10);
    if ( v34 == v76 )
      goto LABEL_78;
    if ( !v33 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v34 = *(_WORD *)(a3 + 10);
    }
    if ( v34 == v75 )
    {
LABEL_78:
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      goto LABEL_42;
    }
    goto LABEL_41;
  }
LABEL_42:
  v23 = v70;
  if ( v71 >= 0x10 )
    v23 = (void **)v70[0];
  v65 = v23;
  if ( (unsigned __int8)(*(_BYTE *)v23 - 1) > 0x7Du )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*(_BYTE *)(a4 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_128;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_128;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v44 = v72;
      for ( i = v72[0]; i && i != *(_WORD *)(a3 + 10); i = *v44 )
        ++v44;
      v46 = v44 - v72;
      if ( v46 >= 0x16 )
      {
LABEL_128:
        v62 = v22;
        goto LABEL_112;
      }
      if ( v21 < 36 )
      {
        if ( v46 || v21 )
        {
          *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v46];
          ++v21;
        }
      }
      else
      {
        ++v22;
      }
      v60 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v70[2] )
    LOWORD(v22) = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
  v24 = 15LL;
  v69 = 15LL;
  LOWORD(v68[0]) = 0;
  v68[2] = (void *)1;
  v25 = 0LL;
  v26 = (void **)v68[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_54;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_54;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v35 = v72;
    for ( j = v72[0]; j && j != *(_WORD *)(a3 + 10); j = *v35 )
      ++v35;
    v37 = v35 - v72;
    if ( v37 >= 0x16 )
      break;
    v60 = 1;
    v38 = v63;
    if ( (int)v63 < 36 )
    {
      if ( v37 || (_DWORD)v63 )
      {
        *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v37];
        LODWORD(v63) = v38 + 1;
      }
    }
    else
    {
      ++v62;
    }
    v39 = v68;
    if ( v24 >= 0x10 )
      v39 = v26;
    if ( *((_BYTE *)v39 + v25) != 127 )
    {
      v40 = v68;
      if ( v24 >= 0x10 )
        v40 = v26;
      ++*((_BYTE *)v40 + v25);
      goto LABEL_106;
    }
LABEL_107:
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v41 = v68;
  if ( v24 >= 0x10 )
    v41 = v26;
  if ( *((_BYTE *)v41 + v25) && (_WORD)v22 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == (_WORD)v22 )
    {
      std::string::append(v68, 1LL);
      ++v25;
LABEL_106:
      v26 = (void **)v68[0];
      v24 = v69;
      goto LABEL_107;
    }
  }
LABEL_54:
  v27 = v65;
  v16 = v68[0];
  if ( v25 )
  {
    v28 = v68;
    if ( v24 >= 0x10 )
      v28 = (void **)v68[0];
    if ( *((char *)v28 + v25) <= 0 )
    {
LABEL_108:
      v61 = 1;
    }
    else
    {
      v29 = v25 + 1;
      while ( v29 )
      {
        v30 = *(_BYTE *)v27;
        if ( *(_BYTE *)v27 == 127 )
          break;
        if ( --v29 )
        {
          v31 = v68;
          if ( v24 >= 0x10 )
            v31 = (void **)v68[0];
          if ( v30 != *((_BYTE *)v31 + v29) )
            goto LABEL_108;
        }
        if ( !v29 )
        {
          v32 = v68;
          if ( v24 >= 0x10 )
            v32 = (void **)v68[0];
          if ( v30 < *(char *)v32 )
            goto LABEL_108;
        }
        if ( *((char *)v27 + 1) > 0 )
          v27 = (void **)((char *)v27 + 1);
      }
    }
  }
  if ( v24 >= 0x10 )
    operator delete(v68[0]);
  v21 = v63;
LABEL_112:
  v42 = v64;
  v43 = v60;
  if ( v60 && !v21 )
    *v20++ = 48;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_144;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_144:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == (*(unsigned __int16 (__fastcall **)(__int64, void *))(*(_QWORD *)v42 + 24LL))(v42, v16) )
    {
      *v20++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v21 )
    goto LABEL_158;
  for ( k = v62; ; --k )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) != v72[0] )
      break;
    v43 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v62 = k;
  if ( k < 0 )
  {
    *v20++ = 48;
    v62 = k + 1;
  }
  while ( 1 )
  {
LABEL_158:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v49 = v72;
    for ( m = v72[0]; m && m != *(_WORD *)(a3 + 10); m = *v49 )
      ++v49;
    v51 = v49 - v72;
    if ( v51 >= 0x16 )
      break;
    if ( v21 < 36 )
    {
      *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v51];
      ++v21;
    }
    v43 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v48 = v62;
  if ( v43 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( !*(_QWORD *)a4 )
      {
LABEL_189:
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v52 = *(_WORD *)(a3 + 10);
        if ( v52 == v78 )
          goto LABEL_195;
        if ( !*(_BYTE *)(a3 + 8) )
        {
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
          v52 = *(_WORD *)(a3 + 10);
        }
        if ( v52 == v77 )
        {
LABEL_195:
          *v20++ = 112;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          v43 = 0;
          v53 = 0;
          if ( !*(_BYTE *)(a3 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( !*(_BYTE *)(a4 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a4 )
              goto LABEL_213;
          }
          else if ( !*(_QWORD *)a4 )
          {
            goto LABEL_213;
          }
          v54 = *(_BYTE *)(a3 + 8);
          if ( !v54 )
          {
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
            v54 = *(_BYTE *)(a3 + 8);
          }
          v55 = *(_WORD *)(a3 + 10);
          if ( v55 == v74 )
          {
            *v20 = 43;
          }
          else
          {
            if ( !v54 )
            {
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
              v55 = *(_WORD *)(a3 + 10);
            }
            if ( v55 != v73 )
              goto LABEL_213;
            *v20 = 45;
          }
          ++v20;
          while ( 1 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_213:
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( !*(_BYTE *)(a4 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)a4 )
                break;
            }
            else if ( !*(_QWORD *)a4 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( *(_WORD *)(a3 + 10) != v72[0] )
              break;
            v43 = 1;
          }
          if ( v43 )
            *v20++ = 48;
          while ( 1 )
          {
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            if ( !*(_BYTE *)(a4 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)a4 )
                break;
            }
            else if ( !*(_QWORD *)a4 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
            v57 = v72;
            for ( n = v72[0]; n && n != *(_WORD *)(a3 + 10); n = *v57 )
              ++v57;
            v59 = v57 - v72;
            if ( v59 >= 0x16 )
              break;
            if ( v53 < 8 )
            {
              *v20++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v59];
              ++v53;
            }
            v43 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          v48 = v62;
        }
      }
    }
    else if ( *(_QWORD *)a4 )
    {
      goto LABEL_189;
    }
  }
  if ( v61 || !v43 )
    v20 = v66;
  *v20 = 0;
  *v67 = v48;
  if ( v71 >= 0x10 )
    operator delete(v70[0]);
  return 0LL;
}
