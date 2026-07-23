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

void __fastcall TppCleanupGroupAddMember(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rbx
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK **Value; // rdx

  v2 = *(_RTL_SRWLOCK **)(a1 + 16);
  RtlAcquireSRWLockExclusive(v2 + 1);
  v3 = (_RTL_SRWLOCK *)(a1 + 40);
  Value = (_RTL_SRWLOCK **)v2[3].Value;
  if ( *Value != &v2[2] )
    __fastfail(3u);
  v3->Value = (unsigned __int64)&v2[2];
  *(_QWORD *)(a1 + 48) = Value;
  *Value = v3;
  v2[3].Value = (unsigned __int64)v3;
  RtlReleaseSRWLockExclusive(v2 + 1);
}
