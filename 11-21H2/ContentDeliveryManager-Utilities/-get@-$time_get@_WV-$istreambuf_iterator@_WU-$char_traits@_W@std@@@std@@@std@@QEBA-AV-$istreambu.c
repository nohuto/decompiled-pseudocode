/*
 * XREFs of ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x1800EA538
 * Callers:
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800E7DE0 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180068C18 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800A8A14 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        __int64 *a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _WORD *a8,
        _WORD *a9)
{
  _OWORD *v11; // rbp
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r12
  int v14; // r13d
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _DWORD *v16; // rsi
  _WORD *v17; // rbx
  char v18; // bp
  char v19; // dl
  __int16 v20; // bp
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // bl
  bool v24; // zf
  int v26; // [rsp+38h] [rbp-80h]
  int v27; // [rsp+40h] [rbp-78h]
  __int128 v28; // [rsp+50h] [rbp-68h] BYREF
  __int128 v29; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v30[72]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v33; // [rsp+D0h] [rbp+18h] BYREF

  v11 = a2;
  v12 = **(_QWORD **)(a5 + 64);
  v33 = v12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = std::use_facet<std::ctype<wchar_t>>(&v33);
  v14 = 0;
  if ( v12 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  v16 = a6;
  v17 = a8;
  if ( a8 == a9 )
    goto LABEL_52;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
           v13,
           (unsigned __int16)*v17,
           0LL) != 37 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
             v13,
             72LL,
             (unsigned __int16)*v17) )
      {
        while ( 1 )
        {
          v18 = *((_BYTE *)a3 + 8);
          if ( !v18 )
          {
            std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
            v18 = *((_BYTE *)a3 + 8);
          }
          if ( !*((_BYTE *)a4 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *a4 )
              goto LABEL_29;
          }
          else if ( !*a4 )
          {
            goto LABEL_29;
          }
          if ( !v18 )
            std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
          if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
                  v13,
                  72LL,
                  *((unsigned __int16 *)a3 + 5)) )
            break;
          std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
        }
      }
      else
      {
        if ( !*((_BYTE *)a3 + 8) )
          std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
        if ( *((_WORD *)a3 + 5) != *v17 )
          goto LABEL_31;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
      }
      goto LABEL_29;
    }
    if ( ++v17 == a9 )
      break;
    LOBYTE(v14) = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                    v13,
                    (unsigned __int16)*v17,
                    0LL);
    v19 = 0;
    v20 = *(v17 - 1);
    if ( (unsigned __int8)(v14 - 35) <= 0x2Eu )
    {
      v21 = 0x500400000001LL;
      if ( _bittest64(&v21, (unsigned int)(v14 - 35)) )
      {
        if ( ++v17 == a9 )
        {
          if ( !*((_BYTE *)a3 + 8) )
            std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
          if ( *((_WORD *)a3 + 5) == v20 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
            v23 = *((_BYTE *)a3 + 8);
            if ( !v23 )
            {
              std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
              v23 = *((_BYTE *)a3 + 8);
            }
            if ( !*((_BYTE *)a4 + 8) )
              std::istreambuf_iterator<wchar_t>::_Peek(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( !*a4 )
                goto LABEL_43;
            }
            else if ( *a4 )
            {
LABEL_43:
              if ( !v23 )
                std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
              v24 = (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                      v13,
                      *((unsigned __int16 *)a3 + 5),
                      0LL) == (unsigned __int8)v14;
              goto LABEL_49;
            }
          }
LABEL_31:
          *v16 |= 2u;
          goto LABEL_51;
        }
        LOBYTE(a8) = v14;
        LOBYTE(v14) = (*(__int64 (__fastcall **)(struct std::_Facet_base *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                        v13,
                        (unsigned __int16)*v17,
                        0LL);
        v19 = (char)a8;
      }
    }
    v22 = *a1;
    v28 = *(_OWORD *)a4;
    v29 = *a3;
    LOBYTE(v27) = v19;
    LOBYTE(v26) = v14;
    *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(v22 + 72))(
                       a1,
                       v30,
                       &v29,
                       &v28,
                       a5,
                       v16,
                       a7,
                       v26,
                       v27);
    v14 = 0;
LABEL_29:
    if ( ++v17 == a9 )
      goto LABEL_51;
  }
  if ( !*((_BYTE *)a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  v24 = *((_WORD *)a3 + 5) == *(v17 - 1);
LABEL_49:
  if ( !v24 )
    goto LABEL_31;
  std::istreambuf_iterator<unsigned short>::_Inc((__int64 *)a3);
LABEL_51:
  v11 = a2;
LABEL_52:
  if ( !*((_BYTE *)a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*((_BYTE *)a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *a4 )
      goto LABEL_60;
  }
  else
  {
    if ( *a4 )
      goto LABEL_61;
LABEL_60:
    *v16 |= 1u;
  }
LABEL_61:
  *v11 = *a3;
  return v11;
}
