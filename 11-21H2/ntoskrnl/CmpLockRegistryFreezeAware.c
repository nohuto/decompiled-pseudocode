/*
 * XREFs of CmpLockRegistryFreezeAware @ 0x140689388
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     NtFlushKey @ 0x1406A5C00 (NtFlushKey.c)
 *     CmpDoFlushNextHive @ 0x1407174E0 (CmpDoFlushNextHive.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmpStartRMLogs @ 0x140742980 (CmpStartRMLogs.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpLockRegistryFreezeAware(char a1)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( a1 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  while ( CmpFreezeThawState == 1 )
  {
    KeResetEvent(&Event);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    if ( *(__int64 **)qword_140C49258 != &CmpFreezeThawWaitListHead )
      __fastfail(3u);
    *((_QWORD *)&v9 + 1) = qword_140C49258;
    *(_QWORD *)&v9 = &CmpFreezeThawWaitListHead;
    *(_QWORD *)qword_140C49258 = &v9;
    qword_140C49258 = (__int64)&v9;
    ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
    CmpUnlockRegistry(v4, v3, v5, v6, v7, v8);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( a1 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
  }
  return 0LL;
}
