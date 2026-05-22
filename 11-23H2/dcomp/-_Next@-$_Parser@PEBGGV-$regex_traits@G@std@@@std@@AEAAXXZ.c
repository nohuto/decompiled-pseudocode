/*
 * XREFs of ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158
 * Callers:
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041910 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHH@Z @ 0x1800419D8 (-_Do_digits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAHHH@Z.c)
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_ClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@_N@Z @ 0x180043998 (-_ClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@_N@Z.c)
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180043A44 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180043BBC (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180043594 (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(
        _QWORD *a1)
{
  _QWORD *v1; // r9
  _WORD *v2; // r11
  __int64 v4; // r10

  v1 = a1;
  if ( *a1 != a1[2] )
  {
    v2 = (_WORD *)*a1;
    if ( *(_WORD *)*a1 == 92
      && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(a1) )
    {
      v2 = (_WORD *)(v4 + 2);
    }
    *v1 = v2 + 1;
  }
  return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(v1);
}
