/*
 * XREFs of ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801AAB4C
 * Callers:
 *     ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AA8CC (--$_Emplace_reallocate@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801A9430 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV-$allocator@VEdge@@@0@@.c)
 *     ??0Edge@@QEAA@$$QEAV0@@Z @ 0x1801AAD4C (--0Edge@@QEAA@$$QEAV0@@Z.c)
 */

Edge *__fastcall std::_Uninitialized_move<Edge *>(__int64 a1, __int64 a2, Edge *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r11

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      Edge::Edge(a3, v5);
      a3 = (Edge *)((char *)a3 + 128);
      v5 = v6 + 128;
    }
    while ( v5 != v7 );
  }
  std::_Destroy_range<std::allocator<Edge>>(a3, a3);
  return a3;
}
