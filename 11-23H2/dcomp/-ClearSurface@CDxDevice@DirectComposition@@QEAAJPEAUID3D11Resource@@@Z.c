/*
 * XREFs of ?ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z @ 0x1800F753C
 * Callers:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0 (-CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z.c)
 *     ?Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDevice@234@HHW4DirectXPixelFormat@DirectX@Graphics@4@W4DirectXAlphaMode@894@M_N@Z @ 0x180154F20 (-Initialize@VisualCapture@Composition@UI@Windows@@QEAAJPEAVVisual@234@0PEAVCompositionGraphicsDe.c)
 * Callees:
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::ClearSurface(
        DirectComposition::CDevice **this,
        struct ID3D11Resource *a2)
{
  int v4; // ebx
  DirectComposition::CDevice *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  const struct DirectComposition::CDxDevice *v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0LL;
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(v8, this);
  v4 = (*(__int64 (__fastcall **)(DirectComposition::CDevice *, struct ID3D11Resource *, _QWORD, __int64 *))(*(_QWORD *)this[3] + 72LL))(
         this[3],
         a2,
         0LL,
         &v7);
  if ( v4 >= 0 )
  {
    v5 = this[9];
    v9 = 0LL;
    (*(void (__fastcall **)(DirectComposition::CDevice *, __int64, __int128 *))(*(_QWORD *)v5 + 400LL))(v5, v7, &v9);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v8);
  return (unsigned int)v4;
}
