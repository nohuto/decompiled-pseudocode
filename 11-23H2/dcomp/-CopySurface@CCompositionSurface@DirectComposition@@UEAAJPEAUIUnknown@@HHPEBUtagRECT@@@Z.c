/*
 * XREFs of ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x1800EB360
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_NXZ @ 0x18009A0D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA850 (-CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     ?FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ @ 0x1800EA888 (-FlushD2D@CBitmapInfoFront@DirectComposition@@QEAA_NXZ.c)
 *     ?RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBA4C (-RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBD40 (-RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::CopySurface(
        DirectComposition::CCompositionSurface *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  __int64 v9; // rax
  struct ID3D11Resource *v10; // r11
  int v11; // ebx
  __int64 v12; // rax
  LONG *v13; // r10
  LONG v14; // eax
  struct ID3D11Resource *v16; // [rsp+30h] [rbp-30h] BYREF
  DirectComposition::CDeviceLock *v17; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-20h] BYREF
  const struct DirectComposition::CDxDevice *v19[2]; // [rsp+50h] [rbp-10h] BYREF

  v17 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v17);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    v19,
    (DirectComposition::CDevice **)((*((_QWORD *)this + 4) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 4) >> 64)));
  v9 = *((_QWORD *)this + 4);
  v10 = 0LL;
  v16 = 0LL;
  if ( *(_BYTE *)(v9 + 353) )
  {
    v11 = -2003302399;
  }
  else
  {
    v11 = 0;
    if ( *(_DWORD *)(v9 + 344) )
      v11 = -2147467259;
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 44LL);
  if ( !(_DWORD)v12 )
  {
    v11 = -2147483634;
    goto LABEL_18;
  }
  if ( a5 )
  {
    if ( !DirectComposition::IsRectangleInSurface(
            (DirectComposition *)a5,
            (const struct tagRECT *)(unsigned int)v12,
            HIDWORD(v12)) )
    {
      v11 = -2147024809;
      goto LABEL_18;
    }
    v18.left = *v13;
    v18.top = v13[1];
    v18.right = v13[2];
    v14 = v13[3];
  }
  else
  {
    v18.left = 0;
    v18.top = 0;
    v18.right = v12;
    v14 = HIDWORD(v12);
  }
  v18.bottom = v14;
  if ( v11 >= 0 )
  {
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v16);
    if ( v11 >= 0 )
    {
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HDRWallpaper>::GetImpl'::`2'::impl)
        || (v11 = DirectComposition::CDevice::CheckClientDrawNotInProgress(*(DirectComposition::CDevice **)(*((_QWORD *)this + 4) + 24LL)),
            v11 >= 0) )
      {
        DirectComposition::CBitmapInfoFront::FlushD2D(*((DirectComposition::CBitmapInfoFront **)this + 5));
        DirectComposition::CBitmapInfoFront::RemoveGuardRect(*((DirectComposition::CBitmapInfoFront **)this + 5));
        DirectComposition::CBitmapInfoFront::CopySurface(
          *((DirectComposition::CBitmapInfoFront **)this + 5),
          v16,
          a3,
          a4,
          &v18);
        DirectComposition::CBitmapInfoFront::RestoreGuardRect(*((DirectComposition::CBitmapInfoFront **)this + 5));
      }
    }
    v10 = v16;
  }
LABEL_18:
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Resource *))v10->lpVtbl->Release)(v10);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v19);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v17);
  return (unsigned int)v11;
}
