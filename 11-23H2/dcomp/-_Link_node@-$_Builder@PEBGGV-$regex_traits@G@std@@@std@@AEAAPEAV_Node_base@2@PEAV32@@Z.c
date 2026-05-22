/*
 * XREFs of ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x180043968
 * Callers:
 *     ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x180041AC4 (-_Add_rep@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXHH_N@Z.c)
 *     ?_Add_class@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXXZ @ 0x180041BFC (-_Add_class@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?_Add_str_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042C00 (-_Add_str_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180042C58 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042D54 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x180043710 (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x1800437AC (-_Begin_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ?_Begin_capture_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z @ 0x18007D35C (-_Begin_capture_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z.c)
 *     ?_Add_backreference@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXI@Z @ 0x180150048 (-_Add_backreference@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXI@Z.c)
 *     ?_Begin_assert_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z @ 0x1801503A8 (-_Begin_assert_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 16) = v2;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 24LL) = a2;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a2;
  result = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
