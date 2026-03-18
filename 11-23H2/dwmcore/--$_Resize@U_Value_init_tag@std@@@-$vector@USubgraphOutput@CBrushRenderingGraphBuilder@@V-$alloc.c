/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E51E4
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B8534 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E523C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@PEAU12@_KAEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800E5328 (--$_Uninitialized_value_construct_n@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@s.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800ECAA4 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx

  v3 = (__int64)(a1[1] - *a1) >> 4;
  if ( a2 > v3 )
  {
    if ( a2 <= (__int64)(a1[2] - *a1) >> 4 )
      a1[1] = std::_Uninitialized_value_construct_n<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
                a1[1],
                a2 - v3);
    else
      std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(a1);
  }
  else if ( a2 < v3 )
  {
    v4 = *a1 + 16 * a2;
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v4, a1[1]);
    a1[1] = v4;
  }
}
