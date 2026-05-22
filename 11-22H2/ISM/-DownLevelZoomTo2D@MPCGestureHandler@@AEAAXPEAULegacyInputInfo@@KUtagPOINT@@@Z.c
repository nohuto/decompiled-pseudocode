/*
 * XREFs of ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800CC38C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800CC160 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x1800CAE44 (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18012B430 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x18012B908 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelZoomTo2D(
        MPCGestureHandler *this,
        const RECT *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  int v6; // edi
  __int64 v7; // r11
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  if ( a2[16].bottom )
  {
    v6 = *((_DWORD *)this + 42);
    if ( (v6 & 0xFFFFFF7F) == 0 || *((_DWORD *)this + 32) == 1 && v6 == 64 )
    {
      if ( PtInRect(a2 + 55, a4) )
      {
        ManipulationInjector::StartZoom((MPCGestureHandler *)((char *)this + 80), &v10, 1, a3);
        *((_BYTE *)this + 972) = (*((_DWORD *)this + 42) & 0xFFFFFF7F) != 0;
        v8 = *((_DWORD *)this + 228);
        ISMTracing::MPCGestureHandler_StartZoom<long &,long &,unsigned long const &,unsigned long>(
          (int *)&v10,
          &v10.y,
          &v9,
          &v8);
      }
    }
    else if ( ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
           && ((v6 - 16) & 0xFFFFFFEF) == 0 )
    {
      *((_DWORD *)this + 242) = *(_DWORD *)(v7 + 868);
    }
  }
}
