/*
 * XREFs of PsGetProcessExitTime @ 0x1406D9B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PsGetProcessExitTime(void)
{
  return *(LARGE_INTEGER *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2112LL);
}
