/*
 * XREFs of ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924
 * Callers:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ??1CTileClump@DirectComposition@@MEAA@XZ @ 0x180036EB4 (--1CTileClump@DirectComposition@@MEAA@XZ.c)
 *     ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x1800388BC (-EndDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C (--1CCompositionSurface@DirectComposition@@AEAA@XZ.c)
 *     ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC (-BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEA.c)
 *     ?EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ @ 0x1800EB958 (-EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Bitmap@@@@YAXAEAPEAUID2D1Bitmap@@@Z @ 0x18003898C (--$ReleaseInterface@UID2D1Bitmap@@@@YAXAEAPEAUID2D1Bitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Image@@@@YAXAEAPEAUID2D1Image@@@Z @ 0x1800389B0 (--$ReleaseInterface@UID2D1Image@@@@YAXAEAPEAUID2D1Image@@@Z.c)
 *     ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20 (-EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z.c)
 */

void __fastcall DirectComposition::CBitmapInfoBack::EndDraw(DirectComposition::CBitmapInfoBack *this)
{
  char *v1; // rbx

  v1 = (char *)this + 136;
  DirectComposition::CAtlasSurface::EndDraw(
    *((DirectComposition::CAtlasSurface **)this + 2),
    *((struct ID2D1Bitmap **)this + 17),
    *((_BYTE *)this + 160),
    (unsigned int *)this + 41);
  *((_BYTE *)this + 160) = 0;
  ReleaseInterface<ID2D1Bitmap>(v1);
  ReleaseInterface<ID2D1Image>((char *)this + 144);
  ReleaseInterface<ID2D1DrawingStateBlock>((char *)this + 152);
}
