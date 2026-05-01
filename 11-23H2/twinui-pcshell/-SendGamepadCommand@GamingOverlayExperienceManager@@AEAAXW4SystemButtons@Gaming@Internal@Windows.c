/*
 * XREFs of ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAAXW4SystemButtons@Gaming@Internal@Windows@@W4ButtonPressType@@@Z @ 0x18040694C
 * Callers:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180400338 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 *     ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x1804032D0 (-OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Window.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803FBE14 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180401954 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::SendGamepadCommand(GamingOverlayExperienceManager *a1, int a2, int a3)
{
  const WCHAR *v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GamingOverlayExperienceManager::GameBarSupportsGamepadCommands(a1) )
  {
    if ( a2 == 2 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          v6 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_LONGPRESS&source=GbEm";
        }
        else
        {
          if ( a3 != 2 )
            return;
          v6 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_DOUBLEPRESS&source=GbEm";
        }
      }
      else
      {
        v6 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_SHORTPRESS&source=GbEm";
      }
    }
    else
    {
      if ( a2 != 1 )
        return;
      if ( a3 )
      {
        if ( a3 == 1 )
        {
          v6 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_LONGPRESS&source=GbEm";
        }
        else
        {
          if ( a3 != 2 )
            return;
          v6 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_DOUBLEPRESS&source=GbEm";
        }
      }
      else
      {
        v6 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_SHORTPRESS&source=GbEm";
      }
    }
    v7 = GamingOverlayExperienceManager::LaunchGameBar(a1, v6, 7u);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1321,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
}
