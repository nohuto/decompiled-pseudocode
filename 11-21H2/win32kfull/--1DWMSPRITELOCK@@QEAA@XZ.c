/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC
 * Callers:
 *     GreGetSprite @ 0x1C0003730 (GreGetSprite.c)
 *     GrePtInSprite @ 0x1C0021164 (GrePtInSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C002168C (GreDwmNotifySpriteMonitorChange.c)
 *     GreZorderSprite @ 0x1C0021834 (GreZorderSprite.c)
 *     GreHintSpriteShape @ 0x1C002198C (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00220C0 (vCleanupUMWindowlessSprite.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004A690 (GreUpdateSpriteVisRgn.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0083498 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0084B9C (GreUpdateSpriteClipRgn.c)
 *     GreDwmGetSurfaceData @ 0x1C00855CC (GreDwmGetSurfaceData.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0097EE0 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C009810C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C00981F8 (GreDwmEnableSoftwareCursorRendering.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00B3DC0 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreGetSpriteAttributes @ 0x1C00B5B04 (GreGetSpriteAttributes.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B85C (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BE20 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026D0B8 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026D294 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C026D910 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026E008 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026E268 (GreWindowResizeStarted.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
}
