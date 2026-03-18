/*
 * XREFs of ?FinalRelease@CVisual@@MEAAXXZ @ 0x180083410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180083644 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E1B08 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800E1CB8 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 */

void __fastcall CVisual::FinalRelease(CVisual *this)
{
  CInteraction *InteractionInternal; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
  {
    CInteraction::SetVisual(InteractionInternal, 0LL);
    CVisual::NotifyMidManipulationUpdate(this, 1LL, this);
    CVisual::ClearInteraction(this);
  }
}
