/*
 * XREFs of PsGetCurrentThreadStackBase @ 0x1405E0410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadStackBase()
{
  return *((_QWORD *)KeGetCurrentThread() + 7);
}
