/*
 * XREFs of ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18012E3CC
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180044D40 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x18012E080 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x18012E1A0 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18012E670 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801AD890 (-IsFindInStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ @ 0x1801AD970 (-IsTaskbarSearchVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180450174 (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180451C00 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180452290 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x18012E400 (-IsFullscreenCXHRunning@@YA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 1049) || *((_BYTE *)this + 1050) || IsFullscreenCXHRunning() )
    return 1;
  return v1;
}
