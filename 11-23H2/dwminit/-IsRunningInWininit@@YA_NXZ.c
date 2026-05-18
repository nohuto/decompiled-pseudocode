/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x18000ADF0
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x18000B5B4 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
