/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAX_N_K@Z @ 0x180612984
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI@E$AAAX_N_K@Z @ 0x180212200 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherContr.c)
 * Callees:
 *     ?DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806128D4 (-DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 */

void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__VirtualDesktopSwitcherController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  if ( !a2 )
    VirtualDesktopSwitcherController::DismissVirtualDesktopSwitcherHost(a1);
}
