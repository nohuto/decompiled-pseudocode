/*
 * XREFs of TppCleanupGroupAddMember @ 0x18005B8D0
 * Callers:
 *     TppInitializeTimer @ 0x180030018 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x180033060 (TpSimpleTryPost.c)
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BE60 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180050CA0 (TpAllocJobNotification.c)
 *     TpAllocWork @ 0x18005B790 (TpAllocWork.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall TppCleanupGroupAddMember(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  v2 = a1[2];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v2 + 8));
  v3 = a1 + 5;
  v4 = *(_QWORD **)(v2 + 24);
  if ( *v4 != v2 + 16 )
    __fastfail(3u);
  *v3 = v2 + 16;
  a1[6] = v4;
  *v4 = v3;
  *(_QWORD *)(v2 + 24) = v3;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v2 + 8));
}
