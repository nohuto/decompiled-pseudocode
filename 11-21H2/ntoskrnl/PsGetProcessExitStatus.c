/*
 * XREFs of PsGetProcessExitStatus @ 0x1406EBC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsGetProcessExitStatus(PEPROCESS Process)
{
  return *((_DWORD *)Process + 501);
}
