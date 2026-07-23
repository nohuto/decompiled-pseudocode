/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x1407539D8
 * Callers:
 *     CmpTryToRundownHive @ 0x1402092DC (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpStartRMLogs @ 0x14069870C (CmpStartRMLogs.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpDoFlushNextHive @ 0x140752110 (CmpDoFlushNextHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16CC8 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  signed __int64 v10; // rdx
  ULONG_PTR v11; // rtt
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v20 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive(v3, v2);
  else
    CmpLockRegistry(v3, v2, v4, v5);
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    v7 = KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&CmpFreezeListLock, v7, (__int64)&CmpFreezeListLock);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    if ( *(__int64 **)qword_140C13E28 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v20 + 1) = qword_140C13E28;
    *(_QWORD *)&v20 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C13E28 = &v20;
    qword_140C13E28 = (__int64)&v20;
    _m_prefetchw(&CmpFreezeListLock);
    v10 = CmpFreezeListLock - 16;
    if ( (CmpFreezeListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v10 = 0LL;
    if ( (CmpFreezeListLock & 2) != 0
      || (v11 = CmpFreezeListLock,
          v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock, v10, CmpFreezeListLock)) )
    {
      ExfReleasePushLock(&CmpFreezeListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpFreezeListLock);
    CmpUnlockRegistry(v13, v12, v14, v15);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive(v17, v16);
    else
      CmpLockRegistry(v17, v16, v18, v19);
  }
  return 0LL;
}
