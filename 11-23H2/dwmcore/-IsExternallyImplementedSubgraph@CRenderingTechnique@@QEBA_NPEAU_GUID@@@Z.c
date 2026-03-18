/*
 * XREFs of ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x1800B8118
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18007AD18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800B8094 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z @ 0x1800F3124 (-IsIntermediateUsedInBlur@CBrushRenderingGraphBuilder@@AEBA_NI@Z.c)
 * Callees:
 *     ?GetExternalImplementationId@CRenderingTechniqueFragment@@QEBAXPEAU_GUID@@@Z @ 0x1800B8150 (-GetExternalImplementationId@CRenderingTechniqueFragment@@QEBAXPEAU_GUID@@@Z.c)
 */

char __fastcall CRenderingTechnique::IsExternallyImplementedSubgraph(CRenderingTechnique *this, struct _GUID *a2)
{
  char v2; // bl

  v2 = 1;
  if ( (*((_BYTE *)this + 80) & 1) == 0 )
    return 0;
  if ( a2 )
    CRenderingTechniqueFragment::GetExternalImplementationId(*((CRenderingTechniqueFragment **)this + 1), a2);
  return v2;
}
