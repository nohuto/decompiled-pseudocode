/*
 * XREFs of PsGetProcessExitProcessCalled @ 0x140366600
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140AE02D0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsGetProcessExitProcessCalled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 4) != 0;
}
