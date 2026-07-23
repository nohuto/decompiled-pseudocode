/*
 * XREFs of TppBarrierAdjust @ 0x180068030
 * Callers:
 *     TppWorkWait @ 0x18002FC48 (TppWorkWait.c)
 *     TppCancelWait @ 0x180030818 (TppCancelWait.c)
 *     TpStartAsyncIoOperation @ 0x180034CE0 (TpStartAsyncIoOperation.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     TpCancelAsyncIoOperation @ 0x18004BC60 (TpCancelAsyncIoOperation.c)
 *     TppWaitCompletion @ 0x18004E7F0 (TppWaitCompletion.c)
 *     TppExecuteWaitCallback @ 0x18004E8C4 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 *     TppAlpcpExecuteCallback @ 0x18004F3F0 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800509C0 (TppJobpExecuteCallback.c)
 *     TpWaitForJobNotification @ 0x180051050 (TpWaitForJobNotification.c)
 *     TpWaitForAlpcCompletion @ 0x180051DB0 (TpWaitForAlpcCompletion.c)
 *     TpReleaseCleanupGroupMembers @ 0x180067D30 (TpReleaseCleanupGroupMembers.c)
 *     TpDisassociateCallback @ 0x180084A50 (TpDisassociateCallback.c)
 *     TpWaitForIoCompletion @ 0x180087A50 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180088000 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180125540 (TppIopCancelPendingCallbacks.c)
 *     TppWorkUnposted @ 0x180125A20 (TppWorkUnposted.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180068180 (TppItePush.c)
 *     TppIteWakeWaiters @ 0x1800681B0 (TppIteWakeWaiters.c)
 *     NtWaitForAlertByThreadId @ 0x1800A29E0 (NtWaitForAlertByThreadId.c)
 */

int __fastcall TppBarrierAdjust(_RTL_SRWLOCK *a1, int a2, int a3)
{
  char v3; // bp
  char v5; // r14
  unsigned __int64 Value; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  signed __int64 v10; // rbx
  signed __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _BYTE v14[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v5 = 0;
  _m_prefetchw(a1);
  Value = a1->Value;
  v8 = a2;
  do
  {
    if ( v5 )
    {
      RtlReleaseSRWLockExclusive(a1 + 1);
      v5 = 0;
    }
    else if ( v3 )
    {
      RtlReleaseSRWLockShared(a1 + 1);
      v3 = 0;
    }
    v9 = Value;
    v10 = (Value ^ (v8 + Value)) & 0xFFFFFFFFFFFFFFFLL ^ Value;
    if ( (v10 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v9 >> 60) & 8) != 0 )
    {
      v10 &= ~0x8000000000000000uLL;
      v5 = 1;
      RtlAcquireSRWLockExclusive(a1 + 1);
    }
    else if ( a3 && (v10 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v10 |= 0x8000000000000000uLL;
      v3 = 1;
      RtlAcquireSRWLockShared(a1 + 1);
    }
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v10, v9);
    Value = v11;
  }
  while ( v9 != v11 );
  if ( v5 )
  {
    v12 = a1[2].Value;
    a1[2].Value = 0LL;
    RtlReleaseSRWLockExclusive(a1 + 1);
    LODWORD(v11) = TppIteWakeWaiters(v12);
  }
  else if ( v3 )
  {
    TppItePush(&a1[2], v14);
    RtlReleaseSRWLockShared(a1 + 1);
    LODWORD(v11) = NtWaitForAlertByThreadId(&a1[2], 0LL);
  }
  return v11;
}
