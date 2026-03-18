/*
 * XREFs of ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180089BBC
 * Callers:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000A4C4 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5CB4 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18020142C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18008B4E4 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct CVisual *__fastcall CVisual::GetTransformParent(CVisual *this, const struct CVisualTree *a2, bool *a3)
{
  bool v3; // bl
  __int64 v7; // rsi
  struct TransformParentData *v8; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  struct CTreeData *TreeData; // rax

  v3 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( this != *((CVisual **)a2 + 8) )
  {
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    v8 = TransformParentDataInternal;
    if ( TransformParentDataInternal )
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 184LL))(*(_QWORD *)TransformParentDataInternal);
    TreeData = CVisual::FindTreeData(this, a2);
    if ( !TreeData || *((_QWORD *)TreeData + 35) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)TreeData + 36) + 16LL) + 496LL) )
      v7 = 0LL;
  }
  if ( a3 )
  {
    if ( v8 && *((_BYTE *)v8 + 8) )
      v3 = 1;
    *a3 = v3;
  }
  return (const struct CVisual *)v7;
}
