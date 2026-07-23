/*
 * XREFs of CmpFlushNotify @ 0x140699940
 * Callers:
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  char *v10; // rbx

  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    if ( !a2 )
    {
      v7 = KeAbPreAcquire(v6 + 1680, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 1680), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 1680), v7, v6 + 1680);
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( !v9 )
      goto LABEL_19;
    if ( *(_QWORD *)(v9 + 16) != v9 + 16 )
      CmpPostNotify(v9, a2, a3, 267, 0, 0LL, a3);
    v10 = *(char **)(a1 + 16);
    if ( v10 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v10 + 56));
      **((_QWORD **)v10 + 1) = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
        *(_QWORD *)(*(_QWORD *)v10 + 8LL) = *((_QWORD *)v10 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !a2 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1680));
        KeAbPostRelease(v6 + 1680);
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
LABEL_19:
      if ( !a2 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 1680));
        KeAbPostRelease(v6 + 1680);
      }
    }
  }
}
