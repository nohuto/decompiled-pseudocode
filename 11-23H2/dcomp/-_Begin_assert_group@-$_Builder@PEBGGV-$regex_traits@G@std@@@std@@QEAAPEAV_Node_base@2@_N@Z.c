/*
 * XREFs of ?_Begin_assert_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@_N@Z @ 0x1801503A8
 * Callers:
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x180150568 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 * Callees:
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x180043968 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_assert_group(
        __int64 a1,
        unsigned __int8 a2)
{
  int v3; // esi
  _DWORD *v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // r9

  v3 = a2;
  v4 = operator new(0x28uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v4[3] = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    v4[2] = v3 + 10;
    *(_QWORD *)v4 = &std::_Node_assert::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v6 = operator new(0x20uLL);
  if ( v6 )
  {
    v6[3] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *(_QWORD *)v6 = &std::_Node_endif::`vftable';
    v6[2] = 1;
  }
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v5);
  result = v5;
  *(_QWORD *)(v5 + 32) = v8;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(a1 + 8) = v8;
  return result;
}
