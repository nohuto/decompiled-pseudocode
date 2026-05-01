/*
 * XREFs of ?ShouldPowershellReplaceCmd@@YA_NXZ @ 0x1805DA214
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char ShouldPowershellReplaceCmd(void)
{
  char v0; // bl
  HANDLE CurrentProcess; // rax
  __int16 v3; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  CurrentProcess = GetCurrentProcess();
  if ( (unsigned int)IsWow64Process2(CurrentProcess, &v4, &v3) && (v3 == 332 || v3 == -31132) )
    return 1;
  return v0;
}
