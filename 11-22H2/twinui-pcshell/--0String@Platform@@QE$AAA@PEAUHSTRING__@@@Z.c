/*
 * XREFs of ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x1802ECF96
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18077FE60 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18018AFEC (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, Platform::Details *a2, HSTRING *a3)
{
  HSTRING v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Platform::Details::DuplicateString(a2, &v4, a3);
  return v4;
}
