/*
 * XREFs of ?Initialize@CDxDevice@DirectComposition@@IEAAJPEAUIUnknown@@@Z @ 0x18009BA98
 * Callers:
 *     ?Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z @ 0x18001B6BC (-Initialize@CSurfaceFactory@DirectComposition@@IEAAJPEAUIUnknown@@PEAV12@@Z.c)
 * Callees:
 *     ?SetD2DDevice@CDxDevice@DirectComposition@@QEAAXPEAUID2D1Device@@@Z @ 0x18001907C (-SetD2DDevice@CDxDevice@DirectComposition@@QEAAXPEAUID2D1Device@@@Z.c)
 *     ??$ReleaseInterface@UID3D11PartnerDevice@@@@YAXAEAPEAUID3D11PartnerDevice@@@Z @ 0x18001B1D4 (--$ReleaseInterface@UID3D11PartnerDevice@@@@YAXAEAPEAUID3D11PartnerDevice@@@Z.c)
 *     ?MaxTextureSizeFromFeatureLevel@CDevice@DirectComposition@@SAIW4D3D_FEATURE_LEVEL@@@Z @ 0x180038880 (-MaxTextureSizeFromFeatureLevel@CDevice@DirectComposition@@SAIW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?GetPrimaryDisplayDimensionHelper@@YA?AUD2D_SIZE_U@@XZ @ 0x180085840 (-GetPrimaryDisplayDimensionHelper@@YA-AUD2D_SIZE_U@@XZ.c)
 *     ??$ReleaseInterface@UIDXGIDevice@@@@YAXAEAPEAUIDXGIDevice@@@Z @ 0x18008BF74 (--$ReleaseInterface@UIDXGIDevice@@@@YAXAEAPEAUIDXGIDevice@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Device2@@@@YAXAEAPEAUID2D1Device2@@@Z @ 0x18008CE90 (--$ReleaseInterface@UID2D1Device2@@@@YAXAEAPEAUID2D1Device2@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z @ 0x18009AD3C (-EnforceStrictSurfaceUsage@CDevice@DirectComposition@@QEAAJ_N@Z.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::Initialize(DirectComposition::CDevice **this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  char v5; // r15
  int v6; // ebx
  _QWORD *v7; // rsi
  int (__fastcall ***v8)(_QWORD, GUID *, char *); // rcx
  void (__fastcall ***v9)(_QWORD, GUID *, DirectComposition::CDevice **); // rcx
  __int64 *v10; // r14
  void (__fastcall ***v11)(_QWORD, GUID *, DirectComposition::CDevice **); // rcx
  char v12; // al
  int v13; // eax
  __int64 v14; // rcx
  struct D2D_SIZE_U PrimaryDisplayDimensionHelper; // rax
  bool v16; // zf
  struct DirectComposition::CDxDevice *v18; // [rsp+58h] [rbp-21h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, DirectComposition::CDevice **); // [rsp+60h] [rbp-19h] BYREF
  struct ID2D1Device *v20; // [rsp+68h] [rbp-11h] BYREF
  __int128 v21; // [rsp+70h] [rbp-9h] BYREF
  __int128 v22; // [rsp+80h] [rbp+7h]
  __int128 v23; // [rsp+90h] [rbp+17h]
  __int64 v24; // [rsp+A0h] [rbp+27h]

  v19 = 0LL;
  v24 = 0LL;
  lpVtbl = a2->lpVtbl;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v5 = 1;
  if ( ((int (__fastcall *)(struct IUnknown *, GUID *, struct ID2D1Device **))lpVtbl->QueryInterface)(
         a2,
         &GUID_a44472e1_8dfb_4e60_8492_6e2861c9ca8b,
         &v20) < 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
           &v19);
    if ( v6 >= 0 )
      goto LABEL_5;
LABEL_10:
    v10 = (__int64 *)(this + 6);
    v7 = this + 3;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(struct ID2D1Device *, __int64 (__fastcall ****)(_QWORD, GUID *, DirectComposition::CDevice **)))(*(_QWORD *)v20 + 112LL))(
         v20,
         &v19);
  if ( v6 < 0 )
    goto LABEL_10;
  DirectComposition::CDxDevice::SetD2DDevice((DirectComposition::CDxDevice *)this, v20);
LABEL_5:
  v7 = this + 3;
  v6 = (**v19)(v19, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, this + 3);
  if ( v6 < 0 )
    goto LABEL_10;
  v8 = (int (__fastcall ***)(_QWORD, GUID *, char *))*v7;
  LODWORD(v18) = 0;
  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, char *), void *, struct DirectComposition::CDxDevice **, _QWORD))(*v8)[34])(
    v8,
    &WKPDID_SharedCompositionD3DDevice,
    &v18,
    0LL);
  v6 = DirectComposition::CDevice::EnforceStrictSurfaceUsage(this[2], (_DWORD)v18 != 0);
  if ( v6 < 0 )
    goto LABEL_10;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
         *v7,
         &GUID_9b7e4e00_342c_4106_a19f_4f2704f689f0,
         (char *)this + 32) < 0 )
    this[4] = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, GUID *, DirectComposition::CDevice **))*v7;
  this[7] = 0LL;
  (**v9)(v9, &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71, this + 7);
  v10 = (__int64 *)(this + 6);
  v11 = (void (__fastcall ***)(_QWORD, GUID *, DirectComposition::CDevice **))*v7;
  *((_BYTE *)this + 241) = this[7] != 0LL;
  (**v11)(v11, &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32, this + 6);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 304LL))(*v7);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(*(_QWORD *)*v7 + 376LL))(
         *v7,
         v12 & 1,
         &DirectComposition::CDxDevice::msc_supportedFeatureLevels);
LABEL_11:
  if ( v6 < 0
    || (v13 = DirectComposition::CDevice::MaxTextureSizeFromFeatureLevel(37120),
        v14 = *v7,
        *((_DWORD *)this + 31) = v13,
        v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v14 + 264LL))(v14, 5LL, &v21),
        v6 < 0)
    || (DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(&v18, this),
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v10 + 24LL))(*v10),
        DirectComposition::MultithreadDeviceLock::Leave(v18),
        v6 < 0) )
  {
    ReleaseInterface<ID3D11PartnerDevice>(v10);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v7 + 344LL))(*v7, (char *)this + 72);
    PrimaryDisplayDimensionHelper = GetPrimaryDisplayDimensionHelper();
    *((_DWORD *)this + 29) = PrimaryDisplayDimensionHelper.width;
    v16 = DWORD1(v22) == 0;
    *((_DWORD *)this + 30) = PrimaryDisplayDimensionHelper.height;
    if ( v16 || !DWORD2(v21) )
      v5 = 0;
    *((_BYTE *)this + 112) = v5;
  }
  ReleaseInterface<IDXGIDevice>((__int64 *)&v19);
  ReleaseInterface<ID2D1Device2>((__int64 *)&v20);
  return (unsigned int)v6;
}
