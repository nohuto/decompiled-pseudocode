/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18005897C
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002A1C0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x1800589EC (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180079258 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x1800822D0 (RtlpHpLfhSubsegmentSetOwner.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketAddSubsegment(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  signed __int64 result; // rax
  char v5; // si
  __int64 v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v5 = a4;
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16, a2, a3, a4);
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  if ( v6 )
    return RtlpHpLfhSubsegmentFree(a1, v6, a2, v5 & 1);
  return result;
}
