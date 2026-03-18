/*
 * XREFs of ExpRemoveEntryListAndClear2 @ 0x14041676C
 * Callers:
 *     ExDisownFastResource2 @ 0x14041351C (ExDisownFastResource2.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x14041532C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x1404154A8 (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140415A7C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140416018 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x1404161C8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x140416368 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041657C (ExpReleaseFastResourceShared2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpRemoveEntryListAndClear2(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
    __fastfail(3u);
  *v2 = result;
  *(_QWORD *)(result + 8) = v2;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
