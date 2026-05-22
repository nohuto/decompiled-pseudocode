/*
 * XREFs of ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800827A4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_NXZ @ 0x18009A0D0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HDRWallpaper@@@details@wil@@QEAA_.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     ?CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z @ 0x1800EA850 (-CopySurface@CBitmapInfoFront@DirectComposition@@UEAAXPEAUID3D11Resource@@IIAEBUtagRECT@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC (-BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEA.c)
 *     ?CanCopyDirectly@CBitmapInfoFront@DirectComposition@@QEAA_NPEAVCBitmapInfoBack@2@AEBUtagRECT@@1@Z @ 0x1800EB2F0 (-CanCopyDirectly@CBitmapInfoFront@DirectComposition@@QEAA_NPEAVCBitmapInfoBack@2@AEBUtagRECT@@1@.c)
 *     ?Dispose@CScratchSurface@DirectComposition@@QEAAXXZ @ 0x1800EB914 (-Dispose@CScratchSurface@DirectComposition@@QEAAXXZ.c)
 *     ?EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ @ 0x1800EB958 (-EndDrawInternal@CCompositionSurface@DirectComposition@@AEAAXXZ.c)
 *     ?IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z @ 0x1800EB9A0 (-IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z.c)
 *     ?RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBA4C (-RemoveGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ @ 0x1800EBD40 (-RestoreGuardRect@CBitmapInfoFront@DirectComposition@@QEAAXXZ.c)
 *     ?ValidateUpdateParameters@CCompositionSurface@DirectComposition@@AEAAJPEBUtagRECT@@_N@Z @ 0x1800EC164 (-ValidateUpdateParameters@CCompositionSurface@DirectComposition@@AEAAJPEBUtagRECT@@_N@Z.c)
 *     ?CalcScrollBltRects@DirectComposition@@YA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@0HHPEAV2@1@Z @ 0x1800F915C (-CalcScrollBltRects@DirectComposition@@YA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4 (-GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEA.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::Scroll(
        DirectComposition::CCompositionSurface *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        int a4,
        int a5)
{
  const struct tagRECT *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  bool v13; // zf
  struct ID3D11Resource *v14; // rbx
  LONG v15; // r12d
  int updated; // esi
  DirectComposition::CBitmapInfoFront *v17; // rcx
  enum DXGI_FORMAT v18; // edx
  LONG v19; // r15d
  LONG v20; // r12d
  DirectComposition::CScratchSurfaceManager *v21; // rcx
  DirectComposition::CScratchSurface *v22; // rbx
  __int64 v23; // rax
  bool v25; // [rsp+20h] [rbp-91h]
  struct DirectComposition::CScratchSurfaceManager *v26; // [rsp+30h] [rbp-81h]
  unsigned int v27; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-5Dh] BYREF
  DirectComposition::CDeviceLock *v29; // [rsp+58h] [rbp-59h] BYREF
  struct tagRECT v30; // [rsp+60h] [rbp-51h] BYREF
  struct ID3D11Resource *v31; // [rsp+70h] [rbp-41h] BYREF
  int v32; // [rsp+78h] [rbp-39h]
  LONG v33; // [rsp+7Ch] [rbp-35h]
  struct tagRECT v34; // [rsp+80h] [rbp-31h] BYREF
  DirectComposition::CScratchSurface *v35; // [rsp+90h] [rbp-21h] BYREF
  LONG right; // [rsp+98h] [rbp-19h]
  LONG bottom; // [rsp+9Ch] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A0h] [rbp-11h] BYREF

  v29 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v29);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 4) + 24LL),
      &DCOMPEVENT_SCROLL_Start,
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 160LL),
      42,
      (char)this);
  v12 = *((_QWORD *)this + 5);
  v13 = (*(_BYTE *)(v12 + 112) & 1) == 0;
  v14 = *(struct ID3D11Resource **)(v12 + 44);
  v31 = v14;
  if ( v13
    || a3 && !DirectComposition::IsValidRect((DirectComposition *)a3, v9)
    || (v15 = HIDWORD(v31), a2)
    && !DirectComposition::IsRectangleInSurface(
          (DirectComposition *)a2,
          (const struct tagRECT *)(unsigned int)v14,
          HIDWORD(v31)) )
  {
    updated = -2147024809;
  }
  else
  {
    updated = DirectComposition::CCompositionSurface::ValidateUpdateParameters(this, a2, 0);
    if ( updated >= 0 )
    {
      if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_HDRWallpaper>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_HDRWallpaper>::GetImpl'::`2'::impl)
        || (updated = DirectComposition::CDevice::CheckClientDrawNotInProgress(*(DirectComposition::CDevice **)(*((_QWORD *)this + 4) + 24LL)),
            updated >= 0) )
      {
        v31 = 0LL;
        v32 = (int)v14;
        v33 = v15;
        if ( a2 )
        {
          v35 = *(DirectComposition::CScratchSurface **)&a2->left;
          right = a2->right;
          bottom = a2->bottom;
        }
        else
        {
          v35 = 0LL;
          right = (int)v14;
          bottom = v15;
        }
        if ( a3 )
        {
          v30 = *a3;
          TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe((int *)&v31, &v30.left);
        }
        v30 = 0LL;
        v34 = 0LL;
        if ( (unsigned __int8)DirectComposition::CalcScrollBltRects(
                                (unsigned int)&v35,
                                (unsigned int)&v31,
                                a4,
                                a5,
                                (__int64)&v30,
                                (__int64)&v34) )
        {
          DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
            (const struct DirectComposition::CDxDevice **)&v38,
            (DirectComposition::CDevice **)((*((_QWORD *)this + 4) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 4) >> 64)));
          updated = DirectComposition::CCompositionSurface::BeginDrawInternal(
                      this,
                      &v34,
                      &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
                      0,
                      v25,
                      (void **)&v31,
                      &v27,
                      &v28,
                      0LL);
          if ( updated >= 0 )
          {
            DirectComposition::CBitmapInfoFront::RemoveGuardRect(*((DirectComposition::CBitmapInfoFront **)this + 5));
            if ( DirectComposition::CBitmapInfoFront::CanCopyDirectly(
                   *((DirectComposition::CBitmapInfoFront **)this + 5),
                   *((struct DirectComposition::CBitmapInfoBack **)this + 6),
                   &v34,
                   &v30) )
            {
              DirectComposition::CBitmapInfoFront::CopySurface(v17, v31, v27, v28, &v30);
            }
            else
            {
              v18 = *((_DWORD *)v17 + 13);
              v19 = v30.right - v30.left;
              v20 = v30.bottom - v30.top;
              v21 = *(DirectComposition::CScratchSurfaceManager **)(*((_QWORD *)this + 4) + 304LL);
              v34.left = v30.right - v30.left;
              v34.top = v30.bottom - v30.top;
              updated = DirectComposition::CScratchSurfaceManager::GetScratchSurface(
                          v21,
                          v18,
                          (const struct DirectComposition::SizeU *)&v34,
                          &v35);
              if ( updated >= 0 )
              {
                v22 = v35;
                (***((void (__fastcall ****)(_QWORD, GUID *, struct tagRECT *))v35 + 3))(
                  *((_QWORD *)v35 + 3),
                  &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
                  &v34);
                DirectComposition::CBitmapInfoFront::CopySurface(
                  *((DirectComposition::CBitmapInfoFront **)this + 5),
                  *(struct ID3D11Resource **)&v34.left,
                  0,
                  0,
                  &v30);
                v23 = *((_QWORD *)this + 4);
                *(_QWORD *)&v30.left = 0LL;
                v26 = *(struct DirectComposition::CScratchSurfaceManager **)(v23 + 304);
                v30.right = v19;
                v30.bottom = v20;
                DirectComposition::CDxDevice::CopySurface(
                  (DirectComposition::CDxDevice *)(v23 + 8),
                  v31,
                  v27,
                  v28,
                  *(struct ID3D11Resource **)&v34.left,
                  &v30,
                  v26);
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v34.left + 16LL))(*(_QWORD *)&v34.left);
                DirectComposition::CScratchSurface::Dispose(v22);
                CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v22);
              }
            }
            if ( v31 )
              ((void (__fastcall *)(struct ID3D11Resource *))v31->lpVtbl->Release)(v31);
            if ( updated < 0 )
            {
              DirectComposition::CBitmapInfoBack::EndDraw(*((DirectComposition::CBitmapInfoBack **)this + 6));
              ReleaseInterface<DirectComposition::CBitmapInfoBack>((__int64 *)this + 6);
            }
            else
            {
              DirectComposition::CCompositionSurface::EndDrawInternal((DirectComposition::CBitmapInfoBack **)this);
            }
            DirectComposition::CBitmapInfoFront::RestoreGuardRect(*((DirectComposition::CBitmapInfoFront **)this + 5));
          }
          DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)&v38);
        }
      }
    }
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v10, &DCOMPEVENT_SCROLL_Stop, v11, 1u, &v38);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v29);
  return (unsigned int)updated;
}
