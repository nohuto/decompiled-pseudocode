/*
 * XREFs of ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001F500
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180005EC0 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800061C8 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B004 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x18001CF20 (-_Getfmt@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEBA-AV-$istreamb.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D128 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 *a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        char a8)
{
  __int64 v12; // r13
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // r15
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _DWORD *v16; // rbx
  _DWORD *v17; // rax
  int v18; // r9d
  char *v19; // rax
  __int64 *v20; // r9
  __int64 *v21; // r8
  __int128 *v22; // rdx
  int v23; // ecx
  int v24; // ecx
  __int128 v25; // xmm0
  int v26; // ecx
  __int128 v27; // xmm1
  int v28; // ecx
  int v29; // eax
  int v31; // [rsp+20h] [rbp-60h]
  _DWORD *v32; // [rsp+28h] [rbp-58h]
  __int64 v33; // [rsp+30h] [rbp-50h]
  __int128 v34; // [rsp+50h] [rbp-30h] BYREF
  __int128 v35; // [rsp+60h] [rbp-20h] BYREF
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF

  v12 = a5;
  v13 = **(_QWORD **)(a5 + 64);
  a5 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&a5);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  LODWORD(a5) = 0;
  v16 = a6;
  if ( a8 <= 97 )
  {
    if ( a8 == 97 )
      goto LABEL_36;
    if ( a8 <= 82 )
    {
      if ( a8 == 82 )
      {
        v35 = *(_OWORD *)a4;
        v34 = *(_OWORD *)a3;
        v19 = "%H : %M";
        v20 = (__int64 *)&v35;
        v21 = (__int64 *)&v34;
LABEL_21:
        v22 = &v36;
LABEL_56:
        v25 = *std::time_get<char,std::istreambuf_iterator<char>>::_Getfmt(a1, v22, v21, v20, v12, a6, (__int64)a7, v19);
        goto LABEL_38;
      }
      if ( a8 != 65 )
      {
        if ( a8 != 66 )
        {
          if ( a8 != 67 )
          {
            if ( a8 != 68 )
            {
              switch ( a8 )
              {
                case 'H':
                  v33 = (__int64)v14;
                  v32 = a7 + 2;
                  v31 = 23;
                  goto LABEL_19;
                case 'I':
                  v33 = (__int64)v14;
                  v32 = a7 + 2;
                  v31 = 11;
                  goto LABEL_19;
                case 'M':
                  v17 = a7 + 1;
LABEL_16:
                  v33 = (__int64)v14;
                  v32 = v17;
                  v31 = 59;
LABEL_19:
                  v18 = 0;
LABEL_53:
                  *v16 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                            (__int64)a1,
                            a3,
                            a4,
                            v18,
                            v31,
                            v32,
                            v33);
                  goto LABEL_75;
              }
              goto LABEL_73;
            }
            v34 = *(_OWORD *)a4;
            v35 = *(_OWORD *)a3;
            v19 = "%m / %d / %y";
            v20 = (__int64 *)&v34;
            v21 = (__int64 *)&v35;
            goto LABEL_21;
          }
          v23 = std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  (__int64)a1,
                  a3,
                  a4,
                  0,
                  99,
                  &a5,
                  (__int64)v14) | *v16;
          *v16 = v23;
          if ( (v23 & 2) != 0 )
            goto LABEL_75;
          v24 = 100 * (a5 - 19);
LABEL_24:
          a7[5] = v24;
          goto LABEL_75;
        }
        goto LABEL_57;
      }
LABEL_36:
      v36 = *(_OWORD *)a4;
      v35 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*a1 + 48))(
        a1,
        &v34,
        &v35,
        &v36,
        v12,
        a6,
        a7);
LABEL_37:
      v25 = v34;
      goto LABEL_38;
    }
    if ( a8 == 83 )
    {
      v17 = a7;
      goto LABEL_16;
    }
    if ( a8 != 84 )
    {
      if ( a8 == 85 || a8 == 87 )
      {
        v33 = (__int64)v14;
        v32 = a7 + 7;
        v31 = 53;
        goto LABEL_19;
      }
      if ( a8 != 88 )
      {
        if ( a8 == 89 )
        {
          v35 = *(_OWORD *)a4;
          v34 = *(_OWORD *)a3;
          (*(void (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*a1 + 64))(
            a1,
            &v36,
            &v34,
            &v35,
            v12,
            a6,
            a7);
          v25 = v36;
LABEL_38:
          *(_OWORD *)a3 = v25;
          goto LABEL_75;
        }
LABEL_73:
        *v16 |= 2u;
        goto LABEL_75;
      }
    }
    v19 = "%H : %M : S";
    goto LABEL_55;
  }
  if ( a8 > 110 )
  {
    if ( a8 == 112 )
    {
      v29 = std::_Getloctxt<char,std::istreambuf_iterator<char>>((__int64)a3, (__int64)a4, 0LL, ":AM:am:PM:pm");
      if ( v29 < 0 )
        goto LABEL_73;
      a7[2] += 12 * v29;
      goto LABEL_75;
    }
    if ( a8 == 114 )
    {
      v19 = "%I : %M : %S %p";
      goto LABEL_55;
    }
    if ( a8 != 116 )
    {
      if ( a8 == 119 )
      {
        v33 = (__int64)v14;
        v32 = a7 + 6;
        v31 = 6;
        goto LABEL_19;
      }
      if ( a8 != 120 )
      {
        if ( a8 == 121 )
        {
          v28 = std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  (__int64)a1,
                  a3,
                  a4,
                  0,
                  99,
                  &a5,
                  (__int64)v14) | *v16;
          *v16 = v28;
          if ( (v28 & 2) != 0 )
            goto LABEL_75;
          v24 = a5;
          if ( (int)a5 < 69 )
            v24 = a5 + 100;
          goto LABEL_24;
        }
        goto LABEL_73;
      }
      v19 = "%d / %m / %y";
LABEL_55:
      v27 = *(_OWORD *)a3;
      v36 = *(_OWORD *)a4;
      v35 = v27;
      v20 = (__int64 *)&v36;
      v21 = (__int64 *)&v35;
      v22 = &v34;
      goto LABEL_56;
    }
LABEL_70:
    v19 = " ";
    goto LABEL_55;
  }
  switch ( a8 )
  {
    case 'n':
      goto LABEL_70;
    case 'b':
      goto LABEL_57;
    case 'c':
      v19 = "%b %d %H : %M : %S %Y";
      goto LABEL_55;
  }
  if ( a8 <= 99 )
    goto LABEL_73;
  if ( a8 <= 101 )
  {
    v33 = (__int64)v14;
    v32 = a7 + 3;
    v31 = 31;
    goto LABEL_52;
  }
  if ( a8 == 104 )
  {
LABEL_57:
    v36 = *(_OWORD *)a4;
    v35 = *(_OWORD *)a3;
    (*(void (__fastcall **)(__int64 *, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, _DWORD *))(*a1 + 56))(
      a1,
      &v34,
      &v35,
      &v36,
      v12,
      a6,
      a7);
    goto LABEL_37;
  }
  if ( a8 == 106 )
  {
    v33 = (__int64)v14;
    v32 = a7 + 7;
    v31 = 366;
LABEL_52:
    v18 = 1;
    goto LABEL_53;
  }
  if ( a8 != 109 )
    goto LABEL_73;
  v26 = std::time_get<char,std::istreambuf_iterator<char>>::_Getint((__int64)a1, a3, a4, 1, 12, &a5, (__int64)v14) | *v16;
  *v16 = v26;
  if ( (v26 & 2) == 0 )
    a7[4] = a5 - 1;
LABEL_75:
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    *v16 |= 1u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
