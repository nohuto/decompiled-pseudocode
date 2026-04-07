/*
 * XREFs of ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003918C
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x180008B60 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180038D74 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003A25C (-UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180040F8C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x1800563C4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?IsInLogonDesktop@CDesktopManager@@SA_NXZ @ 0x1800581CC (-IsInLogonDesktop@CDesktopManager@@SA_NXZ.c)
 *     ?IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1801023D4 (-IsWallpaperViewExisted@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDesktopManager::IsLogonDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  int DesktopID; // eax
  char v5; // dl
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  DesktopID = GetDesktopID(4LL, &v7, a3);
  v5 = 0;
  if ( DesktopID )
    return v7 == a1;
  return v5;
}
