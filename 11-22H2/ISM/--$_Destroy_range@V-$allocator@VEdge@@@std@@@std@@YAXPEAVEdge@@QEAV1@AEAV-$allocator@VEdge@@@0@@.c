/*
 * XREFs of ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801D505C
 * Callers:
 *     ??1EdgyConnection@@UEAA@XZ @ 0x1801D50D0 (--1EdgyConnection@@UEAA@XZ.c)
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$0 @ 0x1801D663F (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-__--_1_--catch$0.c)
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801D680C (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1801D7F48 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 * Callees:
 *     ??1Edge@@QEAA@XZ @ 0x1801D50A0 (--1Edge@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Edge>>(Edge *this, Edge *a2)
{
  Edge *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Edge::~Edge(v3);
      v3 = (Edge *)((char *)v3 + 128);
    }
    while ( v3 != a2 );
  }
}
