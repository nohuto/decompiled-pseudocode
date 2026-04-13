/*
 * XREFs of ?_Getfmt@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x180012098
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x180018390 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18004FEF0 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180061A50 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180062340 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getfmt(
        __int64 *a1,
        _OWORD *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _BYTE *v15; // r14
  char v16; // al
  _DWORD *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rax
  int v21; // [rsp+38h] [rbp-90h]
  int v22; // [rsp+40h] [rbp-88h]
  __int128 v23; // [rsp+60h] [rbp-68h] BYREF
  __int128 v24; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v25[72]; // [rsp+80h] [rbp-48h] BYREF

  v11 = a5;
  v12 = **(_QWORD **)(a5 + 64);
  a5 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&a5);
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
        v23 = *a4;
        v24 = *a3;
        LOBYTE(v22) = 0;
        LOBYTE(v21) = *v15;
        *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(v19 + 72))(
                           a1,
                           v25,
                           &v24,
                           &v23,
                           v11,
                           v17,
                           v18,
                           v21,
                           v22);
      }
      else if ( v16 == 32 )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)a3 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( !*((_BYTE *)a4 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a4 )
              break;
          }
          else if ( !*(_QWORD *)a4 )
          {
            break;
          }
          if ( !*((_BYTE *)a3 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a3);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
                  v13,
                  72LL,
                  *((unsigned __int16 *)a3 + 5)) )
            break;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
      }
      else
      {
        if ( !*((_BYTE *)a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek(a3);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
               v13,
               *((unsigned __int16 *)a3 + 5),
               0LL) != *v15 )
        {
          *v17 |= 2u;
          break;
        }
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      v16 = *++v15;
    }
    while ( *v15 );
  }
  if ( !*((_BYTE *)a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*((_BYTE *)a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( *(_QWORD *)a4 )
LABEL_36:
    *v17 |= 1u;
LABEL_37:
  *a2 = *a3;
  return a2;
}
