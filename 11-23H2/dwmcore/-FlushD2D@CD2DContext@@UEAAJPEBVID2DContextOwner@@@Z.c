/*
 * XREFs of ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x180019EF0
 * Callers:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180019EAC (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180278F5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x18029F49C (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x180019F3C (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180074D40 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD2DContext::FlushD2D(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi

  CD2DContext::FlushDrawList(this);
  v3 = CD2DContext::FlushD2DInternal(this);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x320u, 0LL);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v5, 0LL);
}
