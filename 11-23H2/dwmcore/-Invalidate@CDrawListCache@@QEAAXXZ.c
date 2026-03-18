/*
 * XREFs of ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800A9AE8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000F370 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180054790 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180072B60 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18007D4D0 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007D580 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x1800A912C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z @ 0x1800E94FC (-InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@II@Z.c)
 *     ?NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801FD2F0 (-NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1800732B0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 */

void __fastcall CDrawListCache::Invalidate(CDrawListCache *this)
{
  if ( *((_QWORD *)this + 4) )
  {
    if ( *((_BYTE *)this + 102) )
      ++dword_1803E5AFC;
    else
      ++dword_1803E5AF0;
    *((_QWORD *)this + 4) = 0LL;
    CDrawListCache::ReleaseDrawListEntries(this);
    *((_WORD *)this + 50) = 0;
    *((_BYTE *)this + 102) = 0;
  }
}
