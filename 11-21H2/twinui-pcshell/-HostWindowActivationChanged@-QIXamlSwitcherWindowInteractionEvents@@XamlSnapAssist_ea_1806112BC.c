/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAX_N_K@Z @ 0x1806112BC
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@WBI@E$AAAX_N_K@Z @ 0x180211D20 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewControlle.c)
 * Callees:
 *     ?DismissViewAnimated@XamlSnapAssistViewController@@AE$AAAXXZ @ 0x180611130 (-DismissViewAnimated@XamlSnapAssistViewController@@AE$AAAXXZ.c)
 */

void __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlSnapAssistViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  if ( !a2 )
    XamlSnapAssistViewController::DismissViewAnimated(a1);
}
