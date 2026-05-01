/*
 * XREFs of ??$swap_wil@VWeakReference@Platform@@@wistd@@YAXAEAVWeakReference@Platform@@0@Z @ 0x180010D44
 * Callers:
 *     ??4?$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800102EC (--4-$unique_winrt_event_token_cx@VVirtualDesktopBarElementViewModel@Switcher@Experiences@Composa.c)
 *     ?RegisterForEvents@TaskViewFrame@@AEAAXXZ @ 0x180010454 (-RegisterForEvents@TaskViewFrame@@AEAAXXZ.c)
 *     ??4?$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010CDC (--4-$unique_winrt_event_token_cx@UISwitcherViewModel@Switcher@Experiences@ComposableShell@Window.c)
 *     ??4?$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180610F2C (--4-$unique_winrt_event_token_cx@VSnapAssistViewModel@Switcher@Experiences@ComposableShell@Windo.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::swap_wil<Platform::WeakReference>(Platform::WeakReference *a1, Platform::WeakReference *a2)
{
  __int64 v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  Platform::WeakReference::InternalRelease(a1);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  Platform::WeakReference::InternalRelease(a2);
  *(_QWORD *)a2 = v4;
  v5 = 0LL;
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v5);
}
