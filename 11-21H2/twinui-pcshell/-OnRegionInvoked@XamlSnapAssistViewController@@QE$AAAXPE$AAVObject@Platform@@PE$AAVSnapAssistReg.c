/*
 * XREFs of ?OnRegionInvoked@XamlSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806119C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAXXZ @ 0x180611968 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlSnapAssistViewController@@UE$AAAXXZ.c)
 *     ?get@Id@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_KXZ @ 0x1806123BC (-get@Id@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@Windo.c)
 *     ?get@State@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AW4SnapAssistRegionState@3456@XZ @ 0x1806123FC (-get@State@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@Wi.c)
 */

void __fastcall XamlSnapAssistViewController::OnRegionInvoked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  HWND v8; // rax

  if ( (unsigned int)WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistRegionViewModelPublicNonVirtuals::State::get(a3) == 2
    && (v8 = (HWND)WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistRegionViewModelPublicNonVirtuals::Id::get(a3)) != 0LL )
  {
    SetForegroundWindow(v8);
  }
  else
  {
    _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlSnapAssistViewController__UE_AAAXXZ(a1, v5, v6, v7);
  }
}
