/*
 * XREFs of ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x18004BD9C
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800495FC (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180049C0C (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18004BB38 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004D420 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ExtractMonitorInfo@SearchAppPositionerHelpers@@YA?AUMonitorInfo@@AEBUtagRECT@@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@Z @ 0x1801A4914 (-ExtractMonitorInfo@SearchAppPositionerHelpers@@YA-AUMonitorInfo@@AEBUtagRECT@@V-$ComPtr@UIServi.c)
 *     ?ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA?AUMonitorInfo@@AEBUtagRECT@@@Z @ 0x1803AE3E0 (-ExtractMonitorInfo@MiniSearchAppPositionerConfig@@UEAA-AUMonitorInfo@@AEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3134 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1805F3168 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     InitDPI @ 0x1805E95BC (InitDPI.c)
 */

__int64 __fastcall ExperienceManagerUtils::GetPerMonitorDpi(ExperienceManagerUtils *this, HMONITOR a2)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+38h] [rbp+10h] BYREF

  if ( this && (int)GetDpiForMonitor(this, 0LL, &v3, &v4) >= 0 )
    return v3;
  InitDPI(this, a2);
  return (unsigned int)dword_1807B27F8;
}
