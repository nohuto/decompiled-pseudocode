/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x180081460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0x7FFE02F0] & 0x200) != 0;
}
