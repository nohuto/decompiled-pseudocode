/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAXPEAVCDepthSortingLayer@@QEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x180192104
 * Callers:
 *     ??_GCDepthSortedVisualCollection@@QEAAPEAXI@Z @ 0x180192C0C (--_GCDepthSortedVisualCollection@@QEAAPEAXI@Z.c)
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1801B68CC (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAPEAVCDepthSortingLayer@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x180247468 (--$_Uninitialized_move@PEAVCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x180247988 (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CDepthSortingLayer>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *(_QWORD *)v3 )
      {
        std::_Deallocate<16,0>(*(void **)v3, (*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) & 0xFFFFFFFFFFFFFFFCuLL);
        *(_QWORD *)v3 = 0LL;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 16) = 0LL;
      }
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
}
