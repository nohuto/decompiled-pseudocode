/*
 * XREFs of KeIsAttachedProcess @ 0x14033D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return *((_BYTE *)KeGetCurrentThread() + 586) == 1;
}
