/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1730
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801D1444 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rdi
  _QWORD **v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  void *v6; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD ***)(v1 + 48);
    *v3[1] = 0LL;
    v4 = *v3;
    if ( *v3 )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        std::_Deallocate<16,0>(v4, 0x30uLL);
        v4 = v5;
      }
      while ( v5 );
    }
    std::_Deallocate<16,0>(*(void **)(v1 + 48), 0x30uLL);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
    std::_Deallocate<16,0>(v6, 0x40uLL);
}
