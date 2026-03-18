/*
 * XREFs of ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180089B0C
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180086704 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x1800899E8 (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CBackdropVisualImage *__fastcall CTreeData::GetBackdropVisualImage(
        CTreeData *this,
        const struct CVisualTreePath *a2)
{
  __int64 i; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  for ( i = *((_QWORD *)this + 24); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 25) )
      return 0LL;
    v5 = *(_QWORD **)a2;
    v6 = *(_QWORD *)(*(_QWORD *)i + 1792LL);
    if ( (((*((_QWORD *)a2 + 1) - *(_QWORD *)a2) ^ (*(_QWORD *)(*(_QWORD *)i + 1800LL) - v6)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      break;
LABEL_11:
    ;
  }
  v7 = v6 - (_QWORD)v5;
  while ( (_QWORD *)((char *)v5 + v7) != *(_QWORD **)(*(_QWORD *)i + 1800LL) )
  {
    if ( *(_QWORD *)((char *)v5 + v7) != *v5 || *(_QWORD *)((char *)v5 + v7 + 8) != v5[1] )
      goto LABEL_11;
    v5 += 2;
  }
  *(_QWORD *)(*(_QWORD *)i + 1984LL) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 36) + 16LL) + 496LL);
  return *(struct CBackdropVisualImage **)i;
}
