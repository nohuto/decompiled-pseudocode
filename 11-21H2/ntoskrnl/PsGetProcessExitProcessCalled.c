/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140251B90
 * Callers:
 *     sub_140AA4550 @ 0x140AA4550 (sub_140AA4550.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
