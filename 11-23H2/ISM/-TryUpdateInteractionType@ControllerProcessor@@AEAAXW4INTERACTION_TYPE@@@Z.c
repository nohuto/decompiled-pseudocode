/*
 * XREFs of ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180198BD8
 * Callers:
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180195538 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1801956DC (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180198CA4 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x18019979C (-UpdatePointerTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x18011BD68 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1801992D4 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 */

void __fastcall ControllerProcessor::TryUpdateInteractionType(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 1260);
  if ( v2 == a2 )
    return;
  if ( !a2 )
  {
    ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 448), 0);
    if ( *(_BYTE *)(a1 + 1264) )
    {
      ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
      *(_BYTE *)(a1 + 1264) = 0;
    }
LABEL_16:
    *(_DWORD *)(a1 + 1260) = 0;
    return;
  }
  if ( a2 == 1 )
  {
    if ( ((v2 - 16) & 0xFFFFFFEF) == 0 )
    {
      ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 448), 0);
      if ( *(_BYTE *)(a1 + 1264) )
      {
        ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
        *(_BYTE *)(a1 + 1264) = 0;
      }
    }
    if ( *(_BYTE *)(a1 + 1265) )
    {
      a2 = 1;
LABEL_8:
      ControllerProcessor::StartInteractionHelper(a1, a2);
      return;
    }
    goto LABEL_16;
  }
  if ( (a2 == 16 || a2 == 32) && !v2 && *(_BYTE *)(a1 + 1265) )
    goto LABEL_8;
}
