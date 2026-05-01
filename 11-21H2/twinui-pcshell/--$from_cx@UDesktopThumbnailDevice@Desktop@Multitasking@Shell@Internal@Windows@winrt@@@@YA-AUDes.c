/*
 * XREFs of ??$from_cx@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@@YA?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1805FFD94
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall from_cx<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::IThumbnailDevice>, a1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  return a1;
}
