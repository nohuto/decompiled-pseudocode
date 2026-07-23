/*
 * XREFs of PsGetCurrentThreadStackLimit @ 0x1405E0430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadStackLimit()
{
  return *((_QWORD *)KeGetCurrentThread() + 6);
}
