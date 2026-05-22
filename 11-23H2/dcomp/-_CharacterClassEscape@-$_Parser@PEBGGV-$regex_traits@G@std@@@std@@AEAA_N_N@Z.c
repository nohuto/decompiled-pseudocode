/*
 * XREFs of ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180043A44
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041964 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180043998 (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 * Callees:
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x180041BFC (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180043AAC (--$lookup_classname@PEBG@-$_Regex_traits@G@std@@QEBAFPEBG0_N@Z.c)
 *     ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x180150120 (-_Add_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEAV-$_Node_class@GV-$regex_traits@.c)
 */

char __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_CharacterClassEscape(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // r9
  unsigned __int16 v5; // bp
  char v7; // al
  __int64 v8; // rbx
  __int64 v9; // r9

  if ( *a1 == a1[2] )
    return 0;
  v4 = *((_DWORD *)a1 + 28) >> 8;
  LOBYTE(v4) = BYTE1(*((_DWORD *)a1 + 28)) & 1;
  v5 = std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(a1[13], *a1, *a1 + 2LL, v4);
  if ( !v5 )
    return 0;
  if ( a2 )
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_class((__int64)(a1 + 8));
  v7 = std::ctype<unsigned short>::is(*(_QWORD *)(a1[13] + 8LL), 1LL, *((unsigned __int16 *)a1 + 60));
  v8 = a1[9];
  LOBYTE(v9) = v7;
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_elts(a1 + 8, v8, v5, v9);
  *(_WORD *)(v8 + 64) |= v5;
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
  return 1;
}
