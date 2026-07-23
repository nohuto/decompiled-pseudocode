/*
 * XREFs of NtSerializeBoot @ 0x140861B20
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403B2500 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
