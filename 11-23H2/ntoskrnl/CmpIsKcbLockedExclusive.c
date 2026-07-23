/*
 * XREFs of CmpIsKcbLockedExclusive @ 0x1406E9110
 * Callers:
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpIsKcbLockedExclusive(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
