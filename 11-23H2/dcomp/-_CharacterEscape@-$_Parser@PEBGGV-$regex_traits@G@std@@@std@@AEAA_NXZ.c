/*
 * XREFs of ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041964 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180043998 (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 * Callees:
 *     ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHH@Z @ 0x1800419D8 (-_Do_digits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAHHH@Z.c)
 *     ?_Do_ffn@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x180042FA4 (-_Do_ffn@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18004348C (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180043594 (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 *     ?_Do_ffnx@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x1801506F0 (-_Do_ffnx@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(
        __int64 a1)
{
  __int64 v1; // rbx
  _WORD *v2; // rdi
  unsigned int v3; // edx
  unsigned int v4; // r8d
  char v5; // di
  bool v6; // zf
  _WORD *v7; // r9
  _WORD *v8; // r10
  unsigned int v10; // edx
  __int64 v11; // r9

  v1 = a1;
  if ( *(_DWORD *)(a1 + 124) == -1 )
    std::_Dwm_Xregex_error();
  v2 = (_WORD *)(a1 + 120);
  if ( ((*(_DWORD *)(a1 + 128) & 0x10000) == 0
     || !(unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffn(
                            a1,
                            (unsigned __int16)*v2))
    && ((*(_DWORD *)(a1 + 128) & 0x8000) == 0
     || !(unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffnx(
                            a1,
                            (unsigned __int16)*v2)) )
  {
    if ( *v2 != 99 )
    {
      if ( *v2 == 120 )
      {
        if ( (*(_DWORD *)(a1 + 128) & 0x1000) != 0 )
        {
          std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
          if ( (unsigned int)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
                               v1,
                               16,
                               2u) )
            std::_Dwm_Xregex_error();
          goto LABEL_32;
        }
      }
      else if ( *v2 == 117 && (*(_DWORD *)(a1 + 128) & 0x800) != 0 )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        if ( (unsigned int)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
                             v1,
                             16,
                             4u) )
          std::_Dwm_Xregex_error();
        goto LABEL_32;
      }
LABEL_8:
      if ( (*(_DWORD *)(a1 + 128) & 0x2000) != 0
        && (unsigned int)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
                           a1,
                           8,
                           3u) != 3 )
      {
        if ( !*(_DWORD *)(v1 + 116) )
          std::_Dwm_Xregex_error();
        goto LABEL_32;
      }
      v3 = *(_DWORD *)(v1 + 128);
      v4 = (unsigned __int16)*v2;
      v5 = 1;
      if ( (v3 & 0x400000) != 0 )
      {
        if ( v4 == 68 || v4 == 83 || v4 == 87 || v4 == 99 || v4 == 100 || v4 == 115 )
          return 0;
        v6 = v4 == 119;
        goto LABEL_17;
      }
      if ( v4 > 0x2F )
      {
        if ( v4 != 63 )
        {
          if ( v4 == 91 || v4 == 92 || v4 == 94 )
            goto LABEL_18;
          if ( v4 != 123 )
          {
            if ( v4 == 124 )
              goto LABEL_18;
            if ( v4 != 125 )
              return 0;
          }
        }
      }
      else
      {
        if ( v4 == 47 || v4 == 34 )
        {
          v10 = HIBYTE(v3);
LABEL_63:
          v6 = (v10 & 1) == 0;
LABEL_17:
          if ( !v6 )
          {
LABEL_18:
            v7 = *(_WORD **)v1;
            *(_DWORD *)(v1 + 116) = v4;
            if ( v7 != *(_WORD **)(v1 + 16) )
            {
              v8 = v7;
              if ( *v7 == 92 )
              {
                if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(v1) )
                  v8 = (_WORD *)(v11 + 2);
              }
              *(_QWORD *)v1 = v8 + 1;
            }
            std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(v1);
            return v5;
          }
          return 0;
        }
        if ( v4 == 36 )
          goto LABEL_18;
        if ( v4 != 40 && v4 != 41 )
        {
          if ( v4 == 42 )
            goto LABEL_18;
          if ( v4 != 43 )
          {
            if ( v4 == 46 )
              goto LABEL_18;
            return 0;
          }
        }
      }
      v10 = v3 >> 23;
      goto LABEL_63;
    }
    if ( (*(_DWORD *)(a1 + 128) & 0x40000) == 0 )
      goto LABEL_8;
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    if ( !(unsigned __int8)std::ctype<unsigned short>::is(
                             *(_QWORD *)(*(_QWORD *)(v1 + 104) + 8LL),
                             259LL,
                             (unsigned __int16)*v2) )
      std::_Dwm_Xregex_error();
    a1 = v1;
    *(_DWORD *)(v1 + 116) = *v2 & 0x1F;
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
LABEL_32:
  if ( *(_DWORD *)(v1 + 116) > 0xFFFFu )
    std::_Dwm_Xregex_error();
  *(_DWORD *)(v1 + 116) = *(unsigned __int16 *)(v1 + 116);
  return 1;
}
