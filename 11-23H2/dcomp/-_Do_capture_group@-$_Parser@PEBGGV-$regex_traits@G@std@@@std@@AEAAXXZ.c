/*
 * XREFs of ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042D54
 * Callers:
 *     ?_Wrapped_disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180043BBC (-_Wrapped_disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 * Callees:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_End_group@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z @ 0x180043710 (-_End_group@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEAV_Node_base@2@@Z.c)
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x180043968 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x180043C18 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

int __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_capture_group(
        __int64 a1)
{
  int v2; // ebx
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  char v8; // dl
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 24) + 1;
  *(_DWORD *)(a1 + 24) = v2;
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4[2] = 0LL;
  v4[3] = 0LL;
  *v4 = &std::_Node_capture::`vftable';
  v4[1] = 13LL;
  *((_DWORD *)v4 + 8) = v2;
  v5 = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1 + 64, v4);
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Disjunction(a1);
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_End_group(a1 + 64, v5);
  std::vector<bool>::resize(a1 + 32, (unsigned int)(*(_DWORD *)(a1 + 24) + 1));
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(unsigned int *)(v5 + 32);
  v8 = v7 & 0x1F;
  v7 >>= 5;
  result = *(_DWORD *)(v6 + 4 * v7) | (1 << v8);
  *(_DWORD *)(v6 + 4 * v7) = result;
  return result;
}
