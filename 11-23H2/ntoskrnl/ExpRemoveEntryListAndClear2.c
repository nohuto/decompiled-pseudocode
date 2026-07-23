/*
 * XREFs of ExpRemoveEntryListAndClear2 @ 0x140416B00
 * Callers:
 *     ExDisownFastResource2 @ 0x1404138B0 (ExDisownFastResource2.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x1404156C0 (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x14041583C (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x140415E10 (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x1404163AC (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x14041655C (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x1404166FC (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceShared2 @ 0x140416910 (ExpReleaseFastResourceShared2.c)
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
