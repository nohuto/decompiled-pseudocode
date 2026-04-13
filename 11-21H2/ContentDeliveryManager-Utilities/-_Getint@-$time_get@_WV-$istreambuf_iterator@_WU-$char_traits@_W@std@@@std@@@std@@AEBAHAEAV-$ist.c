/*
 * XREFs of ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800E8F80
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800E92C0 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 *     ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800E9860 (-do_get_date@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get_time@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800EA1A0 (-do_get_time@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get_year@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800EA3F0 (-do_get_year@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     _Stolx @ 0x1800046C8 (_Stolx.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // r14
  char v10; // al
  char v11; // r12
  unsigned int v12; // esi
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // rax
  int v15; // r14d
  unsigned __int8 v16; // al
  int v18; // [rsp+20h] [rbp-40h] BYREF
  int v19; // [rsp+24h] [rbp-3Ch]
  unsigned __int8 *v20; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v21; // [rsp+30h] [rbp-30h]
  unsigned __int8 v22; // [rsp+38h] [rbp-28h] BYREF
  char v23; // [rsp+39h] [rbp-27h] BYREF
  char v24; // [rsp+57h] [rbp-9h] BYREF

  v7 = &v22;
  v19 = a4;
  v21 = a6;
  if ( !*(_BYTE *)(a2 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a3 )
      goto LABEL_16;
  }
  else if ( !*(_QWORD *)a3 )
  {
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(a2 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
          a7,
          *(unsigned __int16 *)(a2 + 10),
          0LL);
  if ( v10 == 43 )
  {
    v22 = 43;
LABEL_15:
    v7 = (unsigned __int8 *)&v23;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a2);
    goto LABEL_16;
  }
  if ( v10 == 45 )
  {
    v22 = 45;
    goto LABEL_15;
  }
LABEL_16:
  v11 = 0;
  v12 = 1;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_QWORD *)a2 )
    {
      if ( *(_QWORD *)a3 )
        break;
    }
    else if ( !*(_QWORD *)a3 )
    {
      break;
    }
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
           a7,
           *(unsigned __int16 *)(a2 + 10),
           0LL) != 48 )
      break;
    v11 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a2);
  }
  if ( v11 )
    *v7++ = 48;
  while ( 1 )
  {
    v13 = v7;
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
    if ( *(_QWORD *)a2 )
    {
      if ( *(_QWORD *)a3 )
        break;
    }
    else if ( !*(_QWORD *)a3 )
    {
      break;
    }
    if ( !*(_BYTE *)(a2 + 8) )
      std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
            a7,
            *(unsigned __int16 *)(a2 + 10),
            0LL);
    if ( (unsigned __int8)(v16 - 48) > 9u )
      break;
    *v7 = v16;
    v11 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a2);
    ++v7;
    if ( v13 >= (unsigned __int8 *)&v24 )
      v7 = v13;
  }
  v14 = &v22;
  v18 = 0;
  if ( v11 )
    v14 = v7;
  *v14 = 0;
  v15 = Stolx(&v22, &v20, 0xAu, &v18);
  if ( !*(_BYTE *)(a2 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a2);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( *(_QWORD *)a2 )
  {
    if ( !*(_QWORD *)a3 )
LABEL_53:
      v12 = 0;
  }
  else if ( *(_QWORD *)a3 )
  {
    goto LABEL_53;
  }
  if ( v20 == &v22 || v18 || v15 < v19 || a5 < v15 )
    v12 |= 2u;
  else
    *v21 = v15;
  return v12;
}
