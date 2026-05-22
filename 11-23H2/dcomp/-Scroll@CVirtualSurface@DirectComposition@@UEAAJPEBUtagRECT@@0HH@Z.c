/*
 * XREFs of ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370
 * Callers:
 *     ?Scroll@CVirtualSurface@DirectComposition@@WEI@EAAJPEBUtagRECT@@0HH@Z @ 0x1800A93B0 (-Scroll@CVirtualSurface@DirectComposition@@WEI@EAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z @ 0x180037138 (-CanBeginDraw@CVirtualSurface@DirectComposition@@AEAAJ_N@Z.c)
 *     ?BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@PEAPEAXPEAI3PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800371B0 (-BeginDrawInternal@CVirtualSurface@DirectComposition@@AEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRect.c)
 *     ?AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z @ 0x180037BB4 (-AddVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@QEAAXPEAVCVirtualSurface@2@@Z.c)
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800827A4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z @ 0x1800EB9A0 (-IsValidRect@DirectComposition@@YA_NAEBUtagRECT@@@Z.c)
 *     ?CalcScrollBltRects@DirectComposition@@YA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@0HHPEAV2@1@Z @ 0x1800F915C (-CalcScrollBltRects@DirectComposition@@YA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::Scroll(
        DirectComposition::CVirtualSurface *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        int a4,
        int a5)
{
  const struct tagRECT *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int CanBeginDraw; // edi
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v17; // [rsp+40h] [rbp-91h] BYREF
  int v18; // [rsp+44h] [rbp-8Dh] BYREF
  DirectComposition::CDeviceLock *v19; // [rsp+48h] [rbp-89h] BYREF
  __int128 v20; // [rsp+50h] [rbp-81h] BYREF
  __int128 v21; // [rsp+60h] [rbp-71h] BYREF
  const struct DirectComposition::CDxDevice *v22; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-59h]
  unsigned int v24; // [rsp+7Ch] [rbp-55h]
  int *v25; // [rsp+80h] [rbp-51h] BYREF
  int v26; // [rsp+88h] [rbp-49h] BYREF
  struct tagRECT v27; // [rsp+D0h] [rbp-1h] BYREF

  v19 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v19);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 13) + 24LL),
      &DCOMPEVENT_SCROLL_Start,
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 160LL),
      84,
      (char)this);
  DirectComposition::CVirtualSurfaceOptimizer::AddVirtualSurface(
    *(DirectComposition::CVirtualSurfaceOptimizer **)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 464LL),
    this);
  if ( (!a2
     || DirectComposition::IsRectangleInSurface(
          (DirectComposition *)a2,
          (const struct tagRECT *)*((unsigned int *)this + 28),
          *((_DWORD *)this + 29)))
    && (!a3 || DirectComposition::IsValidRect((DirectComposition *)a3, v9)) )
  {
    CanBeginDraw = DirectComposition::CVirtualSurface::CanBeginDraw(this, 0);
    if ( CanBeginDraw >= 0 )
    {
      v22 = 0LL;
      v13 = *((_DWORD *)this + 28);
      v14 = *((_DWORD *)this + 29);
      v23 = v13;
      v24 = v14;
      if ( a2 )
      {
        v20 = (__int128)*a2;
      }
      else
      {
        *(_QWORD *)&v20 = 0LL;
        *((_QWORD *)&v20 + 1) = __PAIR64__(v14, v13);
      }
      if ( a3 )
      {
        v21 = (__int128)*a3;
        TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe((int *)&v22, (int *)&v21);
      }
      v21 = 0LL;
      v27 = 0LL;
      if ( DirectComposition::CalcScrollBltRects(&v20, (int *)&v22, a4, a5, (__int64)&v27, (int *)&v21) )
      {
        DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
          &v22,
          (DirectComposition::CDevice **)((*((_QWORD *)this + 13) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 13) >> 64)));
        CanBeginDraw = DirectComposition::CVirtualSurface::BeginDrawInternal(
                         (__int64)this,
                         (__int64)&v21,
                         (__int64)&GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
                         (__int64)&v20,
                         (__int64)&v18,
                         (__int64)&v17,
                         0LL);
        if ( CanBeginDraw >= 0 )
        {
          v26 = 0;
          v25 = &v26;
          CanBeginDraw = DirectComposition::CVirtualSurface::CopySurface(
                           this,
                           (struct ID3D11Resource *)v20,
                           v18,
                           v17,
                           &v27,
                           1);
          if ( (_QWORD)v20 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 16LL))(v20);
          v15 = DirectComposition::CVirtualSurface::EndDrawInternal(this, (struct CRegion *)&v25);
          if ( CanBeginDraw >= 0 )
          {
            CanBeginDraw = v15;
            if ( v15 >= 0 )
            {
              if ( *v25 )
                CanBeginDraw = DirectComposition::CVirtualSurface::ReclumpRegion(this, (const struct CRegion *)&v25);
            }
          }
          FastRegion::CRegion::FreeMemory((void **)&v25);
        }
        DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)&v22);
      }
    }
  }
  else
  {
    CanBeginDraw = -2147024809;
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v10, &DCOMPEVENT_SCROLL_Stop, v11, 1u, (PEVENT_DATA_DESCRIPTOR)&v27);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v19);
  return (unsigned int)CanBeginDraw;
}
