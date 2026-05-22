/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x18007E3EC
 * Callers:
 *     ??_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z @ 0x18002A2D0 (--_ECBitmapInfoFront@DirectComposition@@UEAAPEAXI@Z.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 *     ??1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ @ 0x180030F54 (--1CTexturedRectanglePrimitive@DirectComposition@@MEAA@XZ.c)
 *     ??1CPrimitive@DirectComposition@@MEAA@XZ @ 0x180032364 (--1CPrimitive@DirectComposition@@MEAA@XZ.c)
 *     ??1CTileClump@DirectComposition@@MEAA@XZ @ 0x180036EB4 (--1CTileClump@DirectComposition@@MEAA@XZ.c)
 *     ?Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAW4D2D1_EXTEND_MODE@@PEAUIDCompositionSurface@@_NPEAPEAV12@@Z @ 0x18003745C (-Create@CBitmapInfoFront@DirectComposition@@SAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@W4DXGI_ALP.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ??1CCompositionSurface@DirectComposition@@AEAA@XZ @ 0x18007808C (--1CCompositionSurface@DirectComposition@@AEAA@XZ.c)
 *     ?Release@CDeviceTextureManager@DirectComposition@@UEAAKXZ @ 0x180098E10 (-Release@CDeviceTextureManager@DirectComposition@@UEAAKXZ.c)
 *     ?SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z @ 0x1800F8480 (-SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z.c)
 *     ??$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComposition@@@Z @ 0x1800FEB00 (--$ReleaseInterface@VCYCbCrBitmapInfo@DirectComposition@@@@YAXAEAPEAVCYCbCrBitmapInfo@DirectComp.c)
 *     ?Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAVCYCbCrSurface@2@PEAPEAV12@@Z @ 0x1800FECCC (-Create@CYCbCrBitmapInfo@DirectComposition@@SAJPEAVCSurfaceFactory@2@VSizeU@2@W4DXGI_FORMAT@@W4D.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBaseT<IMILRefCount>::InternalRelease(volatile signed __int32 *a1)
{
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v5; // rcx

  v2 = a1 + 2;
  v3 = _InterlockedDecrement(a1 + 2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 + 2));
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v5 = *(_QWORD *)a1;
      --*v2;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(v5 + 16))(a1, 1LL);
    }
  }
  return v3;
}
