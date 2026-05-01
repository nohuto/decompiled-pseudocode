/*
 * XREFs of ??4?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007E374
 * Callers:
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x18007D65C (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     ??$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z @ 0x18007E064 (--$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z.c)
 *     ?reset@?$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAXXZ @ 0x18007E8C0 (-reset@-$unique_winrt_event_token_cx@VTaskViewTimeline@Switcher@Experiences@ComposableShell@Wind.c)
 */

__int64 *__fastcall wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    wil::unique_winrt_event_token_cx<WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimeline>::reset();
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
