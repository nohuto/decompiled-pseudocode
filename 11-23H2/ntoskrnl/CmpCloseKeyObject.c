/*
 * XREFs of CmpCloseKeyObject @ 0x140768280
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmpDelayedDerefKeys @ 0x1406D589C (CmpDelayedDerefKeys.c)
 *     CmpPostNotify @ 0x140766A50 (CmpPostNotify.c)
 *     CmpSignalDeferredPosts @ 0x1407684A4 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int128 v27; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+50h] [rbp-58h] BYREF
  __int128 v29; // [rsp+60h] [rbp-48h] BYREF
  _OWORD v30[2]; // [rsp+70h] [rbp-38h] BYREF

  memset(v30, 0, sizeof(v30));
  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v30, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v29);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v28 + 1) = &v28;
    *(_QWORD *)&v28 = &v28;
    *((_QWORD *)&v27 + 1) = &v27;
    *(_QWORD *)&v27 = &v27;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry(v7, v6, v8, v9);
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
    {
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v24, v23, v25, v26);
    }
    else
    {
      v12 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 1680LL);
      v13 = KeAbPreAcquire((__int64)v12, 0LL);
      v16 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
      if ( v16 )
        *(_BYTE *)(v16 + 18) = 1;
      v17 = *(_QWORD *)(a2 + 16);
      if ( v17 && *(_QWORD *)(v17 + 16) != v17 + 16 )
        CmpPostNotify(v17, v14, v15, 267LL, 0, (void **)&v27, &v28);
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 1680));
      KeAbPostRelease(v18 + 1680);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v20, v19, v21, v22);
      CmpDelayedDerefKeys((void **)&v27);
      CmpSignalDeferredPosts(&v28);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 27;
    CmpTraceRoutine(v7, v30, 0LL, 0LL);
  }
  return CmCleanupThreadInfo((__int64 *)&v29);
}
