/*
 * XREFs of ?do_get_time@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180019280
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x180012308 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18004FF40 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061AA0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180062390 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_time(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v11; // rbx
  __int64 v12; // r14
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  _DWORD *v14; // r15
  int v15; // eax
  _DWORD *v16; // rbx
  bool v17; // zf
  _BYTE *v18; // rsi

  v11 = **(_QWORD **)(a5 + 64);
  a5 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&a5);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = a7;
  v15 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(a1, a3, a4, 0, 23, a7 + 2, v12);
  v16 = a6;
  v17 = (v15 | *a6) == 0;
  *a6 |= v15;
  v18 = (_BYTE *)(a3 + 8);
  if ( !v17 )
    goto LABEL_9;
  if ( !*v18 )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
         v12,
         *(unsigned __int16 *)(a3 + 10),
         0LL) == 58 )
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              a3,
              a4,
              0,
              59,
              v14 + 1,
              v12);
  }
  else
  {
LABEL_9:
    *v16 |= 2u;
  }
  if ( *v16 )
    goto LABEL_15;
  if ( !*v18 )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
         v12,
         *(unsigned __int16 *)(a3 + 10),
         0LL) != 58 )
  {
LABEL_15:
    *v16 |= 2u;
  }
  else
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(a1, a3, a4, 0, 59, v14, v12);
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
