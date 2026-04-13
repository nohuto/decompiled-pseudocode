/*
 * XREFs of ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020860
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006E54 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008D70 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D8DC (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get_time(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  _DWORD *v14; // r14
  int v15; // eax
  _DWORD *v16; // rbx
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rdx

  v11 = **(_QWORD **)(a5 + 64);
  a5 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<char>>(&a5);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = a7;
  v15 = std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 0, 23, a7 + 2, (__int64)v12);
  v16 = a6;
  v17 = (v15 | *a6) == 0;
  *a6 |= v15;
  if ( v17
    && (LOBYTE(v18) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3),
        (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v12 + 80LL))(
          v12,
          v18,
          0LL) == 58) )
  {
    std::istreambuf_iterator<char>::_Inc(a3);
    *v16 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 0, 59, v14 + 1, (__int64)v12);
  }
  else
  {
    *v16 |= 2u;
  }
  if ( *v16
    || (LOBYTE(v19) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3),
        (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v12 + 80LL))(
          v12,
          v19,
          0LL) != 58) )
  {
    *v16 |= 2u;
  }
  else
  {
    std::istreambuf_iterator<char>::_Inc(a3);
    *v16 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 0, 59, v14, (__int64)v12);
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
