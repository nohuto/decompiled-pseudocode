/*
 * XREFs of ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4
 * Callers:
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042FE0 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Do_ffn@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x180042FA4 (-_Do_ffn@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18004348C (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180043594 (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180043998 (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 *     ?_Do_ffnx@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NG@Z @ 0x1801506F0 (-_Do_ffnx@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NG@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(
        __int64 a1)
{
  int v1; // eax
  _WORD *v3; // r9
  _WORD *v4; // r10
  int v6; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r9

  v1 = *(_DWORD *)(a1 + 124);
  if ( v1 == 92 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    v6 = *(_DWORD *)(a1 + 128);
    if ( (v6 & 0x200000) != 0 )
      return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassEscape(a1);
    if ( (v6 & 0x10000) != 0
      && std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffn(
           a1,
           *(_WORD *)(a1 + 120))
      || (*(_DWORD *)(a1 + 128) & 0x8000) != 0
      && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ffnx(
                            a1,
                            *(unsigned __int16 *)(a1 + 120)) )
    {
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 116) = 92;
    }
    return 1LL;
  }
  if ( v1 == 91 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    v7 = *(int *)(a1 + 124);
    if ( (unsigned int)v7 <= 0x3D )
    {
      v8 = 0x2400400000000000LL;
      if ( _bittest64(&v8, v7) )
      {
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ex_class(
          a1,
          (unsigned int)v7);
        return 2LL;
      }
    }
    *(_DWORD *)(a1 + 116) = 91;
    return 1LL;
  }
  if ( v1 != 93 && v1 != -1 )
  {
    v3 = *(_WORD **)a1;
    *(_DWORD *)(a1 + 116) = *(unsigned __int16 *)(a1 + 120);
    if ( v3 != *(_WORD **)(a1 + 16) )
    {
      v4 = v3;
      if ( *v3 == 92 )
      {
        if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(a1) )
          v4 = (_WORD *)(v9 + 2);
      }
      *(_QWORD *)a1 = v4 + 1;
    }
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(a1);
    return 1LL;
  }
  return 0LL;
}
