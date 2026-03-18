/*
 * XREFs of ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x180014E10
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007AA90 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation(CDrawingContext *this)
{
  char v2; // al
  char v3; // dl

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  v3 = 0;
  if ( v2 )
    return *((_BYTE *)this + 8050) != 0;
  return v3;
}
