/*
 * XREFs of ?ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCompositionColorPartner@@0PEAPEAUIDCompositionPrimitivePartner@@PEAPEAVCBitmapInfoFront@2@3PEAPEAVCVirtualSurface@2@@Z @ 0x1800F6A60
 * Callers:
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFCD0 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCo.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFE70 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_ea_1800EFE70.c)
 *     ?CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800EFFB0 (-CreatePrimitive@CDevice@DirectComposition@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_ea_1800EFFB0.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckAndGetCompositionSurfaceNoRef@CCompositionSurface@DirectComposition@@SAJPEAUIDCompositionSurface@@PEAPEAV12@@Z @ 0x1800EDD94 (-CheckAndGetCompositionSurfaceNoRef@CCompositionSurface@DirectComposition@@SAJPEAUIDCompositionS.c)
 */

__int64 __fastcall DirectComposition::CDevice::ValidatePrimitiveParameters(
        DirectComposition::CDevice *this,
        struct IDCompositionSurface *a2,
        struct IDCompositionColorPartner *a3,
        struct IDCompositionSurface *a4,
        struct IDCompositionPrimitivePartner **a5,
        struct DirectComposition::CBitmapInfoFront **a6,
        struct DirectComposition::CBitmapInfoFront **a7,
        struct DirectComposition::CVirtualSurface **a8)
{
  int v8; // ebx
  struct IDCompositionSurface *v10; // r11
  struct IDCompositionPrimitivePartner *v12; // rcx
  struct IDCompositionPrimitivePartner *v13; // rcx
  int v14; // eax
  struct DirectComposition::CDevice *v15; // rcx
  struct DirectComposition::CDevice *v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v8 = 0;
  v10 = a2;
  if ( !a5 )
    return (unsigned int)-2147024809;
  if ( a3 )
  {
    v17[0] = 0LL;
    DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)a3, v17, (unsigned int *)&a5);
    if ( v17[0] != this )
      return (unsigned int)-2147024809;
  }
  if ( v10 )
  {
    a5 = 0LL;
    v8 = DirectComposition::CCompositionSurface::CheckAndGetCompositionSurfaceNoRef(
           v10,
           (struct DirectComposition::CCompositionSurface **)&a5);
    if ( v8 < 0 )
      return (unsigned int)-2147024809;
    v12 = a5[5];
    if ( *(DirectComposition::CDevice **)(*((_QWORD *)v12 + 3) + 24LL) != this || *((_DWORD *)v12 + 10) != 1 )
      v8 = -2147024809;
    if ( v8 < 0 )
      return (unsigned int)v8;
    *a6 = v12;
  }
  if ( !a4 )
    return (unsigned int)v8;
  a5 = 0LL;
  v17[0] = 0LL;
  v8 = DirectComposition::CCompositionSurface::CheckAndGetCompositionSurfaceNoRef(
         a4,
         (struct DirectComposition::CCompositionSurface **)&a5);
  if ( v8 >= 0 )
  {
    v13 = a5[5];
    if ( *(DirectComposition::CDevice **)(*((_QWORD *)v13 + 3) + 24LL) == this )
    {
      *a7 = v13;
      return (unsigned int)v8;
    }
    return (unsigned int)-2147024809;
  }
  v14 = (**(__int64 (__fastcall ***)(struct IDCompositionSurface *, GUID *, struct DirectComposition::CDevice **))a4)(
          a4,
          &GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0,
          v17);
  v15 = v17[0];
  v8 = v14;
  if ( v14 < 0 )
  {
    v8 = -2147024809;
  }
  else
  {
    if ( *(DirectComposition::CDevice **)(*((_QWORD *)v17[0] + 13) + 24LL) != this )
      v8 = -2147024809;
    if ( v8 >= 0 )
      *a8 = v17[0];
  }
  if ( v15 )
    (*(void (__fastcall **)(struct DirectComposition::CDevice *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v8;
}
