/*
 * XREFs of ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800672D4
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x18006A7E0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18006A7E0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x18006A900 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18006A900.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18006AA20 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18006AA20.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180054EE0 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180067C0C (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180069AD8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffld(
        int a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void *v18; // rdx
  char v19; // cl
  __int16 v20; // ax
  char v21; // si
  int v22; // ebx
  void **v23; // r13
  __int16 v24; // r12
  unsigned __int64 v25; // rsi
  __int64 v26; // rbx
  void **v27; // r13
  void **v28; // r13
  void **v29; // rax
  __int64 v30; // rbx
  char v31; // cl
  void **v32; // rax
  void **v33; // rax
  __int16 *v34; // rcx
  __int16 j; // ax
  unsigned __int64 v36; // rcx
  int v37; // edx
  void **v38; // rax
  void **v39; // rax
  void **v40; // rax
  __int64 v41; // r12
  int v42; // r12d
  __int16 *v43; // rcx
  __int16 i; // ax
  unsigned __int64 v45; // rcx
  int k; // r12d
  unsigned int v47; // r12d
  __int16 *v48; // rcx
  __int16 m; // ax
  unsigned __int64 v50; // rcx
  __int16 v51; // ax
  int v52; // ebx
  char v53; // cl
  __int16 v54; // ax
  __int16 *v55; // rax
  __int16 n; // cx
  unsigned __int64 v57; // rax
  char v58; // [rsp+30h] [rbp-79h]
  char v59; // [rsp+31h] [rbp-78h]
  int v60; // [rsp+34h] [rbp-75h]
  __int64 v61; // [rsp+38h] [rbp-71h] BYREF
  __int64 v62; // [rsp+40h] [rbp-69h] BYREF
  void **v63; // [rsp+48h] [rbp-61h]
  char *v64; // [rsp+50h] [rbp-59h]
  void *v65[3]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v66; // [rsp+70h] [rbp-39h]
  void *v67[3]; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v68; // [rsp+90h] [rbp-19h]
  _WORD v69[10]; // [rsp+98h] [rbp-11h] BYREF
  __int16 v70; // [rsp+ACh] [rbp+3h]
  __int16 v71; // [rsp+AEh] [rbp+5h]
  __int16 v72; // [rsp+B0h] [rbp+7h]
  __int16 v73; // [rsp+B2h] [rbp+9h]

  v64 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
             a1,
             (_DWORD)a2,
             a3,
             a4,
             a5,
             a6);
  v10 = **(_QWORD **)(a5 + 64);
  v62 = v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v12 = std::use_facet<std::numpunct<unsigned short>>(&v62);
  v62 = (__int64)v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v12 + 40LL))(
    v12,
    v67,
    v11);
  v14 = a2;
  v59 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v61 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<unsigned short>>(&v61);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v15 = 0LL;
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _WORD *))(*(_QWORD *)v16 + 88LL))(
    v16,
    "0123456789-+Ee",
    "",
    v69);
  if ( *(_BYTE *)(a3 + 8) == (_BYTE)v15 )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( *(_BYTE *)(a4 + 8) == (_BYTE)v15 )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 == v15 )
  {
    if ( *(_QWORD *)a4 == v15 )
      goto LABEL_26;
  }
  else if ( *(_QWORD *)a4 != v15 )
  {
    goto LABEL_26;
  }
  v19 = *(_BYTE *)(a3 + 8);
  if ( !v19 )
  {
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v19 = *(_BYTE *)(a3 + 8);
  }
  v20 = *(_WORD *)(a3 + 10);
  if ( v20 == v71 )
  {
    *a2 = 43;
  }
  else
  {
    if ( !v19 )
    {
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v20 = *(_WORD *)(a3 + 10);
    }
    if ( v20 != v70 )
      goto LABEL_26;
    *a2 = 45;
  }
  v14 = a2 + 1;
  std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_26:
  v21 = 0;
  v58 = 0;
  v22 = 0;
  LODWORD(v61) = 0;
  v60 = 0;
  v23 = v67;
  if ( v68 >= 0x10 )
    v23 = (void **)v67[0];
  v63 = v23;
  if ( (unsigned __int8)(*(_BYTE *)v23 - 1) > 0x7Du )
  {
    v42 = 0;
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      if ( !*(_BYTE *)(a4 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_106;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_106;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<wchar_t>::_Peek(a3);
      v43 = v69;
      for ( i = v69[0]; i && i != *(_WORD *)(a3 + 10); i = *v43 )
        ++v43;
      v45 = v43 - v69;
      if ( v45 >= 0xA )
      {
LABEL_106:
        v60 = v42;
        goto LABEL_89;
      }
      if ( v22 < 36 )
      {
        if ( v45 || v22 )
        {
          *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v45];
          ++v22;
        }
      }
      else
      {
        ++v42;
      }
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v67[2] )
    v24 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
  else
    v24 = 0;
  v25 = 15LL;
  v66 = 15LL;
  LOWORD(v65[0]) = 0;
  v65[2] = (void *)1;
  v26 = 0LL;
  v27 = (void **)v65[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_39;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_39;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    v34 = v69;
    for ( j = v69[0]; j && j != *(_WORD *)(a3 + 10); j = *v34 )
      ++v34;
    v36 = v34 - v69;
    if ( v36 >= 0xA )
      break;
    v58 = 1;
    v37 = v61;
    if ( (int)v61 < 36 )
    {
      if ( v36 || (_DWORD)v61 )
      {
        *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v36];
        LODWORD(v61) = v37 + 1;
      }
    }
    else
    {
      ++v60;
    }
    v38 = v65;
    if ( v25 >= 0x10 )
      v38 = v27;
    if ( *((_BYTE *)v38 + v26) != 127 )
    {
      v39 = v65;
      if ( v25 >= 0x10 )
        v39 = v27;
      ++*((_BYTE *)v39 + v26);
      goto LABEL_83;
    }
LABEL_84:
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v40 = v65;
  if ( v25 >= 0x10 )
    v40 = v27;
  if ( *((_BYTE *)v40 + v26) && v24 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == v24 )
    {
      std::string::append(v65, 1LL);
      ++v26;
LABEL_83:
      v27 = (void **)v65[0];
      v25 = v66;
      goto LABEL_84;
    }
  }
LABEL_39:
  v28 = v63;
  v18 = v65[0];
  if ( v26 )
  {
    v29 = v65;
    if ( v25 >= 0x10 )
      v29 = (void **)v65[0];
    if ( *((char *)v29 + v26) <= 0 )
    {
LABEL_85:
      v59 = 1;
    }
    else
    {
      v30 = v26 + 1;
      while ( v30 )
      {
        v31 = *(_BYTE *)v28;
        if ( *(_BYTE *)v28 == 127 )
          break;
        if ( --v30 )
        {
          v32 = v65;
          if ( v25 >= 0x10 )
            v32 = (void **)v65[0];
          if ( v31 != *((_BYTE *)v32 + v30) )
            goto LABEL_85;
        }
        if ( !v30 )
        {
          v33 = v65;
          if ( v25 >= 0x10 )
            v33 = (void **)v65[0];
          if ( v31 < *(char *)v33 )
            goto LABEL_85;
        }
        if ( *((char *)v28 + 1) > 0 )
          v28 = (void **)((char *)v28 + 1);
      }
    }
  }
  if ( v25 >= 0x10 )
    operator delete(v65[0]);
  v21 = v58;
  v22 = v61;
LABEL_89:
  v41 = v62;
  if ( v21 && !v22 )
    *v14++ = 48;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_122;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_122:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == (*(unsigned __int16 (__fastcall **)(__int64, void *))(*(_QWORD *)v41 + 24LL))(v41, v18) )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v22 )
    goto LABEL_136;
  for ( k = v60; ; --k )
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
    if ( *(_WORD *)(a3 + 10) != v69[0] )
      break;
    v21 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v60 = k;
  if ( k < 0 )
  {
    *v14++ = 48;
    v60 = k + 1;
  }
  while ( 1 )
  {
LABEL_136:
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
    v48 = v69;
    for ( m = v69[0]; m && m != *(_WORD *)(a3 + 10); m = *v48 )
      ++v48;
    v50 = v48 - v69;
    if ( v50 >= 0xA )
      break;
    if ( v22 < 36 )
    {
      *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v50];
      ++v22;
    }
    v21 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v47 = v60;
  if ( v21 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( !*(_QWORD *)a4 )
      {
LABEL_167:
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        v51 = *(_WORD *)(a3 + 10);
        if ( v51 == v73 )
          goto LABEL_173;
        if ( !*(_BYTE *)(a3 + 8) )
        {
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
          v51 = *(_WORD *)(a3 + 10);
        }
        if ( v51 == v72 )
        {
LABEL_173:
          *v14++ = 101;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          v21 = 0;
          v52 = 0;
          if ( !*(_BYTE *)(a3 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( !*(_BYTE *)(a4 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a4 )
              goto LABEL_191;
          }
          else if ( !*(_QWORD *)a4 )
          {
            goto LABEL_191;
          }
          v53 = *(_BYTE *)(a3 + 8);
          if ( !v53 )
          {
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
            v53 = *(_BYTE *)(a3 + 8);
          }
          v54 = *(_WORD *)(a3 + 10);
          if ( v54 == v71 )
          {
            *v14 = 43;
          }
          else
          {
            if ( !v53 )
            {
              std::istreambuf_iterator<wchar_t>::_Peek(a3);
              v54 = *(_WORD *)(a3 + 10);
            }
            if ( v54 != v70 )
              goto LABEL_191;
            *v14 = 45;
          }
          ++v14;
          while ( 1 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_191:
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
            if ( *(_WORD *)(a3 + 10) != v69[0] )
              break;
            v21 = 1;
          }
          if ( v21 )
            *v14++ = 48;
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
            v55 = v69;
            for ( n = v69[0]; n && n != *(_WORD *)(a3 + 10); n = *v55 )
              ++v55;
            v57 = v55 - v69;
            if ( v57 >= 0xA )
              break;
            if ( v52 < 8 )
            {
              *v14++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v57];
              ++v52;
            }
            v21 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          v47 = v60;
        }
      }
    }
    else if ( *(_QWORD *)a4 )
    {
      goto LABEL_167;
    }
  }
  if ( v59 || !v21 )
    v14 = v64;
  *v14 = 0;
  if ( v68 >= 0x10 )
    operator delete(v67[0]);
  return v47;
}
