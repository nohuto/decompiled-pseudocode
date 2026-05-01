/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180065F3C
 * Callers:
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180064CD0 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x180069490 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x180114A18 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180114F20 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18044B790 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x180065F7C (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x180066028 (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_1807B3A28;
  if ( !byte_1807B3A28 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_1807B3A28 = result;
  }
  return result;
}
