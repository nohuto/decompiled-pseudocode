/*
 * XREFs of ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24
 * Callers:
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042D54 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18007D2C0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x180150568 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 *     ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18015071C (-_Do_noncapture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_New_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z @ 0x180042C58 (-_New_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@W4_Node_type@2@@Z.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x180043710 (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x1800437AC (-_Begin_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ?_Else_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z @ 0x180086CD4 (-_Else_if@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@0@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 72);
  result = ((__int64 (*)(void))std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative)();
  if ( (_BYTE)result )
  {
    v4 = a1 + 64;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 124) != 124 )
      return result;
    v4 = a1 + 64;
    v6 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(a1 + 64, 8);
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(a1 + 64, v6);
  }
  result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_if(v4, v1);
  v5 = result;
  while ( *(_DWORD *)(a1 + 124) == 124 )
  {
    std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next(a1);
    if ( !(unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Alternative(a1) )
    {
      v7 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_New_node(v4, 8);
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(v4, v7);
    }
    result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Else_if(
               v4,
               v1,
               v5);
  }
  return result;
}
