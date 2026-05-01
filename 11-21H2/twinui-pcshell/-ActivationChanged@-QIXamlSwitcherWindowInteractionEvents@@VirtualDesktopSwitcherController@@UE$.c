/*
 * XREFs of ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1806128C8
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1802121C0 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@VirtualDesktopSwitcherController@@WBI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall _ActivationChanged__QIXamlSwitcherWindowInteractionEvents__VirtualDesktopSwitcherController__UE_AAAXPE_AAVObject_Platform__PE_AAVWindowActivatedEventArgs_Core_UI_Windows___Z(
        __int64 a1)
{
  return VirtualDesktopSwitcherController::DismissVirtualDesktopSwitcherHost(a1);
}
