/*
 * XREFs of ExIsFastResourceHeldExclusive2 @ 0x140413C50
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1403286E0 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403CA320 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x140415548 (ExpFastResourceLegacyAcquireShared2.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x1404155A8 (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceHeldExclusive2(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_QWORD *)(BugCheckParameter2 + 80) == (_QWORD)KeGetCurrentThread();
}
