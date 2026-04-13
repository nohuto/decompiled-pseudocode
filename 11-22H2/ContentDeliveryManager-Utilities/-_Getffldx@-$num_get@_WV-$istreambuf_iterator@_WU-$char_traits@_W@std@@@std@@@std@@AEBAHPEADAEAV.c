/*
 * XREFs of ?_Getffldx@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B7F8C
 * Callers:
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B79C4 (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180043370 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??$_Find_elem@G@std@@YA_KPEAGG@Z @ 0x18004F6DC (--$_Find_elem@G@std@@YA_KPEAGG@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x180051890 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180053B44 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061AA0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800628D8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?decimal_point@?$numpunct@_W@std@@QEBA_WXZ @ 0x180062F20 (-decimal_point@-$numpunct@_W@std@@QEBA_WXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063F44 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x180064914 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?grouping@?$numpunct@G@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18006493C (-grouping@-$numpunct@G@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ?thousands_sep@?$numpunct@G@std@@QEBAGXZ @ 0x18006538C (-thousands_sep@-$numpunct@G@std@@QEBAGXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC84 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x1800B6AC4 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r13
  std::locale *v9; // rax
  std::locale *v10; // rax
  const struct std::locale::facet *v11; // rbx
  _WORD *v12; // rdi
  __int64 v13; // rbx
  _WORD *v14; // rax
  __int64 v15; // rcx
  _WORD *v16; // rax
  char *v17; // rdi
  char v18; // r15
  int v19; // r14d
  int v20; // r12d
  _WORD *v21; // rax
  _WORD *v22; // rax
  _WORD *v23; // rax
  void **v24; // rax
  unsigned __int64 v25; // r12
  void **v26; // r13
  __int16 *v27; // rax
  unsigned __int64 v28; // rax
  void **v29; // rax
  void **v30; // rax
  void **v31; // rax
  void **v32; // rax
  void **v33; // rcx
  char v34; // dl
  void **v35; // rax
  void **v36; // rax
  __int16 *v37; // rax
  unsigned __int64 v38; // rax
  _WORD *v39; // rbx
  _WORD *v40; // rax
  __int16 *v41; // rax
  unsigned __int64 v42; // rax
  int v43; // r12d
  _WORD *v44; // rax
  _WORD *v45; // rax
  _WORD *v46; // rax
  __int64 v47; // rcx
  _WORD *v48; // rax
  _WORD *v49; // rax
  __int16 *v50; // rax
  unsigned __int64 v51; // rax
  char v53; // [rsp+30h] [rbp-A9h]
  __int16 v54; // [rsp+32h] [rbp-A7h]
  int v55; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v56; // [rsp+40h] [rbp-99h]
  const struct std::locale::facet *v57; // [rsp+48h] [rbp-91h]
  char v58[8]; // [rsp+50h] [rbp-89h] BYREF
  void **v59; // [rsp+58h] [rbp-81h]
  char *v60; // [rsp+60h] [rbp-79h]
  int *v61; // [rsp+68h] [rbp-71h]
  void *v62[3]; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-51h]
  void *v64[4]; // [rsp+90h] [rbp-49h] BYREF
  _WORD v65[22]; // [rsp+B0h] [rbp-29h] BYREF
  __int16 v66; // [rsp+DCh] [rbp+3h]
  __int16 v67; // [rsp+DEh] [rbp+5h]
  __int16 v68; // [rsp+E0h] [rbp+7h]
  __int16 v69; // [rsp+E2h] [rbp+9h]
  __int16 v70; // [rsp+E4h] [rbp+Bh]
  __int16 v71; // [rsp+E6h] [rbp+Dh]

  v6 = a4;
  v56 = a4;
  v60 = a2;
  v61 = a6;
  v9 = std::ios_base::getloc(a5, (std::locale *)v58);
  v57 = std::use_facet<std::numpunct<wchar_t>>(v9);
  std::locale::~locale((std::locale *)v58);
  std::numpunct<unsigned short>::grouping((__int64)v57, (__int64)v64);
  v10 = std::ios_base::getloc(a5, (std::locale *)&v55);
  v11 = std::use_facet<std::ctype<wchar_t>>(v10);
  std::locale::~locale((std::locale *)&v55);
  (*(void (__fastcall **)(const struct std::locale::facet *, const char *, char *, _WORD *))(*(_QWORD *)v11 + 88LL))(
    v11,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v65);
  v12 = a2;
  v13 = 0LL;
  v53 = 0;
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    goto LABEL_7;
  v14 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  v15 = a3;
  if ( *v14 == v67 )
  {
    *a2 = 43;
  }
  else
  {
    v16 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v16 != v66 )
      goto LABEL_7;
    *a2 = 45;
    v15 = a3;
  }
  v12 = a2 + 1;
  std::istreambuf_iterator<unsigned short>::_Inc(v15);
LABEL_7:
  *v12 = 30768;
  v17 = (char *)(v12 + 1);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v55 = 0;
  if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v21 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v21 == v65[0] )
    {
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6)
        && ((v22 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v22 == v69)
         || (v23 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v23 == v68)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      else
      {
        v18 = 1;
      }
    }
  }
  v24 = v64;
  if ( v64[3] >= (void *)0x10 )
    v24 = (void **)v64[0];
  v59 = v24;
  if ( (unsigned __int8)(*(_BYTE *)v24 - 1) > 0x7Du )
  {
    while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v37 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v38 = std::_Find_elem<unsigned short>(v65, *v37);
      if ( v38 >= 0x16 )
        break;
      if ( v19 < 36 )
      {
        if ( v38 || v19 )
        {
          *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v38];
          ++v19;
        }
      }
      else
      {
        ++v20;
      }
      v18 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v55 = v20;
    goto LABEL_70;
  }
  if ( v64[2] )
    v54 = std::numpunct<unsigned short>::thousands_sep((__int64)v57);
  else
    v54 = 0;
  std::string::string((__int64)v62, 1LL, 0LL);
  v25 = v63;
  v26 = (void **)v62[0];
  while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v56) )
  {
    v27 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v28 = std::_Find_elem<unsigned short>(v65, *v27);
    if ( v28 >= 0x16 )
    {
      v31 = v62;
      if ( v25 >= 0x10 )
        v31 = v26;
      if ( !*((_BYTE *)v31 + v13) || !v54 || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != v54 )
        break;
      std::string::append((__int64)v62, 1uLL, 0);
      ++v13;
      goto LABEL_40;
    }
    v18 = 1;
    if ( v19 < 36 )
    {
      if ( v28 || v19 )
      {
        *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v28];
        ++v19;
      }
    }
    else
    {
      ++v55;
    }
    v29 = v62;
    if ( v25 >= 0x10 )
      v29 = v26;
    if ( *((_BYTE *)v29 + v13) != 127 )
    {
      v30 = v62;
      if ( v25 >= 0x10 )
        v30 = v26;
      ++*((_BYTE *)v30 + v13);
LABEL_40:
      v26 = (void **)v62[0];
      v25 = v63;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  if ( v13 )
  {
    v32 = v62;
    if ( v25 >= 0x10 )
      v32 = v26;
    if ( *((char *)v32 + v13) > 0 )
    {
      ++v13;
      goto LABEL_47;
    }
LABEL_54:
    v53 = 1;
  }
  else
  {
LABEL_47:
    v33 = v59;
    while ( v13 )
    {
      v34 = *(_BYTE *)v33;
      if ( *(_BYTE *)v33 == 127 )
        break;
      if ( --v13 )
      {
        v35 = v62;
        if ( v25 >= 0x10 )
          v35 = v26;
        if ( v34 != *((_BYTE *)v35 + v13) )
          goto LABEL_54;
      }
      else
      {
        v36 = v62;
        if ( v25 >= 0x10 )
          v36 = v26;
        if ( v34 < *(char *)v36 )
          goto LABEL_54;
      }
      if ( *((char *)v33 + 1) > 0 )
        v33 = (void **)((char *)v33 + 1);
    }
  }
  std::string::_Tidy(v62, 1, 0LL);
  v20 = v55;
  v6 = v56;
  LODWORD(v13) = 0;
LABEL_70:
  if ( v18 && !v19 )
    *v17++ = 48;
  if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v39 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v39 == (unsigned __int16)std::numpunct<wchar_t>::decimal_point((__int64)v57) )
    {
      *v17++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    LODWORD(v13) = 0;
  }
  if ( !v19 )
  {
    while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v40 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v40 != v65[0] )
        break;
      --v20;
      v18 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v55 = v20;
    if ( v20 < 0 )
    {
      *v17++ = 48;
      v55 = v20 + 1;
    }
  }
  while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v41 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v42 = std::_Find_elem<unsigned short>(v65, *v41);
    if ( v42 >= 0x16 )
      break;
    if ( v19 < 36 )
    {
      *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v42];
      ++v19;
    }
    v18 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v43 = v55;
  if ( v18 )
  {
    if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v44 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v44 == v71 || (v45 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v45 == v70) )
      {
        *v17++ = 112;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        v18 = 0;
        if ( std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
          goto LABEL_99;
        v46 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v47 = a3;
        if ( *v46 == v67 )
        {
          *v17 = 43;
        }
        else
        {
          v48 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v48 != v66 )
            goto LABEL_99;
          *v17 = 45;
          v47 = a3;
        }
        ++v17;
        while ( 1 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(v47);
LABEL_99:
          if ( std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
            break;
          v49 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v49 != v65[0] )
            break;
          v18 = 1;
          v47 = a3;
        }
        if ( v18 )
          *v17++ = 48;
        while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
        {
          v50 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          v51 = std::_Find_elem<unsigned short>(v65, *v50);
          if ( v51 >= 0x16 )
            break;
          if ( (int)v13 < 8 )
          {
            *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v51];
            LODWORD(v13) = v13 + 1;
          }
          v18 = 1;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v43 = v55;
      }
    }
  }
  if ( v53 || !v18 )
    v17 = v60;
  *v17 = 0;
  *v61 = v43;
  std::string::_Tidy(v64, 1, 0LL);
  return 0LL;
}
