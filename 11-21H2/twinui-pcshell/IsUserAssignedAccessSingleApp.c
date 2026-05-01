/*
 * XREFs of IsUserAssignedAccessSingleApp @ 0x18010773C
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC2D0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BC7F0 (-UpdateSettingsLauncherAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800BCC14 (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180114F20 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18039BD00 (-OnMessage@SearchAppDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803A9310 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803A9758 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ @ 0x1805CD0E8 (-IsDisabledForMachineConfig@details@MeetAndChatHelpers@@YA_NXZ.c)
 * Callees:
 *     GetAssignedAccessTypeForUser @ 0x18010778C (GetAssignedAccessTypeForUser.c)
 *     GetSidStringFromToken @ 0x180108224 (GetSidStringFromToken.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180175474 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall IsUserAssignedAccessSingleApp(void *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  LPWSTR v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  memset(v4, 0, 24);
  if ( (int)GetSidStringFromToken(a1, v4) >= 0 )
  {
    LOBYTE(v2) = 1;
    LOBYTE(v1) = (unsigned int)GetAssignedAccessTypeForUser(v4[0], v2) == 1;
  }
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(v4);
  return v1;
}
