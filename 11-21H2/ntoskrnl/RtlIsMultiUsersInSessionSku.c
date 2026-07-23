/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x1409B9200
 * Callers:
 *     sub_140372788 @ 0x140372788 (sub_140372788.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
