/*
 * XREFs of ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180043998
 * Callers:
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180043A44 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassEscape(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // esi

  v2 = *(_DWORD *)(a1 + 128);
  v3 = a1;
  if ( (v2 & 0x4000) != 0 && (a1 = 92LL, *(_WORD *)(v3 + 120) == 92) )
  {
    *(_DWORD *)(v3 + 116) = 92;
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)v3);
  }
  else
  {
    v4 = 0;
    if ( (v2 & 0x20000) != 0
      && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
                            v3,
                            0LL) )
    {
      return 2LL;
    }
    v5 = 0x7FFFFFFF;
    *(_DWORD *)(v3 + 116) = 0;
    do
    {
      if ( (unsigned __int16)(*(_WORD *)(v3 + 120) - 48) > 9u )
        break;
      a2 = (unsigned int)*(unsigned __int16 *)(v3 + 120) - 48;
      if ( *(_WORD *)(v3 + 120) == 47 )
        break;
      *(_DWORD *)(v3 + 116) = a2 + 10 * *(_DWORD *)(v3 + 116);
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)v3);
      --v5;
    }
    while ( v5 );
    if ( v5 == 0x7FFFFFFF )
    {
      LOBYTE(v4) = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(v3) != 0;
      return v4;
    }
    if ( *(_DWORD *)(v3 + 116) )
      std::_Dwm_Xregex_error(a1, a2);
  }
  return 1LL;
}
