/*
 * XREFs of ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC
 * Callers:
 *     ?Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z @ 0x18000CB34 (-Resize@CBitmapInfoFront@DirectComposition@@QEAAJII@Z.c)
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@_NPEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037618 (-BeginDrawInternal@CTileClump@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?EndDraw@CTileClump@DirectComposition@@QEAAXXZ @ 0x1800388BC (-EndDraw@CTileClump@DirectComposition@@QEAAXXZ.c)
 *     ?ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z @ 0x180038DEC (-ApplyUpdate@CBitmapInfoFront@DirectComposition@@QEAAXPEAVCBitmapInfoBack@2@@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 *     ?CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ @ 0x1800EA72C (-CommitUpdate@CBitmapInfoFront@DirectComposition@@QEAAJXZ.c)
 *     ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC (-BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEA.c)
 *     ?EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ @ 0x1800EB958 (-EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CBitmapInfoBack>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
