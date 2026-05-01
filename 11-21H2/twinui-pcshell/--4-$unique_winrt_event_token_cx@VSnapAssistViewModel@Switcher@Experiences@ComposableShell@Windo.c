/*
 * XREFs of ??4?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180610F2C
 * Callers:
 *     ?RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PE$AAVSwitcherControlBase@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@9Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180611A18 (-RegisterForEvents@XamlSnapAssistViewController@@QE$AAAXAEBUXamlExplorerHostWindow@XamlExplorerH.c)
 * Callees:
 *     ??$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z @ 0x180010D44 (--$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z.c)
 *     ?reset@?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x180612474 (-reset@-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@W.c)
 */

__int64 *__fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel>::reset();
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    wistd::swap_wil<Platform::WeakReference>((Platform::WeakReference *)(a1 + 1), (Platform::WeakReference *)(a2 + 1));
    v5 = *((_OWORD *)a1 + 1);
    *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a2 + 1) = v5;
    v6 = a1[4];
    a1[4] = a2[4];
    a2[4] = v6;
  }
  return a1;
}
