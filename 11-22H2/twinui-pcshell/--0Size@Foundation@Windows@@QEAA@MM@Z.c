/*
 * XREFs of ??0Size@Foundation@Windows@@QEAA@MM@Z @ 0x18007198C
 * Callers:
 *     ?CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1800797E4 (-CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@Compo.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?GetWorkAreaSize@@YA?AVSize@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x1802EC814 (-GetWorkAreaSize@@YA-AVSize@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18076314C (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180764E70 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

Windows::Foundation::Size *__fastcall Windows::Foundation::Size::Size(
        Windows::Foundation::Size *this,
        float a2,
        float a3)
{
  Windows::Foundation::Size *result; // rax

  if ( a2 < 0.0 || a3 < 0.0 )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
    JUMPOUT(0x1800719BCLL);
  }
  *(float *)this = a2;
  result = this;
  *((float *)this + 1) = a3;
  return result;
}
