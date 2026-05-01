/*
 * XREFs of ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x18015DA98 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z @ 0x18036AC2C (-CalculateJumpViewPosition@CPeopleBarJumpViewExperienceManager@@AEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x18036CFCC (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x180386024 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z @ 0x180393988 (-CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180399054 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803993C0 (-ComputeAndOnTraySearchItemChanged@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180399E10 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18039AB18 (-GetSearchBoxHeight@SearchAppDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18039CFF8 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803A5D04 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1803A5EA8 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803A6744 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803A746C (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1803A8148 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803A9BB0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803AA8EC (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F3E08 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x1804F4910 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 */

int __fastcall ExperienceManagerUtils::ScaleByPerMonitorDPI(
        ExperienceManagerUtils *this,
        ExperienceManagerUtils *a2,
        HMONITOR a3)
{
  int v3; // ebx
  int PerMonitorDpi; // eax

  v3 = (int)this;
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(a2, (HMONITOR)a2);
  return MulDiv(v3, PerMonitorDpi, 96);
}
