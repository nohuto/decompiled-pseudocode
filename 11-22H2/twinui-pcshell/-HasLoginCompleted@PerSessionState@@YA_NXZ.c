/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1800F4580
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x1800F3DDC (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800F403C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x1800F4440 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x180501630 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1800F45C0 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 *     PerSessionState::_DoesSessionKeyExist @ 0x1800F466C (PerSessionState--_DoesSessionKeyExist.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_18098D6E0;
  if ( !byte_18098D6E0 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_18098D6E0 = result;
  }
  return result;
}
