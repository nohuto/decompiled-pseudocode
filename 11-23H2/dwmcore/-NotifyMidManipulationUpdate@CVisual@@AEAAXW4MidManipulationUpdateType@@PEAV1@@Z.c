/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E1CB8
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180083410 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E1A14 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E1C70 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180083644 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800B0730 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800E1DAC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801A000C (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18027C3B4 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, CVisual *a3)
{
  CInteraction *InteractionInternal; // rax
  CComposition *v7; // rbx
  struct CManipulationManager *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a3 + 101) & 0x40) == 0 )
  {
    if ( a2 != 1 )
      return;
    InteractionInternal = CVisual::GetInteractionInternal(a3);
    if ( !InteractionInternal || !CInteraction::GetTotalNumContacts(InteractionInternal) )
      return;
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  v8 = 0LL;
  v7 = *(CComposition **)(a1 + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  if ( (int)CComposition::GetManipulationManager(v7, &v8) >= 0 )
    CManipulationManager::QueueMidManipulationUpdate(v8, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
}
