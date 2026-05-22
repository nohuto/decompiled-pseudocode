/*
 * XREFs of ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18015071C
 * Callers:
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180043BBC (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180042C58 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_noncapture_group(
        __int64 a1)
{
  __int64 v2; // rbx

  v2 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, 8);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(a1);
  return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(a1 + 64, v2);
}
