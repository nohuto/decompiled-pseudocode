/*
 * XREFs of ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x180043710
 * Callers:
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042D54 (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18007D2C0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     ?_Do_assert_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAX_N@Z @ 0x180150568 (-_Do_assert_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAX_N@Z.c)
 *     ?_Do_noncapture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18015071C (-_Do_noncapture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  int v5; // ebx
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 8 )
  {
    v5 = 9;
  }
  else
  {
    v5 = 12;
    if ( (unsigned int)(v2 - 10) > 1 )
      v5 = 14;
  }
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7[3] = 0;
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  *(_QWORD *)v7 = &std::_Node_capture::`vftable';
  v7[2] = v5;
  *((_QWORD *)v7 + 4) = a2;
  return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v7);
}
