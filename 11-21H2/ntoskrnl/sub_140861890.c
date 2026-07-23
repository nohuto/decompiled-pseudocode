/*
 * XREFs of sub_140861890 @ 0x140861890
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DCD34 @ 0x1403DCD34 (sub_1403DCD34.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS sub_140861890()
{
  if ( *((_BYTE *)KeGetCurrentThread() + 562) != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(stru_140D3CA10, 1) )
    return sub_1403DCD34();
  return -1073741727;
}
