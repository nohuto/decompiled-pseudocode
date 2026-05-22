/*
 * XREFs of ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z @ 0x1800FBA6C
 * Callers:
 *     ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0 (-BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPH.c)
 *     ?EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z @ 0x180038C20 (-EndDraw@CAtlasSurface@DirectComposition@@QEAAXPEAUID2D1Bitmap@@_NPEAK@Z.c)
 *     ?EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ @ 0x1800397A0 (-EndDraw@CCompositionSurface@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReadTexture@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@@Z @ 0x1800F77F4 (-ReadTexture@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceFactory::ReadTexture(
        DirectComposition::CSurfaceFactory *this,
        struct IUnknown *a2)
{
  struct ID3D11Resource *v4; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL));
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
         &v4) >= 0 )
  {
    DirectComposition::CDxDevice::ReadTexture((DirectComposition::CDevice **)this + 1, v4);
    if ( v4 )
      ((void (__fastcall *)(struct ID3D11Resource *))v4->lpVtbl->Release)(v4);
  }
}
