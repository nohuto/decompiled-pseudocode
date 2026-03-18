/*
 * XREFs of CmpCloseKeyObject @ 0x140718E30
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpSignalDeferredPosts @ 0x140719010 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x140721B0C (CmpDelayedDerefKeys.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char IsKeyDeletedForKeyBody; // al
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int128 v24; // [rsp+40h] [rbp-68h] BYREF
  __int128 v25; // [rsp+50h] [rbp-58h] BYREF
  __int128 v26; // [rsp+60h] [rbp-48h] BYREF
  _OWORD v27[2]; // [rsp+70h] [rbp-38h] BYREF

  v4 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v27, 0x20000uLL);
  CmpInitializeThreadInfo((__int64)&v26);
  if ( CmpTraceRoutine && a2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v25 + 1) = &v25;
    *(_QWORD *)&v25 = &v25;
    *((_QWORD *)&v24 + 1) = &v24;
    *(_QWORD *)&v24 = &v24;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v11 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v11);
      CmpUnlockRegistry(v21, v20, v22, v23);
    }
    else
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(v11 + 32) + 1680LL, 0LL);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 && *(_QWORD *)(v14 + 16) != v14 + 16 )
        CmpPostNotify(v14, v12, v13, 267, 0, (__int64)&v24, (__int64)&v25);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15 + 1680);
      KeAbPostRelease(v15 + 1680);
      CmpUnlockKcb(*(_QWORD *)(a2 + 8));
      CmpUnlockRegistry(v17, v16, v18, v19);
      CmpDelayedDerefKeys(&v24);
      CmpSignalDeferredPosts(&v25);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 27;
    CmpTraceRoutine(v7, v27, 0LL, 0LL, v4, 0LL);
  }
  return CmCleanupThreadInfo((__int64 *)&v26);
}
