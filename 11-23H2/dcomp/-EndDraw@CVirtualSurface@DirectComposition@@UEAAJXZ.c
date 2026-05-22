/*
 * XREFs of ?EndDraw@CVirtualSurface@DirectComposition@@UEAAJXZ @ 0x180037C40
 * Callers:
 *     ?EndDraw@CVirtualSurface@DirectComposition@@WEI@EAAJXZ @ 0x1800A9270 (-EndDraw@CVirtualSurface@DirectComposition@@WEI@EAAJXZ.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z @ 0x180038474 (-EndDrawInternal@CVirtualSurface@DirectComposition@@AEAAJPEAVCRegion@@@Z.c)
 *     ?TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z @ 0x180038F8C (-TransitionDrawingState@CVirtualSurface@DirectComposition@@AEAAXW4SurfaceState@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1800EA8AC (McTemplateU0qqx_EventWriteTransfer.c)
 *     ?ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z @ 0x1800FE198 (-ReclumpRegion@CVirtualSurface@DirectComposition@@QEAAJAEBVCRegion@@@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::EndDraw(DirectComposition::CVirtualSurface *this)
{
  __int64 v2; // r8
  int v3; // edi
  __int64 v4; // rcx
  bool v5; // cc
  DirectComposition::CDeviceLock *v7; // [rsp+30h] [rbp-29h] BYREF
  int *v8; // [rsp+40h] [rbp-19h] BYREF
  int v9; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v10[16]; // [rsp+90h] [rbp+37h] BYREF

  v7 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v7);
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McTemplateU0qqx_EventWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 13) + 24LL),
      (unsigned int)&DCOMPEVENT_END_DRAW_Start,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 160LL),
      84,
      (char)this);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13)
                                                                                             + 24LL)
                                                                                 + 96LL));
  v3 = 0;
  v4 = 2291664898LL;
  v5 = (unsigned int)(*((_DWORD *)this + 32) - 1) <= 1;
  v8 = &v9;
  if ( !v5 )
    v3 = -2003302398;
  v9 = 0;
  if ( v3 >= 0 )
  {
    v3 = DirectComposition::CVirtualSurface::EndDrawInternal(this, (struct CRegion *)&v8);
    DirectComposition::CVirtualSurface::TransitionDrawingState(this, 0LL);
    if ( v3 >= 0 )
    {
      if ( *v8 )
      {
        DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
          (DirectComposition::SwapDeviceContextState *)v10,
          (const struct DirectComposition::CDxDevice *)((*((_QWORD *)this + 13) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 13) >> 64)));
        v3 = DirectComposition::CVirtualSurface::ReclumpRegion(this, (const struct CRegion *)&v8);
        DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v10);
      }
    }
  }
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(v4, &DCOMPEVENT_END_DRAW_Stop, v2, 1LL, v10);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v8);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v7);
  return (unsigned int)v3;
}
