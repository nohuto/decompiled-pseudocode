/*
 * XREFs of ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18008D614
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18005EF70 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180062F30 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063E50 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800672D0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x18006D920 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008083C (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800CBD00 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800CBD90 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CC0D4 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x1801CD854 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180213B14 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1802AA2F0 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x18008D818 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 */

void __fastcall CDirtyRegion::SetFullDirty(CDirtyRegion *this)
{
  char v2; // bl
  __int64 v3; // rsi

  if ( !*((_BYTE *)this + 4420) )
  {
    v2 = *((_BYTE *)this + 4422);
    v3 = *((_QWORD *)this + 1);
    CDirtyRegion::Initialize(this, 1);
    *((_BYTE *)this + 4422) = v2;
    if ( v2 )
      *((_DWORD *)this + 705) = 1;
    *((_QWORD *)this + 1) = v3;
  }
}
