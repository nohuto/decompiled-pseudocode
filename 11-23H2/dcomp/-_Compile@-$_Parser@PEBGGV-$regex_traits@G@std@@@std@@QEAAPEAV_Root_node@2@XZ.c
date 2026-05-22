/*
 * XREFs of ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18007D2C0
 * Callers:
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18007D000 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 * Callees:
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180042C58 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x180043710 (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_Begin_capture_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z @ 0x18007D35C (-_Begin_capture_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@I@Z.c)
 *     ??1?$_Tidy_guard@V?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@@std@@QEAA@XZ @ 0x18007D480 (--1-$_Tidy_guard@V-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z @ 0x18007D58C (-_Calculate_loop_simplicity@std@@YAXPEAV_Node_base@1@0PEAV_Node_rep@1@@Z.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Compile(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 64);
  v3 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_capture_group(
         a1 + 64,
         0LL);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(a1);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 != v5 )
    std::_Dwm_Xregex_error(v4, v5);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group((__int64)v1, v3);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node((__int64)v1, 21);
  v6 = *v1;
  *(_DWORD *)(v6 + 32) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a1 + 24) + 1;
  std::_Calculate_loop_simplicity((struct std::_Node_base *)v6, 0LL, 0LL);
  v8 = 0LL;
  std::_Tidy_guard<std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>>::~_Tidy_guard<std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>>(&v8);
  return v6;
}
