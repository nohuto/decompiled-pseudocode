/*
 * XREFs of ViDeadlockSimilarNodes @ 0x140AD9F10
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140AD8C04 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140AD8C84 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ViDeadlockSimilarNodes(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 56) == *(_QWORD *)(a2 + 56) && ((*(_DWORD *)(a2 + 72) ^ *(_DWORD *)(a1 + 72)) & 2) == 0;
}
