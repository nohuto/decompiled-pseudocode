/*
 * XREFs of PsGetCurrentThreadWin32Thread @ 0x14022B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentThreadWin32Thread()
{
  return *((_QWORD *)KeGetCurrentThread() + 57);
}
