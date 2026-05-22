/*
 * XREFs of ?CopySurface@CAtlasSurfacePool@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E9778
 * Callers:
 *     ?CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800E924C (-CopySurface@CAtlasSurface@DirectComposition@@QEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E9960 (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@QEAAJPEAUID2D1DeviceContext@@W4DXGI_ALPHA_MOD.c)
 * Callees:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAtlasSurfacePool::CopySurface(
        DirectComposition::CAtlasSurfacePool *this,
        struct ID3D11Resource *a2,
        unsigned int a3,
        int a4,
        struct ID3D11Resource *a5)
{
  const struct tagRECT *v5; // rbx

  v5 = (const struct tagRECT *)a5;
  if ( SLODWORD(a5[1].lpVtbl) > SLODWORD(a5->lpVtbl) && SHIDWORD(a5[1].lpVtbl) > SHIDWORD(a5->lpVtbl) )
  {
    (***((void (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 2))(
      *((_QWORD *)this + 2),
      &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
      &a5);
    DirectComposition::CDxDevice::CopySurface(
      (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
      a2,
      a3,
      a4,
      a5,
      v5,
      *(struct DirectComposition::CScratchSurfaceManager **)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 304LL));
    if ( a5 )
      ((void (__fastcall *)(struct ID3D11Resource *))a5->lpVtbl->Release)(a5);
  }
}
