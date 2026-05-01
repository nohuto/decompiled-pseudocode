/*
 * XREFs of ??$from_cx@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180770E40
 * Callers:
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x180772438 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     ?CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18077DEA4 (-CreateAndAppendTaskGroupVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUIS.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780480 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>, a1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  return a1;
}
