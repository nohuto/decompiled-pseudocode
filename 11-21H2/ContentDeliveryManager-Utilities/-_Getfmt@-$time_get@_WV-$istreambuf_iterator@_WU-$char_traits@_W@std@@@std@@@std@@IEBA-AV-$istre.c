/*
 * XREFs of ?_Getfmt@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800E8D04
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800E92C0 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 * Callees:
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800A8A14 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getfmt(
        __int64 *a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v11; // rbp
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r12
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _BYTE *v15; // r14
  char v16; // al
  _DWORD *v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  char v20; // bp
  int v22; // [rsp+38h] [rbp-80h]
  int v23; // [rsp+40h] [rbp-78h]
  __int128 v24; // [rsp+50h] [rbp-68h] BYREF
  __int128 v25; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v26[72]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+10h] BYREF

  v11 = a5;
  v12 = **(_QWORD **)(a5 + 64);
  v28 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<wchar_t>>(&v28);
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
        v24 = *(_OWORD *)a4;
        v25 = *a3;
        LOBYTE(v23) = 0;
        LOBYTE(v22) = *v15;
        *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(v19 + 72))(
                           a1,
                           v26,
                           &v25,
                           &v24,
                           v11,
                           v17,
                           v18,
                           v22,
                           v23);
      }
      else if ( v16 == 32 )
      {
        while ( 1 )
        {
          v20 = *((_BYTE *)a3 + 8);
          if ( !v20 )
          {
            std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
            v20 = *((_BYTE *)a3 + 8);
          }
          if ( !*((_BYTE *)a4 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *a4 )
              break;
          }
          else if ( !*a4 )
          {
            break;
          }
          if ( !v20 )
            std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
          if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
                  v13,
                  72LL,
                  *((unsigned __int16 *)a3 + 5)) )
            break;
          std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
        }
        v11 = a5;
      }
      else
      {
        if ( !*((_BYTE *)a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
               v13,
               *((unsigned __int16 *)a3 + 5),
               0LL) != *v15 )
        {
          *v17 |= 2u;
          break;
        }
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      }
      v16 = *++v15;
    }
    while ( *v15 );
  }
  if ( !*((_BYTE *)a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*((_BYTE *)a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *a4 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( *a4 )
LABEL_36:
    *v17 |= 1u;
LABEL_37:
  *a2 = *a3;
  return a2;
}
