/*
 * XREFs of ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801B5FC8
 * Callers:
 *     ??$?4U?$default_delete@VCVisualTreePath@@@std@@$0A@@?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180019710 (--$-4U-$default_delete@VCVisualTreePath@@@std@@$0A@@-$unique_ptr@VCVisualTreePath@@U-$default_de.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180040550 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800411BC (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ??1DrawVisualTreeData@CDrawingContext@@QEAA@XZ @ 0x180044104 (--1DrawVisualTreeData@CDrawingContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800A0C9C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A11C4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CVisualTreePath *__fastcall CVisualTreePath::`scalar deleting destructor'(CVisualTreePath *this)
{
  __int64 v2; // r8
  void *v3; // rcx
  bool v4; // zf

  v2 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4;
  if ( v2 )
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      0LL,
      v2);
  v3 = *(void **)this;
  v4 = *(_QWORD *)this == (_QWORD)this + 24;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    v3 = 0LL;
  operator delete(v3);
  operator delete(this);
  return this;
}
