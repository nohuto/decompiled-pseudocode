/*
 * XREFs of ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000A4C4
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180089BBC (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual **this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  const struct CTreeData *result; // rax
  bool v5; // si
  CVisual *TransformParent; // rax

  result = 0LL;
  v5 = 0;
  if ( this != *((CVisual ***)a2 + 8) )
  {
    TransformParent = CVisual::GetTransformParent((CVisual *)this, a2, 0LL);
    if ( TransformParent )
    {
      result = CVisual::FindTreeData(TransformParent, a2);
      v5 = 1;
    }
    else
    {
      result = CVisual::FindTreeData(this[11], a2);
    }
  }
  if ( a4 )
    *a4 = v5;
  return result;
}
