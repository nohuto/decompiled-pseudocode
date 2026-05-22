/*
 * XREFs of ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18004184C
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041964 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x180041AC4 (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 * Callees:
 *     ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042C00 (-_Add_str_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180150D2C (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
        __int64 a1,
        unsigned __int16 a2)
{
  __int64 v2; // rax
  unsigned __int16 v5; // ax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v2 + 8) != 6 || (*(_BYTE *)(v2 + 12) & 4) != 0 )
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_str_node();
  if ( (*(_DWORD *)(a1 + 16) & 0x100) != 0 )
  {
    v5 = std::ctype<unsigned short>::tolower(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x800) == 0 )
      return std::_Buf<unsigned short>::_Insert(*(_QWORD *)(a1 + 8) + 32LL, a2);
    v5 = std::_Regex_traits<unsigned short>::translate(*(_QWORD *)(a1 + 24), a2);
  }
  a2 = v5;
  return std::_Buf<unsigned short>::_Insert(*(_QWORD *)(a1 + 8) + 32LL, a2);
}
