/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1800ECA3C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18007AD18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v1 )
    LOBYTE(v1) = *(_QWORD *)(v1 + 8) != 0LL;
  return v1;
}
