/*
 * XREFs of ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D128
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001F500 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x18001FA80 (-do_get_date@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800200F0 (-do_get_time@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_year@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020340 (-do_get_year@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _Stolx @ 0x1800046C8 (_Stolx.c)
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006770 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008668 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B004 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rdi
  __int64 v11; // rdx
  char v12; // al
  char v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // rax
  int v19; // edi
  unsigned int v20; // ecx
  int v22; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 *v23; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int8 v24; // [rsp+30h] [rbp-30h] BYREF
  char v25; // [rsp+31h] [rbp-2Fh] BYREF
  char v26; // [rsp+4Fh] [rbp-11h] BYREF

  v7 = &v24;
  if ( std::istreambuf_iterator<char>::equal(a2, a3) )
    goto LABEL_7;
  LOBYTE(v11) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a2);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v11, 0LL);
  if ( v12 == 43 )
  {
    v24 = 43;
LABEL_6:
    v7 = (unsigned __int8 *)&v25;
    std::istreambuf_iterator<char>::_Inc(a2);
    goto LABEL_7;
  }
  if ( v12 == 45 )
  {
    v24 = 45;
    goto LABEL_6;
  }
LABEL_7:
  v13 = 0;
  if ( !std::istreambuf_iterator<char>::equal(a2, a3) )
  {
    do
    {
      LOBYTE(v14) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v14, 0LL) != 48 )
        break;
      v13 = 1;
      std::istreambuf_iterator<char>::_Inc(a2);
    }
    while ( !std::istreambuf_iterator<char>::equal(a2, a3) );
    if ( v13 )
      *v7++ = 48;
  }
  while ( !std::istreambuf_iterator<char>::equal(a2, a3) )
  {
    LOBYTE(v15) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a2);
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v15, 0LL);
    if ( (unsigned __int8)(v16 - 48) > 9u )
      break;
    *v7 = v16;
    v13 = 1;
    std::istreambuf_iterator<char>::_Inc(a2);
    v17 = v7 + 1;
    if ( v7 >= (unsigned __int8 *)&v26 )
      v17 = v7;
    v7 = v17;
  }
  v18 = &v24;
  v22 = 0;
  if ( v13 )
    v18 = v7;
  *v18 = 0;
  v19 = Stolx(&v24, &v23, 0xAu, &v22);
  v20 = std::istreambuf_iterator<char>::equal(a2, a3) != 0;
  if ( v23 == &v24 || v22 || v19 < a4 || a5 < v19 )
    v20 |= 2u;
  else
    *a6 = v19;
  return v20;
}
