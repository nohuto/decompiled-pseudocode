/*
 * XREFs of TppCleanupGroupAddMember @ 0x1800610A0
 * Callers:
 *     TppInitializeTimer @ 0x18002FE48 (TppInitializeTimer.c)
 *     TpSimpleTryPost @ 0x180032F00 (TpSimpleTryPost.c)
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BD00 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180050B40 (TpAllocJobNotification.c)
 *     TpAllocWork @ 0x180060F60 (TpAllocWork.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
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
