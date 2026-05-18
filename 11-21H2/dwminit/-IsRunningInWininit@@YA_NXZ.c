/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x180005020
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180005BA8 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
