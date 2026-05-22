/*
 * XREFs of ??0CBitmapInfo@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x180037808
 * Callers:
 *     ??0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_N@Z @ 0x180037538 (--0CBitmapInfoFront@DirectComposition@@AEAA@PEAVCSurfaceFactory@1@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_.c)
 *     ??0CBitmapInfoBack@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSurface@1@@Z @ 0x1800377B8 (--0CBitmapInfoBack@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@W4DXGI_ALPHA_MODE@@PEAVCAtlasSu.c)
 *     ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC (-Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4D.c)
 * Callees:
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

DirectComposition::CBitmapInfo *__fastcall DirectComposition::CBitmapInfo::CBitmapInfo(
        DirectComposition::CBitmapInfo *this,
        struct DirectComposition::CSurfaceFactory *a2,
        enum DXGI_ALPHA_MODE a3,
        struct DirectComposition::CAtlasSurface *a4)
{
  __int64 v5; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a4;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &DirectComposition::CBitmapInfo::`vftable';
  *((_DWORD *)this + 10) = a3;
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    DirectComposition::CSurfaceFactory::AddRef(a2);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 8));
  return this;
}
