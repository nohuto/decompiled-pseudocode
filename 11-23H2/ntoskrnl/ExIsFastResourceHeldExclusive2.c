/*
 * XREFs of ExIsFastResourceHeldExclusive2 @ 0x140413FE4
 * Callers:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140328970 (ExIsResourceAcquiredExclusiveLite.c)
 *     ExIsFastResourceHeldExclusive @ 0x1403CA500 (ExIsFastResourceHeldExclusive.c)
 *     ExpFastResourceLegacyAcquireShared2 @ 0x1404158DC (ExpFastResourceLegacyAcquireShared2.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive2 @ 0x14041593C (ExpFastResourceLegacyAcquireSharedStarveExclusive2.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
