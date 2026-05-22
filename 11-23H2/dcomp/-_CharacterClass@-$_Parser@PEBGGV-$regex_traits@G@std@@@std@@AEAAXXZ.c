/*
 * XREFs of ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041910
 * Callers:
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x180041BFC (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Add_char_to_bitmap@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x1800435CC (-_Add_char_to_bitmap@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClass(
        __int64 a1)
{
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_class(a1 + 64);
  if ( *(_DWORD *)(a1 + 124) == 94 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) ^= 1u;
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  }
  if ( (*(_DWORD *)(a1 + 128) & 0x20000000) != 0 && *(_DWORD *)(a1 + 124) == 93 )
  {
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_bitmap(a1 + 64);
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  }
  return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassRanges(a1);
}
