/*
 * XREFs of ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BAFB0
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB3A0 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011CCEC (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18011D35C (-IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18011D3A0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelHoverTo2D(
        MPCGestureHandler *this,
        const RECT *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v4; // rsi
  POINT v8; // r11
  struct tagPOINT v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = a4;
  v4 = (MPCGestureHandler *)((char *)this + 80);
  if ( !ManipulationInjector::IsInContactForDeviceId((MPCGestureHandler *)((char *)this + 80), a3)
    && !LOBYTE(a2[56].top) )
  {
    if ( PtInRect(a2 + 55, v8) )
    {
      ManipulationInjector::InjectHover(v4, &v9, a3);
      *((_BYTE *)this + 972) = ManipulationInjector::IsHoveringForDeviceId(v4, a3);
    }
  }
}
