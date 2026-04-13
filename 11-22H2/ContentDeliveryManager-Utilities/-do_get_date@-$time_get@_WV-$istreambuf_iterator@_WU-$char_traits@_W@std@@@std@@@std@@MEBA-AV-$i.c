/*
 * XREFs of ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800D1330
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180053B44 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061AA0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063F44 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x180064914 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC84 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800D0ABC (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     ?date_order@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AW4dateorder@time_base@2@XZ @ 0x1800D0E3C (-date_order@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AW4dat.c)
 *     ?get_monthname@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800D1EEC (-get_monthname@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-.c)
 *     ?get_year@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800D1FDC (-get_year@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$istr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int128 *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get_date(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  std::locale *v10; // rax
  const struct std::locale::facet *v11; // r15
  int v12; // r13d
  char v13; // al
  _DWORD *v14; // rsi
  unsigned __int16 *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rbx
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rax
  __int64 v24; // rbx
  _DWORD *v25; // rbx
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int16 *v30; // rax
  unsigned __int16 *v31; // rax
  __int128 *year; // rax
  _DWORD *v33; // rbx
  __int128 *result; // rax
  __int64 v35; // [rsp+30h] [rbp-40h]
  __int128 v36; // [rsp+40h] [rbp-30h] BYREF
  __int128 v37; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v38[16]; // [rsp+60h] [rbp-10h] BYREF
  char v40; // [rsp+C0h] [rbp+50h] BYREF

  v10 = std::ios_base::getloc(a5, (std::locale *)&v40);
  v11 = std::use_facet<std::ctype<wchar_t>>(v10);
  std::locale::~locale((std::locale *)&v40);
  v12 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::date_order(a1);
  if ( !v12 )
    v12 = 2;
  v13 = std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4);
  v14 = a6;
  if ( v13 )
    goto LABEL_8;
  v15 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
          v11,
          4LL,
          *v15) )
  {
    v36 = *a4;
    v37 = *a3;
    v16 = a7;
    *a3 = *(_OWORD *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_monthname(
                       a1,
                       (unsigned int)v38,
                       (unsigned int)&v37,
                       (unsigned int)&v36,
                       a5,
                       (__int64)v14,
                       a7);
    v12 = 2;
    goto LABEL_9;
  }
  v16 = a7;
  if ( v12 == 2 )
  {
    v17 = (_DWORD *)(a7 + 16);
    *v14 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              (__int64)a3,
              (__int64)a4,
              1,
              12,
              (_DWORD *)(a7 + 16),
              (__int64)v11);
    --*v17;
LABEL_8:
    v16 = a7;
    goto LABEL_9;
  }
  if ( v12 == 1 )
  {
    *v14 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              (__int64)a3,
              (__int64)a4,
              1,
              31,
              (_DWORD *)(a7 + 12),
              (__int64)v11);
  }
  else
  {
    v37 = *a4;
    v36 = *a3;
    *a3 = *(_OWORD *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_year(
                       a1,
                       (unsigned int)v38,
                       (unsigned int)&v36,
                       (unsigned int)&v37,
                       a5,
                       (__int64)v14,
                       a7);
  }
LABEL_9:
  while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
  {
    v18 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
    if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
            v11,
            72LL,
            *v18) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
  }
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    goto LABEL_19;
  v19 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  v20 = (*(__int64 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v11 + 112LL))(
          v11,
          *v19,
          0LL);
  if ( (unsigned __int8)v20 > 0x3Au )
    goto LABEL_19;
  v21 = 0x400900000000000LL;
  if ( !_bittest64(&v21, v20) )
    goto LABEL_19;
  do
  {
    std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
LABEL_19:
    if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
      break;
    v22 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  }
  while ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
            v11,
            72LL,
            *v22) );
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    goto LABEL_30;
  v23 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  if ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
         v11,
         4LL,
         *v23) )
  {
    if ( ((v12 - 1) & 0xFFFFFFFD) != 0 )
    {
      *v14 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                a1,
                (__int64)a3,
                (__int64)a4,
                1,
                31,
                (_DWORD *)(v16 + 12),
                (__int64)v11);
    }
    else
    {
      v25 = (_DWORD *)(v16 + 16);
      *v14 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                a1,
                (__int64)a3,
                (__int64)a4,
                1,
                12,
                v25,
                (__int64)v11);
      --*v25;
    }
    goto LABEL_30;
  }
  if ( v12 == 2 )
  {
    *v14 |= 2u;
LABEL_30:
    v24 = a5;
    goto LABEL_31;
  }
  v37 = *a4;
  v36 = *a3;
  v35 = v16;
  v24 = a5;
  *a3 = *(_OWORD *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_monthname(
                     a1,
                     (unsigned int)v38,
                     (unsigned int)&v36,
                     (unsigned int)&v37,
                     a5,
                     (__int64)v14,
                     v35);
  if ( v12 == 4 )
    v12 = 3;
LABEL_31:
  while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
  {
    v26 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
    if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
            v11,
            72LL,
            *v26) )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
  }
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    goto LABEL_38;
  v27 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  v28 = (*(__int64 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v11 + 112LL))(
          v11,
          *v27,
          0LL);
  if ( (unsigned __int8)v28 > 0x3Au )
    goto LABEL_38;
  v29 = 0x400900000000000LL;
  if ( !_bittest64(&v29, v28) )
    goto LABEL_38;
  do
  {
    std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
LABEL_38:
    if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
      break;
    v30 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  }
  while ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
            v11,
            72LL,
            *v30) );
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    goto LABEL_41;
  v31 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
  if ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(
         v11,
         4LL,
         *v31) )
  {
    if ( v12 == 4 )
    {
      v33 = (_DWORD *)(a7 + 16);
      *v14 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                a1,
                (__int64)a3,
                (__int64)a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                (__int64)v11);
      --*v33;
      goto LABEL_51;
    }
    if ( v12 == 3 )
    {
      *v14 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                a1,
                (__int64)a3,
                (__int64)a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                (__int64)v11);
      goto LABEL_51;
    }
    v37 = *a4;
    v36 = *a3;
    year = (__int128 *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_year(
                         a1,
                         (unsigned int)v38,
                         (unsigned int)&v36,
                         (unsigned int)&v37,
                         v24,
                         (__int64)v14,
                         a7);
  }
  else
  {
    if ( v12 != 4 )
    {
LABEL_41:
      *v14 |= 2u;
      goto LABEL_51;
    }
    v37 = *a4;
    v36 = *a3;
    year = (__int128 *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_monthname(
                         a1,
                         (unsigned int)v38,
                         (unsigned int)&v36,
                         (unsigned int)&v37,
                         v24,
                         (__int64)v14,
                         a7);
  }
  *a3 = *year;
LABEL_51:
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    *v14 |= 1u;
  result = a2;
  *a2 = *a3;
  return result;
}
