/*
 * XREFs of NtSerializeBoot @ 0x140861A50
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403B2B90 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140737B00 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
