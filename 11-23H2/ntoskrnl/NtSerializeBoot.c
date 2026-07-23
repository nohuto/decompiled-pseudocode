/*
 * XREFs of NtSerializeBoot @ 0x140861C90
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403B2D70 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
