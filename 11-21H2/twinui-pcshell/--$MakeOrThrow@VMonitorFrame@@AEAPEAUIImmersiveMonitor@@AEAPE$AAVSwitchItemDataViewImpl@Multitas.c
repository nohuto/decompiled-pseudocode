/*
 * XREFs of ??$MakeOrThrow@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@4567@AEAPE$AAUIVirtualDesktopDataSource@4567@@wil@@YA?AV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@6789@AEAPE$AAUIVirtualDesktopDataSource@6789@@Z @ 0x18042BAF8
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@4567@AEAPE$AAUIVirtualDesktopDataSource@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMonitorFrame@@@12@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AEAPE$AAUIXamlMultitaskingViewController@@$$QEAPE$AAUIXamlSwitcherWindowInteractionEvents@@AEAPE$AAUIVirtualDesktopController@6789@AEAPE$AAUIVirtualDesktopDataSource@6789@@Z @ 0x18042B7E8 (--$Make@VMonitorFrame@@AEAPEAUIImmersiveMonitor@@AEAPE$AAVSwitchItemDataViewImpl@Multitasking@Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController __gc * &,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc * &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::WRL::Details::Make<MonitorFrame,IImmersiveMonitor * &,Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl __gc * &,IXamlMultitaskingViewController __gc * &,IXamlSwitcherWindowInteractionEvents __gc *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController __gc * &,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource __gc * &>(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v8);
  return a1;
}
