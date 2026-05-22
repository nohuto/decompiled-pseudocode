/*
 * XREFs of ?CopySurface@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800EB540
 * Callers:
 *     ?CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingSurface@234@PEAPEAUIDXGISurface@@@Z @ 0x180100D90 (-CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingS.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_NXZ @ 0x18009A0D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA850 (-CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     ?RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBA4C (-RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBD40 (-RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::CopySurface(
        DirectComposition::CCompositionSurface *this,
        struct tagRECT *a2,
        struct IDXGISurface **a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  struct ID3D11Texture2D *v7; // r10
  int v8; // edi
  struct ID3D11Texture2D *v9; // rbx
  struct ID3D11Texture2D *v10; // rsi
  LONG left; // r12d
  LONG top; // r13d
  LONG bottom; // r14d
  char IsEnabled; // al
  __int64 v15; // rax
  signed int v16; // ebx
  signed int v17; // r14d
  __int64 v18; // rcx
  int v19; // eax
  struct ID3D11Texture2D *v21; // [rsp+30h] [rbp-49h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-41h] BYREF
  struct IDXGISurface **v23; // [rsp+48h] [rbp-31h]
  DirectComposition::CDeviceLock *v24; // [rsp+50h] [rbp-29h] BYREF
  const struct DirectComposition::CDxDevice *v25[2]; // [rsp+58h] [rbp-21h] BYREF
  struct D3D11_TEXTURE2D_DESC v26; // [rsp+68h] [rbp-11h] BYREF

  v3 = *((_QWORD *)this + 3);
  v23 = a3;
  v24 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(v3 + 24) + 96LL);
  DirectComposition::CDeviceLock::Enter(v24);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    v25,
    (DirectComposition::CDevice **)((*((_QWORD *)this + 3) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 3) >> 64)));
  v6 = *((_QWORD *)this + 3);
  v7 = 0LL;
  if ( *(_BYTE *)(v6 + 353) )
  {
    v8 = -2003302399;
  }
  else
  {
    v8 = 0;
    if ( *(_DWORD *)(v6 + 344) )
      v8 = -2147467259;
  }
  v9 = *(struct ID3D11Texture2D **)(*((_QWORD *)this + 4) + 44LL);
  v21 = v9;
  if ( !(_DWORD)v9 )
  {
    v8 = -2147483634;
LABEL_7:
    v10 = v7;
    goto LABEL_25;
  }
  if ( a2 )
  {
    if ( !DirectComposition::IsRectangleInSurface(
            (DirectComposition *)a2,
            (const struct tagRECT *)(unsigned int)v9,
            HIDWORD(v9)) )
    {
      v8 = -2147024809;
      goto LABEL_7;
    }
    left = a2->left;
    top = a2->top;
    LODWORD(v9) = a2->right;
    bottom = a2->bottom;
    v22.left = a2->left;
    v22.top = top;
  }
  else
  {
    bottom = HIDWORD(v21);
    left = 0;
    *(_QWORD *)&v22.left = 0LL;
    top = 0;
  }
  v22.bottom = bottom;
  v22.right = (int)v9;
  if ( v8 < 0 )
  {
LABEL_17:
    v21 = v7;
    v10 = v7;
    if ( v8 < 0 )
      goto LABEL_25;
    goto LABEL_18;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HDRWallpaper>::GetImpl'::`2'::impl);
  LODWORD(v7) = 0;
  if ( IsEnabled )
  {
    v8 = DirectComposition::CDevice::CheckClientDrawNotInProgress(*(DirectComposition::CDevice **)(*((_QWORD *)this + 3)
                                                                                                 + 24LL));
    v7 = 0LL;
    goto LABEL_17;
  }
  v21 = 0LL;
LABEL_18:
  v15 = *((_QWORD *)this + 4);
  v16 = (_DWORD)v9 - left;
  v26.MipLevels = 1;
  if ( v16 < 0 )
    v16 = (int)v7;
  v26.ArraySize = 1;
  v26.Width = v16;
  v17 = bottom - top;
  if ( v17 < 0 )
    v17 = (int)v7;
  v26.Height = v17;
  v26.Format = *(_DWORD *)(v15 + 52);
  v18 = *((_QWORD *)this + 3);
  v26.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  *(_QWORD *)&v26.Usage = 3LL;
  *(_QWORD *)&v26.CPUAccessFlags = 0x20000LL;
  v19 = DirectComposition::CDxDevice::CreateTexture((DirectComposition::CDxDevice *)(v18 + 8), &v26, 0, &v21);
  v7 = 0LL;
  v8 = v19;
  if ( v19 >= 0 )
  {
    DirectComposition::CBitmapInfoFront::RemoveGuardRect(*((DirectComposition::CBitmapInfoFront **)this + 4));
    v10 = v21;
    DirectComposition::CBitmapInfoFront::CopySurface(
      *((DirectComposition::CBitmapInfoFront **)this + 4),
      (struct ID3D11Resource *)v21,
      0,
      0,
      &v22);
    DirectComposition::CBitmapInfoFront::RestoreGuardRect(*((DirectComposition::CBitmapInfoFront **)this + 4));
    v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct IDXGISurface **))v10->lpVtbl->QueryInterface)(
           v10,
           &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
           v23);
    goto LABEL_27;
  }
  v10 = v21;
LABEL_25:
  if ( v23 )
    *v23 = (struct IDXGISurface *)v7;
LABEL_27:
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v25);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v24);
  return (unsigned int)v8;
}
