/*
 * XREFs of ?OnRegionInvoked@GuidedSnapAssistViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVSnapAssistRegionViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180789DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXXZ @ 0x180789D98 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@GuidedSnapAssistViewController@@UE$AAAXX.c)
 *     ?get@Id@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA_KXZ @ 0x18078A8CC (-get@Id@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@Windo.c)
 *     ?get@State@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA?AW4SnapAssistRegionState@3456@XZ @ 0x18078A90C (-get@State@__ISnapAssistRegionViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?SnapAssistDismissed@SnapAssistState@@QEAA?AW4SnapAssistStateTransition@@XZ @ 0x18078BD08 (-SnapAssistDismissed@SnapAssistState@@QEAA-AW4SnapAssistStateTransition@@XZ.c)
 */

void __fastcall GuidedSnapAssistViewController::OnRegionInvoked(__int64 a1, __int64 a2, __int64 a3)
{
  HWND v5; // rax

  SnapAssistState::SnapAssistDismissed(*(_QWORD *)(a1 + 384));
  if ( (unsigned int)WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistRegionViewModelPublicNonVirtuals::State::get(a3) == 2
    && (v5 = (HWND)WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistRegionViewModelPublicNonVirtuals::Id::get(a3)) != 0LL )
  {
    SetForegroundWindow(v5);
  }
  else
  {
    _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__GuidedSnapAssistViewController__UE_AAAXXZ(a1);
  }
}
