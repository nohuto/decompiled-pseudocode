/*
 * XREFs of ?ResumeDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x1800393DC
 * Callers:
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800395A0 (-ResumeDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x18003A090 (-ResumeDraw@CVirtualSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Image@@@@YAXAEAPEAUID2D1Image@@@Z @ 0x1800389B0 (--$ReleaseInterface@UID2D1Image@@@@YAXAEAPEAUID2D1Image@@@Z.c)
 *     ?ResumeDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1Image@@PEAUID2D1DrawingStateBlock@@AEBUtagRECT@@@Z @ 0x180039434 (-ResumeDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@PEAUID2D1Image@@PEAUID2D1Draw.c)
 */

void __fastcall DirectComposition::CBitmapInfoBack::ResumeDraw(DirectComposition::CBitmapInfoBack *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 144);
  DirectComposition::CAtlasSurface::ResumeDraw(
    *((DirectComposition::CAtlasSurface **)this + 2),
    *((struct ID2D1Bitmap **)this + 17),
    *((struct ID2D1Image **)this + 18),
    *((struct ID2D1DrawingStateBlock **)this + 19),
    (const struct tagRECT *)((char *)this + 56));
  ReleaseInterface<ID2D1Image>(v1);
  *((_BYTE *)this + 160) = 1;
}
