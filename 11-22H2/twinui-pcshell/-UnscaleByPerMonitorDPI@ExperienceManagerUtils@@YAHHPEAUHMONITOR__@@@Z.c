/*
 * XREFs of ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1807493DC
 * Callers:
 *     ?CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_NPEAH@Z @ 0x18043223C (-CalculateScaling@ImeNotificationExperienceManager@@AEAAJHPEAUHMONITOR__@@AEBUtagMONITORINFO@@_N.c)
 *     ?BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180477390 (-BuildAdditionalArgsString@SearchAppDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING_.c)
 *     ?NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047A294 (-NotifyTaskbarSearchBoxChanged@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1804813D0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180484418 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180486518 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1800D5CD4 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 */

int __fastcall ExperienceManagerUtils::UnscaleByPerMonitorDPI(
        ExperienceManagerUtils *this,
        ExperienceManagerUtils *a2,
        HMONITOR a3)
{
  int v3; // ebx
  int PerMonitorDpi; // eax

  v3 = (int)this;
  PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(a2, (HMONITOR)a2);
  return MulDiv(v3, 96, PerMonitorDpi);
}
