/*
 * XREFs of ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800CBD00
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800CBD90 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1801E7D70 (-AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18008D614 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CC0D4 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::AddInvalidRects(
        CRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 69) )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(CRenderTarget *, __int128 *))this)(this, &v5) )
    {
      v6 = v5;
      CDirtyRegion::Add(a3, &v6);
    }
    else
    {
      CDirtyRegion::SetFullDirty(a3);
    }
    *((_BYTE *)this + 69) = 0;
  }
}
