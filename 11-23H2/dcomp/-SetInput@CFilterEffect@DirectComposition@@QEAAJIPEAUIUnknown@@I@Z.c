/*
 * XREFs of ?SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z @ 0x1800F829C
 * Callers:
 *     ?SetInput@?QIDCompositionBlendEffect@@CBlendEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z @ 0x1800F55B0 (-SetInput@-QIDCompositionBlendEffect@@CBlendEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z.c)
 *     ?SetInput@?QIDCompositionCompositeEffect@@CCompositeEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z @ 0x1800F55D0 (-SetInput@-QIDCompositionCompositeEffect@@CCompositeEffect@DirectComposition@@UEAAJIPEAUIUnknown.c)
 *     ?SetInput@?QIDCompositionFilterEffect@@CArithmeticCompositeEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z @ 0x1800F55F0 (-SetInput@-QIDCompositionFilterEffect@@CArithmeticCompositeEffect@DirectComposition@@UEAAJIPEAUI.c)
 *     ?SetInput@?QIDCompositionFloodEffect@@CFloodEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z @ 0x1800F5610 (-SetInput@-QIDCompositionFloodEffect@@CFloodEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z.c)
 *     ?SetInput@?QIDCompositionTurbulenceEffect@@CTurbulenceEffect@DirectComposition@@UEAAJIPEAUIUnknown@@I@Z @ 0x1800F5630 (-SetInput@-QIDCompositionTurbulenceEffect@@CTurbulenceEffect@DirectComposition@@UEAAJIPEAUIUnkno.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnknown@@PEAUtagRECT@@@Z @ 0x1800F7FAC (-GetSurfaceProperties@CFilterEffect@DirectComposition@@IEAAJPEAVCBitmapInfoFront@2@PEAPEAUIUnkno.c)
 *     ?SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z @ 0x1800F8480 (-SetSurfaceReferenceAtIndex@CFilterEffect@DirectComposition@@IEAAXIPEAVCBitmapInfoFront@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CFilterEffect::SetInput(
        DirectComposition::CFilterEffect *this,
        unsigned int a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int64 v4; // rax
  struct DirectComposition::CBitmapInfoFront *v5; // r14
  __int64 v7; // r12
  struct IUnknown *v8; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  DirectComposition::CFilterEffect *v12; // rcx
  int SurfaceProperties; // edi
  struct DirectComposition::CDevice *v15; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-18h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  struct IUnknown *v19; // [rsp+80h] [rbp+40h] BYREF

  v19 = a3;
  v4 = *((_QWORD *)this + 8);
  v5 = 0LL;
  v7 = a4;
  v8 = a3;
  v17 = 0LL;
  v10 = (v4 + 8) & -(__int64)(v4 != 0);
  if ( v10 )
    v11 = v10 - 8;
  else
    v11 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v11, &v15, (unsigned int *)&v18);
  v16 = (_QWORD *)((char *)v15 + 96);
  DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v15 + 96));
  if ( v8 )
  {
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_e32fd191_37f7_4bc9_b1fd_0e29678d0703,
           &v18) < 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct DirectComposition::CDevice **))v8->lpVtbl->QueryInterface)(
             v8,
             &GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a,
             &v15) >= 0 )
      {
        v5 = (struct DirectComposition::CBitmapInfoFront *)*((_QWORD *)v15 + 5);
        SurfaceProperties = DirectComposition::CFilterEffect::GetSurfaceProperties(v12, v5, &v19, &v17);
        (*(void (__fastcall **)(struct DirectComposition::CDevice *))(*(_QWORD *)v15 + 16LL))(v15);
        if ( SurfaceProperties < 0 )
          goto LABEL_14;
        v8 = v19;
      }
    }
    else
    {
      v8 = (struct IUnknown *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  SurfaceProperties = DirectComposition::CResourceProxy::SetReferenceProperty(
                        (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 8) + 8LL),
                        a2 & 0x3FFFFFFF | 0x40000000,
                        v8);
  if ( SurfaceProperties >= 0 )
  {
    SurfaceProperties = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
                          (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 8) + 8LL),
                          a2 & 0x3FFFFFFF | 0x80000000,
                          v7);
    if ( SurfaceProperties >= 0 )
    {
      SurfaceProperties = DirectComposition::CResourceProxy::SetBufferProperty(
                            (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 8) + 8LL),
                            a2 & 0x3FFFFFFF | 0xC0000000,
                            &v17,
                            0x10uLL);
      if ( SurfaceProperties >= 0 )
        DirectComposition::CFilterEffect::SetSurfaceReferenceAtIndex(this, a2, v5);
    }
  }
LABEL_14:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v16);
  return (unsigned int)SurfaceProperties;
}
