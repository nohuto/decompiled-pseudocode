/*
 * XREFs of ?BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI5@Z @ 0x180037864
 * Callers:
 *     ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618 (-BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC (-BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEA.c)
 * Callees:
 *     ?UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z @ 0x180037924 (-UnionRectInternal@DirectComposition@@YA_NPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?BeginDraw@CAtlasSurface@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2W4DXGI_ALPHA_MODE@@PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI6PEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x1800379E8 (-BeginDraw@CAtlasSurface@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2W4DXGI_ALPHA_MODE@@P.c)
 */

__int64 __fastcall DirectComposition::CBitmapInfoBack::BeginDraw(
        DirectComposition::CBitmapInfoBack *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        bool a4,
        bool a5,
        struct DCOMPOSITION_GUTTERS *a6,
        void **a7,
        unsigned int *a8,
        unsigned int *a9)
{
  int v11; // esi
  const struct tagRECT *v12; // r9
  const struct tagRECT *v13; // r8
  const struct tagRECT *v14; // r9

  v11 = DirectComposition::CAtlasSurface::BeginDraw(
          *((DirectComposition::CAtlasSurface **)this + 2),
          a2,
          a3,
          a4,
          a5,
          *((enum DXGI_ALPHA_MODE *)this + 10),
          a6,
          a7,
          a8,
          a9,
          (struct ID2D1Bitmap **)this + 17,
          (struct ID2D1DrawingStateBlock **)this + 19);
  if ( v11 >= 0 )
  {
    *(struct tagRECT *)((char *)this + 56) = *a2;
    DirectComposition::UnionRectInternal(
      (DirectComposition::CBitmapInfoBack *)((char *)this + 72),
      (struct tagRECT *)((char *)this + 72),
      a2,
      v12);
    DirectComposition::UnionRectInternal(
      (DirectComposition::CBitmapInfoBack *)((char *)this + 88),
      (struct tagRECT *)((char *)this + 88),
      v13,
      v14);
    *((_BYTE *)this + 160) = 1;
  }
  return (unsigned int)v11;
}
