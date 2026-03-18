/*
 * XREFs of KeAreApcsDisabled @ 0x14031D5E0
 * Callers:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
