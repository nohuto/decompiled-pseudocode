/*
 * XREFs of ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041964
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18004184C (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1800419B0 (-_DecimalDigits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180043A44 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 *     ?_Add_backreference@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXI@Z @ 0x180150048 (-_Add_backreference@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXI@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_AtomEscape(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  int v5; // eax
  int v6; // eax

  if ( (*(_DWORD *)(a1 + 128) & 0x100) != 0
    && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits() )
  {
    v4 = *(int *)(a1 + 116);
    v5 = *(_DWORD *)(a1 + 128);
    if ( !(_DWORD)v4 )
    {
      if ( (v5 & 0x100000) == 0 )
        std::_Dwm_Xregex_error();
      return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
               a1 + 64,
               *(_WORD *)(a1 + 116));
    }
    if ( (v5 & 0x200) != 0 && (unsigned int)v4 > 9
      || *(unsigned int *)(a1 + 24) < v4
      || *(_QWORD *)(a1 + 56) <= v4
      || (v6 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * (v4 >> 5)), !_bittest(&v6, *(_DWORD *)(a1 + 116) & 0x1F)) )
    {
      std::_Dwm_Xregex_error();
    }
    return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_backreference(a1 + 64);
  }
  else
  {
    if ( (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterEscape(a1) )
      return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
               a1 + 64,
               *(_WORD *)(a1 + 116));
    if ( (*(_DWORD *)(a1 + 128) & 0x20000) == 0
      || (LOBYTE(v2) = 1,
          result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
                     a1,
                     v2),
          !(_BYTE)result) )
    {
      std::_Dwm_Xregex_error();
    }
  }
  return result;
}
