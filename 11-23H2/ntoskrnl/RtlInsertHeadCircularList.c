/*
 * XREFs of RtlInsertHeadCircularList @ 0x14034F640
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x14023DDC0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402633E0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C8950 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C9180 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C98E0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414B10 (ExpAcquireFastResourceSharedSlow.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A730B0 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInsertHeadCircularList(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8

  result = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD **)(result + 8);
    if ( *v3 != result )
      __fastfail(3u);
    *a2 = result;
    a2[1] = v3;
    *v3 = a2;
    *(_QWORD *)(result + 8) = a2;
  }
  else
  {
    a2[1] = a2;
    *a2 = a2;
  }
  *a1 = (__int64)a2;
  return result;
}
