/*
 * XREFs of ?_Begin_if@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Node_base@2@PEAV32@@Z @ 0x1800437AC
 * Callers:
 *     ?_Disjunction@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042E24 (-_Disjunction@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x180043968 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

_DWORD *__fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Begin_if(
        __int64 a1,
        __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  HANDLE v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  _DWORD *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5[3] = 0;
  *((_QWORD *)v5 + 2) = 0LL;
  *((_QWORD *)v5 + 3) = 0LL;
  v5[2] = 17;
  *(_QWORD *)v5 = &std::_Node_endif::`vftable';
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v5);
  v7 = GetProcessHeap();
  v8 = HeapAlloc(v7, 0, 0x30uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v8[3] = 0;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  v8[2] = 16;
  *(_QWORD *)v8 = &std::_Node_if::`vftable';
  *((_QWORD *)v8 + 4) = v6;
  v10 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL) = v8;
  *((_QWORD *)v8 + 3) = *(_QWORD *)(v10 + 24);
  result = v6;
  *(_QWORD *)(v10 + 24) = v9;
  *((_QWORD *)v9 + 2) = v10;
  return result;
}
