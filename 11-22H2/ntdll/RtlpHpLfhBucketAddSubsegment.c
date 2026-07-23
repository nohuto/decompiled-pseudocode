/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x180067850
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18003E3B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1800678C0 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180072898 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18007D170 (RtlpHpLfhSubsegmentSetOwner.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    RtlpHpLfhSubsegmentFree(a1, v5, a2, a4 & 1);
}
