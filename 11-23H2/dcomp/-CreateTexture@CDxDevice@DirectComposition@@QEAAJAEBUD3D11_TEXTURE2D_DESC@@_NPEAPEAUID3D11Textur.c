/*
 * XREFs of ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C
 * Callers:
 *     ?Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMAT@@_NIAEBU_GUID@@I@Z @ 0x1800E7D48 (-Initialize@CHolographicViewerProxy@DirectComposition@@QEAAJPEAVCSurfaceFactory@2@IIW4DXGI_FORMA.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 *     ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540 (-CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?CreateTexture@CScratchSurface@DirectComposition@@AEAAJPEAVCDxDevice@2@@Z @ 0x1800FAF28 (-CreateTexture@CScratchSurface@DirectComposition@@AEAAJPEAVCDxDevice@2@@Z.c)
 *     ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100 (-CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 * Callees:
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::CreateTexture(
        DirectComposition::CDevice **this,
        const struct D3D11_TEXTURE2D_DESC *a2,
        char a3,
        struct ID3D11Texture2D **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct ID3D11Texture2D *v10; // rcx
  const struct DirectComposition::CDxDevice *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  struct ID3D11Texture2D *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(v12, this);
  *a4 = 0LL;
  if ( a3 )
    v8 = (*(__int64 (__fastcall **)(DirectComposition::CDevice *, const struct D3D11_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(*(_QWORD *)this[6] + 40LL))(
           this[6],
           a2,
           0LL,
           &v13);
  else
    v8 = (*(__int64 (__fastcall **)(DirectComposition::CDevice *, const struct D3D11_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(*(_QWORD *)this[3] + 40LL))(
           this[3],
           a2,
           0LL,
           &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = v13;
  }
  else
  {
    v10 = 0LL;
    *a4 = v13;
    v13 = 0LL;
  }
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v12);
  return v9;
}
