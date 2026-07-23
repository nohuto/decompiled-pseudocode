/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x140236E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return *((_BYTE *)KeGetCurrentThread() + 562);
}
