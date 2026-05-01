/*
 * XREFs of ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAX_N_K@Z @ 0x180447ED8
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAX_N_K@Z @ 0x180204480 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA.c)
 * Callees:
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180447DD4 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 */

__int64 __fastcall _HostWindowActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAX_N_K_Z(
        __int64 a1,
        char a2)
{
  __int64 result; // rax

  if ( !a2 )
    return XamlBaseViewController::DismissView(a1);
  return result;
}
