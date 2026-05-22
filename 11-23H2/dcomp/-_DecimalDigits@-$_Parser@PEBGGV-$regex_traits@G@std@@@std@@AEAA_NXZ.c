/*
 * XREFs of ?_DecimalDigits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x1800419B0
 * Callers:
 *     ?_AtomEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041964 (-_AtomEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Do_digits@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAHHH@Z @ 0x1800419D8 (-_Do_digits@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAHHH@Z.c)
 */

bool __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_DecimalDigits(
        __int64 a1)
{
  return (unsigned int)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_digits(
                         a1,
                         10LL,
                         0x7FFFFFFFLL) != 0x7FFFFFFF;
}
