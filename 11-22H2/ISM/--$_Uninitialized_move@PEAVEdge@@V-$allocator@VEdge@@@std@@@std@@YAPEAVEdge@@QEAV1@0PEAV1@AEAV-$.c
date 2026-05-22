/*
 * XREFs of ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801D680C
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801D6528 (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801D505C (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV-$allocator@VEdge@@@0@@.c)
 *     ??0Edge@@QEAA@$$QEAV0@@Z @ 0x1801D694C (--0Edge@@QEAA@$$QEAV0@@Z.c)
 */

Edge *__fastcall std::_Uninitialized_move<Edge *>(__int64 a1, __int64 a2, Edge *a3)
{
  __int64 i; // r11
  __int64 v6; // r11

  for ( i = a1; i != a2; i = v6 + 128 )
  {
    Edge::Edge(a3, i);
    a3 = (Edge *)((char *)a3 + 128);
  }
  std::_Destroy_range<std::allocator<Edge>>(a3, a3);
  return a3;
}
