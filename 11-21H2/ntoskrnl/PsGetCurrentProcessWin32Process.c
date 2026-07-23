/*
 * XREFs of PsGetCurrentProcessWin32Process @ 0x1402232F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessWin32Process()
{
  return *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1288LL);
}
