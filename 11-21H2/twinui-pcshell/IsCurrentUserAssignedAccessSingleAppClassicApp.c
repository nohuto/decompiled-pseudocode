/*
 * XREFs of IsCurrentUserAssignedAccessSingleAppClassicApp @ 0x1805F41DC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180114F20 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     IsUserSidAssignedAccessSingleAppClassicApp @ 0x18010651C (IsUserSidAssignedAccessSingleAppClassicApp.c)
 *     GetSidStringFromToken @ 0x180108224 (GetSidStringFromToken.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180175474 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

_BOOL8 IsCurrentUserAssignedAccessSingleAppClassicApp()
{
  BOOL v0; // ebx
  __int64 v1; // rdx
  LPWSTR v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  memset(v3, 0, 24);
  if ( (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, v3) >= 0 )
    v0 = IsUserSidAssignedAccessSingleAppClassicApp((__int64)v3[0], v1);
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free((__int64)v3);
  return v0;
}
