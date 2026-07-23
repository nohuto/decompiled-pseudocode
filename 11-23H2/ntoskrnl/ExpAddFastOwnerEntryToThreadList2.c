/*
 * XREFs of ExpAddFastOwnerEntryToThreadList2 @ 0x140415604
 * Callers:
 *     ExAcquireFastResourceWithFlags @ 0x1404124C0 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412D74 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x140413034 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x140413370 (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x1404138B0 (ExDisownFastResource2.c)
 *     ExInitializeFastResourceAcquired2 @ 0x140413C48 (ExInitializeFastResourceAcquired2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x140414B20 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414EA4 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x1404156C0 (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x14041583C (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140415E10 (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpAddFastOwnerEntryToThreadList2(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  if ( a3 )
    result = (__int64 *)(a1 + 1680);
  else
    result = (__int64 *)(a1 + 1656);
  v5 = *result;
  if ( *(__int64 **)(*result + 8) != result )
    __fastfail(3u);
  *a4 = v5;
  a4[1] = result;
  *(_QWORD *)(v5 + 8) = a4;
  *result = (__int64)a4;
  return result;
}
