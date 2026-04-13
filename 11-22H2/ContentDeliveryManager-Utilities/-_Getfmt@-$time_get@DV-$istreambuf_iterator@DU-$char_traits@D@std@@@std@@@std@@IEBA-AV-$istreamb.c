/*
 * XREFs of ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x18001D6E0
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001FC80 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x180006874 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??D?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBAAEBDXZ @ 0x180006E54 (--D-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBAAEBDXZ.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180008D70 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000B704 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getfmt(
        __int64 *a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v11; // r13
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _BYTE *v15; // rsi
  char v16; // al
  _DWORD *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  int v23; // [rsp+38h] [rbp-90h]
  int v24; // [rsp+40h] [rbp-88h]
  __int128 v25; // [rsp+60h] [rbp-68h] BYREF
  __int128 v26; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v27[72]; // [rsp+80h] [rbp-48h] BYREF

  v11 = a5;
  v12 = **(_QWORD **)(a5 + 64);
  a5 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<char>>(&a5);
  if ( v12 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  v15 = a8;
  v16 = *a8;
  v17 = a6;
  if ( *a8 )
  {
    v18 = a7;
    do
    {
      if ( v16 == 37 )
      {
        v19 = *a1;
        ++v15;
        v25 = *(_OWORD *)a4;
        v26 = *(_OWORD *)a3;
        LOBYTE(v24) = 0;
        LOBYTE(v23) = *v15;
        *(_OWORD *)a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(v19 + 72))(
                                     a1,
                                     v27,
                                     &v26,
                                     &v25,
                                     v11,
                                     v17,
                                     v18,
                                     v23,
                                     v24);
      }
      else
      {
        v20 = a3;
        if ( v16 == 32 )
        {
          while ( !std::istreambuf_iterator<char>::equal(v20, a4)
               && (*(_BYTE *)(*((_QWORD *)v13 + 3)
                            + 2LL * *(unsigned __int8 *)std::istreambuf_iterator<char>::operator*(a3)) & 0x48) != 0 )
          {
            std::istreambuf_iterator<char>::_Inc(a3);
            v20 = a3;
          }
        }
        else
        {
          LOBYTE(v21) = *(_BYTE *)std::istreambuf_iterator<char>::operator*(a3);
          if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(
                 v13,
                 v21,
                 0LL) != *v15 )
          {
            *v17 |= 2u;
            break;
          }
          std::istreambuf_iterator<char>::_Inc(a3);
        }
      }
      v16 = *++v15;
    }
    while ( *v15 );
  }
  if ( std::istreambuf_iterator<char>::equal(a3, a4) )
    *v17 |= 1u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
