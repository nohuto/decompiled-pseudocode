/*
 * XREFs of TppBarrierAdjust @ 0x180068010
 * Callers:
 *     TppWorkWait @ 0x18002FA78 (TppWorkWait.c)
 *     TppCancelWait @ 0x180030648 (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x180034B80 (TpStartAsyncIoOperation.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     TpCancelAsyncIoOperation @ 0x18004BB00 (TpCancelAsyncIoOperation.c)
 *     TppWaitCompletion @ 0x18004E690 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18004E764 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EB28 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18004F290 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180050860 (TppJobpExecuteCallback.c)
 *     TpWaitForJobNotification @ 0x180050EF0 (TpWaitForJobNotification.c)
 *     TpWaitForAlpcCompletion @ 0x180051C50 (TpWaitForAlpcCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x180067D10 (TpReleaseCleanupGroupMembers.c)
 *     TpDisassociateCallback @ 0x180085250 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180088250 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088800 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x1801269F0 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180126ED0 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180068160 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x180068190 (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
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
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( v5 && v12 )
    {
      v11 |= 0x8000000000000000uLL;
      v4 = 1;
      RtlAcquireSRWLockShared(a1 + 1, v12, a3, a4);
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
