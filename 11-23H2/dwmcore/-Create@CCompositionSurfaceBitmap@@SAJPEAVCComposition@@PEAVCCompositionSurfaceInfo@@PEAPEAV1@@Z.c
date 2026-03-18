/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x1802267D0
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801DFDB0 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x180095210 (-SetSurfaceInfo@CCompositionSurfaceBitmap@@AEAAXPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800A3E04 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CCompositionSurfaceBitmap@@KAPEAX_K@Z @ 0x1800F580C (--2CCompositionSurfaceBitmap@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // ebx
  CCompositionSurfaceBitmap *v7; // rax
  __int64 v8; // rcx
  CCompositionSurfaceBitmap *v9; // rax
  CCompositionSurfaceBitmap *v10; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CCompositionSurfaceBitmap *)CCompositionSurfaceBitmap::operator new();
  if ( v7 && (v9 = CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(v7, a1), (v10 = v9) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CCompositionSurfaceBitmap *)((char *)v9 + 8));
    CCompositionSurfaceBitmap::SetSurfaceInfo(v10, a2);
    *a3 = v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Cu, 0LL);
  }
  return v3;
}
