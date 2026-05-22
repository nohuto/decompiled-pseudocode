/*
 * XREFs of ??0CBitmapInfoBack@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x1800377B8
 * Callers:
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 * Callees:
 *     ??0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x180037808 (--0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurfac.c)
 */

DirectComposition::CBitmapInfoBack *__fastcall DirectComposition::CBitmapInfoBack::CBitmapInfoBack(
        DirectComposition::CBitmapInfoBack *this,
        struct DirectComposition::CSurfaceFactory *a2,
        enum DXGI_ALPHA_MODE a3,
        struct DirectComposition::CAtlasSurface *a4)
{
  DirectComposition::CBitmapInfo::CBitmapInfo(this, a2, a3, a4);
  *(_QWORD *)this = &DirectComposition::CBitmapInfoBack::`vftable';
  *((_DWORD *)this + 32) = 0x7FFFFFFF;
  *((_DWORD *)this + 30) = 0x7FFFFFFF;
  *((_DWORD *)this + 28) = 0x7FFFFFFF;
  *((_DWORD *)this + 26) = 0x7FFFFFFF;
  *((_DWORD *)this + 33) = 0x80000000;
  *((_DWORD *)this + 31) = 0x80000000;
  *((_DWORD *)this + 29) = 0x80000000;
  *((_DWORD *)this + 27) = 0x80000000;
  return this;
}
