/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180048F38
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x1800472A0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800488D8 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E6DC4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800EEDA4 (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18017E7E8 (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18026C340 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, char *a3)
{
  CInteraction *InteractionInternal; // rax
  CComposition *v7; // rbx
  struct CManipulationManager *v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3[101] >= 0 )
  {
    if ( a2 != 1 )
      return;
    InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a3);
    if ( !InteractionInternal || !CInteraction::GetTotalNumContacts(InteractionInternal) )
      return;
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  v8 = 0LL;
  v7 = *(CComposition **)(a1 + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  if ( (int)CComposition::GetManipulationManager(v7, &v8) >= 0 )
    CManipulationManager::QueueMidManipulationUpdate(v8, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
}
