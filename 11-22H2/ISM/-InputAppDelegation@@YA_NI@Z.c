/*
 * XREFs of ?InputAppDelegation@@YA_NI@Z @ 0x18005EB80
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180025C90 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputAppDelegation(char a1)
{
  return (a1 & 0x40) != 0;
}
