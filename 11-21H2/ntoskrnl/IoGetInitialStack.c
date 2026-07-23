/*
 * XREFs of IoGetInitialStack @ 0x140936440
 * Callers:
 *     sub_14060F7E0 @ 0x14060F7E0 (sub_14060F7E0.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return (PVOID)*((_QWORD *)KeGetCurrentThread() + 5);
}
