/*
 * XREFs of ?DelegationOn@@YA_NW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180150C90
 * Callers:
 *     ?SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z @ 0x1801510D0 (-SetDelegateInformation@InputDelegationInputObjectProxy@@UEAAXIII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DelegationOn(char a1)
{
  return (a1 & 1) == 0 && (a1 & 0xE) != 0;
}
