/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140251B90
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AA4550 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
