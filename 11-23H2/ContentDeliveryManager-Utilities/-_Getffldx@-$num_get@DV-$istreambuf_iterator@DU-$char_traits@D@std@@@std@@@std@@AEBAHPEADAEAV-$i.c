/*
 * XREFs of ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800080D4
 * Callers:
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800079A8 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006C7C (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006E54 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008D70 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B704 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022981 (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180062888 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r15
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  struct std::_Facet_base *v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // rsi
  _BYTE *v17; // rax
  __int64 *v18; // rcx
  _BYTE *v19; // rax
  char *v20; // rsi
  int v21; // r14d
  __int64 v22; // rbx
  _BYTE *v23; // rax
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  void **v26; // r13
  char v27; // r12
  unsigned __int64 v28; // r15
  char v29; // al
  void **v30; // r14
  int v31; // r13d
  char v32; // dl
  char *v33; // rax
  char j; // cl
  unsigned __int64 v35; // rax
  void **v36; // rax
  void **v37; // rax
  void **v38; // rax
  void **v39; // rax
  char v40; // cl
  void **v41; // rax
  void **v42; // rax
  char v43; // r12
  char v44; // bl
  int v45; // r14d
  _BYTE *v46; // rax
  int v47; // r13d
  char v48; // dl
  char *v49; // rax
  char i; // cl
  unsigned __int64 v51; // rax
  char v52; // dl
  char *v53; // rax
  char k; // cl
  unsigned __int64 v55; // rax
  _BYTE *v56; // rax
  _BYTE *v57; // rax
  int v58; // ebx
  _BYTE *v59; // rax
  __int64 *v60; // rcx
  _BYTE *v61; // rax
  _BYTE *v62; // rax
  char v63; // dl
  char *v64; // rax
  char m; // cl
  unsigned __int64 v66; // rax
  char v68; // [rsp+38h] [rbp-99h]
  char v69; // [rsp+39h] [rbp-98h]
  int v70; // [rsp+3Ch] [rbp-95h]
  __int64 v71; // [rsp+40h] [rbp-91h] BYREF
  __int64 v72; // [rsp+48h] [rbp-89h]
  void **v73; // [rsp+50h] [rbp-81h]
  struct std::_Facet_base *v74; // [rsp+58h] [rbp-79h]
  char *v75; // [rsp+60h] [rbp-71h]
  int *v76; // [rsp+68h] [rbp-69h]
  __int64 v77; // [rsp+70h] [rbp-61h]
  void *v78[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v79; // [rsp+90h] [rbp-41h]
  void *v80[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v81; // [rsp+B0h] [rbp-21h]
  _BYTE v82[22]; // [rsp+B8h] [rbp-19h] BYREF
  char v83; // [rsp+CEh] [rbp-3h]
  char v84; // [rsp+CFh] [rbp-2h]
  char v85; // [rsp+D0h] [rbp-1h]
  char v86; // [rsp+D1h] [rbp+0h]
  char v87; // [rsp+D2h] [rbp+1h]
  char v88; // [rsp+D3h] [rbp+2h]

  v77 = -2LL;
  v6 = a4;
  v72 = a4;
  v75 = a2;
  v76 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v71 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<char>>(&v71);
  v74 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v80,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v71 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&v71);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v14 + 56LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v82);
  v16 = a2;
  v69 = 0;
  if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    goto LABEL_13;
  v17 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
  v18 = a3;
  if ( *v17 == v84 )
  {
    *a2 = 43;
  }
  else
  {
    v19 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
    if ( *v19 != v83 )
      goto LABEL_13;
    *a2 = 45;
    v18 = a3;
  }
  v16 = a2 + 1;
  std::istreambuf_iterator<char>::_Inc(v18);
LABEL_13:
  *v16 = 30768;
  v20 = (char *)(v16 + 1);
  v68 = 0;
  v21 = 0;
  LODWORD(v71) = 0;
  v22 = 0LL;
  v70 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    v23 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
    if ( *v23 == v82[0] )
    {
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6)
        && ((v24 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3), *v24 == v86)
         || (v25 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3), *v25 == v85)) )
      {
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      else
      {
        v68 = 1;
      }
    }
  }
  v26 = v80;
  if ( v81 >= 0x10 )
    v26 = (void **)v80[0];
  v73 = v26;
  if ( (unsigned __int8)(*(_BYTE *)v26 - 1) > 0x7Du )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      do
      {
        v48 = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
        v49 = v82;
        for ( i = v82[0]; i && i != v48; i = *v49 )
          ++v49;
        v51 = v49 - v82;
        if ( v51 >= 0x16 )
          break;
        if ( v21 < 36 )
        {
          if ( v51 || v21 )
          {
            *v20++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v51];
            ++v21;
          }
        }
        else
        {
          LODWORD(v22) = v22 + 1;
        }
        v68 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v70 = v22;
      LODWORD(v71) = v21;
    }
    goto LABEL_73;
  }
  if ( v80[2] )
    v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
  else
    v27 = 0;
  v28 = 15LL;
  v79 = 15LL;
  LOWORD(v78[0]) = 0;
  v78[2] = (void *)1;
  v29 = std::istreambuf_iterator<char>::equal(a3, v72);
  v30 = (void **)v78[0];
  if ( v29 )
  {
LABEL_57:
    while ( v22 )
    {
      v40 = *(_BYTE *)v26;
      if ( *(_BYTE *)v26 == 127 )
        break;
      if ( --v22 )
      {
        v41 = v78;
        if ( v28 >= 0x10 )
          v41 = v30;
        if ( v40 != *((_BYTE *)v41 + v22) )
          goto LABEL_69;
      }
      if ( !v22 )
      {
        v42 = v78;
        if ( v28 >= 0x10 )
          v42 = v30;
        if ( v40 < *(char *)v42 )
          goto LABEL_69;
      }
      if ( *((char *)v26 + 1) > 0 )
        v26 = (void **)((char *)v26 + 1);
    }
    goto LABEL_70;
  }
  v31 = v71;
  while ( 1 )
  {
    v32 = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
    v33 = v82;
    for ( j = v82[0]; j && j != v32; j = *v33 )
      ++v33;
    v35 = v33 - v82;
    if ( v35 >= 0x16 )
      break;
    v68 = 1;
    if ( v31 < 36 )
    {
      if ( v35 || v31 )
      {
        *v20++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v35];
        ++v31;
      }
    }
    else
    {
      ++v70;
    }
    v36 = v78;
    if ( v28 >= 0x10 )
      v36 = v30;
    if ( *((_BYTE *)v36 + v22) == 127 )
      goto LABEL_51;
    v37 = v78;
    if ( v28 >= 0x10 )
      v37 = v30;
    ++*((_BYTE *)v37 + v22);
LABEL_50:
    v30 = (void **)v78[0];
    v28 = v79;
LABEL_51:
    std::istreambuf_iterator<char>::_Inc(a3);
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v72) )
      goto LABEL_52;
  }
  v38 = v78;
  if ( v28 >= 0x10 )
    v38 = v30;
  if ( *((_BYTE *)v38 + v22) && v27 && *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) == v27 )
  {
    std::string::append(v78, 1LL);
    ++v22;
    goto LABEL_50;
  }
LABEL_52:
  LODWORD(v71) = v31;
  v26 = v73;
  if ( v22 )
  {
    v39 = v78;
    if ( v28 >= 0x10 )
      v39 = v30;
    if ( *((char *)v39 + v22) > 0 )
    {
      ++v22;
      goto LABEL_57;
    }
LABEL_69:
    v69 = 1;
  }
LABEL_70:
  if ( v28 >= 0x10 )
    operator delete(v30);
  v6 = v72;
  v21 = v71;
LABEL_73:
  v43 = v68;
  if ( v68 && !v21 )
    *v20++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    v44 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v74 + 24LL))(v74);
    if ( *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3) == v44 )
    {
      *v20++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v21 )
  {
    v47 = v70;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v45 = v70;
      do
      {
        v46 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
        if ( *v46 != v82[0] )
          break;
        --v45;
        v43 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v70 = v45;
      v21 = v71;
    }
    v47 = v70;
    if ( v70 < 0 )
    {
      *v20++ = 48;
      v47 = ++v70;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      v52 = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
      v53 = v82;
      for ( k = v82[0]; k && k != v52; k = *v53 )
        ++v53;
      v55 = v53 - v82;
      if ( v55 >= 0x16 )
        break;
      if ( v21 < 36 )
      {
        *v20++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v55];
        ++v21;
      }
      v43 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v47 = v70;
  }
  if ( v43 )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v56 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
      if ( *v56 == v88 || (v57 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3), *v57 == v87) )
      {
        *v20++ = 112;
        std::istreambuf_iterator<char>::_Inc(a3);
        v43 = 0;
        v58 = 0;
        if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        {
          v59 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
          v60 = a3;
          if ( *v59 == v84 )
          {
            *v20 = 43;
            goto LABEL_120;
          }
          v61 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
          if ( *v61 == v83 )
          {
            *v20 = 45;
            v60 = a3;
LABEL_120:
            ++v20;
            std::istreambuf_iterator<char>::_Inc(v60);
          }
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        {
          do
          {
            v62 = (_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
            if ( *v62 != v82[0] )
              break;
            v43 = 1;
            std::istreambuf_iterator<char>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
          if ( v43 )
            *v20++ = 48;
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        {
          do
          {
            v63 = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
            v64 = v82;
            for ( m = v82[0]; m && m != v63; m = *v64 )
              ++v64;
            v66 = v64 - v82;
            if ( v66 >= 0x16 )
              break;
            if ( v58 < 8 )
            {
              *v20++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v66];
              ++v58;
            }
            v43 = 1;
            std::istreambuf_iterator<char>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
          v47 = v70;
        }
      }
    }
  }
  if ( v69 || !v43 )
    v20 = v75;
  *v20 = 0;
  *v76 = v47;
  if ( v81 >= 0x10 )
    operator delete(v80[0]);
  return 0LL;
}
