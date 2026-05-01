/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1807895E0
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@WBI@E$AAAX_N_K@Z @ 0x1802B2340 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewControl.c)
 * Callees:
 *     ?DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z @ 0x1807894FC (-DismissViewAnimated@GuidedSnapAssistViewController@@QE$AAAXW4DismissOptions@@@Z.c)
 *     ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x18078BD08 (-SnapAssistDismissed@SnapAssistState@@QEAA-AW4SnapAssistStateTransition@@XZ.c)
 */

void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__GuidedSnapAssistViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  if ( !a2 && !*(_BYTE *)(*(_QWORD *)(a1 + 384) + 152LL) )
  {
    SnapAssistState::SnapAssistDismissed();
    GuidedSnapAssistViewController::DismissViewAnimated(a1, 0);
  }
}
