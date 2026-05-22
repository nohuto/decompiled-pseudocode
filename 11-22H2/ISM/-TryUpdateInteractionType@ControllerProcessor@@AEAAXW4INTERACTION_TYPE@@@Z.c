/*
 * XREFs of ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6BB8
 * Callers:
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x1801A339C (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1801A3540 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801A6C84 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A777C (-UpdatePointerTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180129DF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1801A72B4 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
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
