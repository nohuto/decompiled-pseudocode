/*
 * XREFs of ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618
 * Callers:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE024 (-ReclumpRect@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNo.c)
 * Callees:
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 *     ?BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI5@Z @ 0x180037864 (-BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_G.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 */

__int64 __fastcall DirectComposition::CTileClump::BeginDrawInternal(
        __int64 a1,
        _DWORD *a2,
        const struct _GUID *a3,
        bool a4,
        void **a5,
        unsigned int *a6,
        unsigned int *a7,
        struct DCOMPOSITION_GUTTERS *a8)
{
  DirectComposition::CBitmapInfoBack **v8; // rdi
  __int64 v10; // r9
  LONG v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  struct tagRECT v16; // [rsp+50h] [rbp-18h] BYREF

  v8 = (DirectComposition::CBitmapInfoBack **)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 48);
  v16.left = *a2 - *(_DWORD *)(a1 + 56);
  v16.top = a2[1] - *(_DWORD *)(a1 + 60);
  v16.right = a2[2] - *(_DWORD *)(a1 + 56);
  v12 = a2[3] - *(_DWORD *)(a1 + 60);
  v13 = *(_QWORD *)(a1 + 72);
  v16.bottom = v12;
  v14 = DirectComposition::CBitmapInfoFront::CreateInPlaceUpdate(v13, &v16, 2LL, v10, v8, a8);
  if ( v14 < 0 || (v14 = DirectComposition::CBitmapInfoBack::BeginDraw(*v8, &v16, a3, 0, a4, a8, a5, a6, a7), v14 < 0) )
    ReleaseInterface<DirectComposition::CBitmapInfoBack>(v8);
  return (unsigned int)v14;
}
