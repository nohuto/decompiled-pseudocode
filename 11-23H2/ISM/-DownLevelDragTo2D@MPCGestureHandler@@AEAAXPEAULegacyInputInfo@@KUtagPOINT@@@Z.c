/*
 * XREFs of ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BAF30
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB3A0 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@.c)
 * Callees:
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011CC48 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18011D3A0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 */

void __fastcall MPCGestureHandler::DownLevelDragTo2D(
        MPCGestureHandler *this,
        const RECT *a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  ManipulationInjector *v5; // rdi
  struct tagPOINT v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = a4;
  v5 = (MPCGestureHandler *)((char *)this + 80);
  if ( PtInRect(a2 + 55, a4) || ManipulationInjector::IsInContactForDeviceId(v5, a3) )
  {
    ManipulationInjector::InjectDrag(v5, &v7, a3);
    *((_BYTE *)this + 972) = ManipulationInjector::IsInContactForDeviceId(v5, a3);
  }
}
