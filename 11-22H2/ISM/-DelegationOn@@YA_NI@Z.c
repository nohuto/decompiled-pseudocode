/*
 * XREFs of ?DelegationOn@@YA_NI@Z @ 0x1800031C8
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DelegationOn(char a1)
{
  bool result; // al

  if ( (a1 & 0xE) == 0 )
    return 0;
  result = 1;
  if ( (a1 & 1) != 0 )
    return 0;
  return result;
}
