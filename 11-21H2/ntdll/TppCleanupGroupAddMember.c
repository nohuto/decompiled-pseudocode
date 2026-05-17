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

signed __int64 __fastcall TppCleanupGroupAddMember(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx

  v5 = a1[2];
  RtlAcquireSRWLockExclusive(v5 + 8, a2, a3, a4);
  v6 = a1 + 5;
  v7 = *(_QWORD **)(v5 + 24);
  if ( *v7 != v5 + 16 )
    __fastfail(3u);
  *v6 = v5 + 16;
  a1[6] = v7;
  *v7 = v6;
  *(_QWORD *)(v5 + 24) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 8));
}
