/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x140981D2C
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140981FD0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140982610 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x14058A720 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
