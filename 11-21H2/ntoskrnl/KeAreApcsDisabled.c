/*
 * XREFs of KeAreApcsDisabled @ 0x1402D61E0
 * Callers:
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return *((_DWORD *)KeGetCurrentThread() + 121) != 0;
}
