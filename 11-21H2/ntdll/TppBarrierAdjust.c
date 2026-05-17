/*
 * XREFs of TppBarrierAdjust @ 0x18006BAEC
 * Callers:
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     TppWorkPost @ 0x18001B54C (TppWorkPost.c)
 *     TpStartAsyncIoOperation @ 0x18001B860 (TpStartAsyncIoOperation.c)
 *     TppCancelWait @ 0x18001EC80 (TppCancelWait.c)
 *     TppWorkWait @ 0x18001F59C (TppWorkWait.c)
 *     TppWaitCompletion @ 0x18001FD80 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     TpReleaseCleanupGroupMembers @ 0x18006B800 (TpReleaseCleanupGroupMembers.c)
 *     TpWaitForAlpcCompletion @ 0x1800813F0 (TpWaitForAlpcCompletion.c)
 *     TpCancelAsyncIoOperation @ 0x180082750 (TpCancelAsyncIoOperation.c)
 *     TpWaitForJobNotification @ 0x180085980 (TpWaitForJobNotification.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 *     TpDisassociateCallback @ 0x180088140 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x18008A0E0 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x18008CF20 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180123B00 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180123FE0 (TppWorkUnposted.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     TppItePush @ 0x18006BC3C (TppItePush.c)
 *     TppIteWakeWaiters @ 0x18006BC6C (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A7BE0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall TppBarrierAdjust(volatile signed __int64 *a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char v4; // bp
  int v5; // r15d
  char v6; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = 0;
  _m_prefetchw((const void *)a1);
  v8 = *a1;
  v9 = a2;
  do
  {
    if ( v6 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v6 = 0;
    }
    else if ( v4 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v4 = 0;
    }
    v10 = v8;
    v11 = (v8 ^ (v9 + v8)) & 0xFFFFFFFFFFFFFFFLL ^ v8;
    v12 = v11 & 0xFFFFFFFFFFFFFFFLL;
    if ( (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v10 >> 60) & 8) != 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v6 = 1;
      RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 1), v12, a3, a4);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    result = _InterlockedCompareExchange64(a1, v11, v10);
    v8 = result;
  }
  while ( v10 != result );
  if ( v6 )
  {
    v14 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 2) = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    return TppIteWakeWaiters(v14);
  }
  else if ( v4 )
  {
    TppItePush(a1 + 2, v15);
    RtlReleaseSRWLockShared(a1 + 1);
    return NtWaitForAlertByThreadId(a1 + 2, 0LL);
  }
  return result;
}
