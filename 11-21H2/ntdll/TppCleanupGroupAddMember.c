/*
 * XREFs of TppCleanupGroupAddMember @ 0x18007D77C
 * Callers:
 *     TpSimpleTryPost @ 0x18001CC80 (TpSimpleTryPost.c)
 *     TppInitializeTimer @ 0x18001EDC4 (TppInitializeTimer.c)
 *     TpAllocWork @ 0x18001F6F0 (TpAllocWork.c)
 *     TpAllocIoCompletion @ 0x18007D500 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
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
