/*
 * XREFs of ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180447CA8
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180204400 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?get@WindowActivationState@IWindowActivatedEventArgs@Core@UI@Windows@@UE$AAA?AW4CoreWindowActivationState@345@XZ @ 0x1804477FC (-get@WindowActivationState@IWindowActivatedEventArgs@Core@UI@Windows@@UE$AAA-AW4CoreWindowActiva.c)
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180447DD4 (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 */

__int64 __fastcall _ActivationChanged__QIXamlSwitcherWindowInteractionEvents__XamlBaseViewController__UE_AAAXPE_AAVObject_Platform__PE_AAVWindowActivatedEventArgs_Core_UI_Windows___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = Windows::UI::Core::IWindowActivatedEventArgs::WindowActivationState::get(a3);
  if ( (_DWORD)result == 1 )
    return XamlBaseViewController::DismissView(a1);
  return result;
}
