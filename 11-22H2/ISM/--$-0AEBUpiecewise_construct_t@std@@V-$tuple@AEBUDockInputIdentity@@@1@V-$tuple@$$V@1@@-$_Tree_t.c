/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUDockInputIdentity@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUDockInputIdentity@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801A8F6C
 * Callers:
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x1801A9794 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UDockInputInfo@@U-$less@UDo.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD **a5)
{
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = operator new(0x90uLL);
  a1[1] = v7;
  v8 = *a5;
  v7[2] = **a5;
  *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 2);
  memset_0((char *)v7 + 56, 0, 0x58uLL);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
