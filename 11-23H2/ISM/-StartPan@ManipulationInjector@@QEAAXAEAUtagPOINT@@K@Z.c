/*
 * XREFs of ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011D808
 * Callers:
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BB22C (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18019863C (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18011D3A0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18011D56C (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 */

void __fastcall ManipulationInjector::StartPan(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  if ( *((_DWORD *)this + 22) == 64 )
  {
    if ( *((_DWORD *)this + 12) == 1 && ManipulationInjector::IsInContactForDeviceId(this, a3) )
    {
      if ( *((_BYTE *)this + 13) )
        DbgPrint("Transition from DRAG to PAN\n");
      *((_DWORD *)this + 22) = 1;
    }
  }
  else if ( (*((_DWORD *)this + 22) & 0xFFFFFF7F) == 0 )
  {
    ManipulationInjector::StartManipulation((__int64)this, 1, *a2, a3);
  }
}
