/*
 * XREFs of ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x180150568
 * Callers:
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180043BBC (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x180043710 (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_Begin_assert_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z @ 0x1801503A8 (-_Begin_assert_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_assert_group(
        __int64 a1,
        unsigned __int8 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_assert_group(
         a1 + 64,
         a2);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(a1);
  result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(
             a1 + 64,
             v3);
  *(_QWORD *)(a1 + 72) = v3;
  return result;
}
