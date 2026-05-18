/*
 * XREFs of ?IsRunningInWininit@@YA_NXZ @ 0x180007110
 * Callers:
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x1800078D4 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool IsRunningInWininit(void)
{
  return GetModuleHandleW(L"wininit.exe") != 0LL;
}
