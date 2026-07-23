/*
 * XREFs of NtFlushKey @ 0x1407AC6B0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     CmpDoFlushAll @ 0x1402F6BDC (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  int v1; // ebx
  void *v2; // rdi
  char v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  char v11; // r13
  int v12; // ebx
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v34[2]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v35; // [rsp+68h] [rbp-59h] BYREF
  __int128 v36[2]; // [rsp+78h] [rbp-49h] BYREF
  _OWORD v37[3]; // [rsp+98h] [rbp-29h] BYREF
  _OWORD v38[2]; // [rsp+C8h] [rbp+7h] BYREF

  v33 = 0LL;
  v1 = (int)KeyHandle;
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v38, 0x20000LL);
  v2 = 0LL;
  v34[1] = v34;
  v32 = 0LL;
  v34[0] = v34;
  v3 = 0;
  CmpInitializeThreadInfo((__int64)&v35);
  v11 = CmpAcquireShutdownRundown(v5, v4, v6);
  if ( !v11 )
  {
    v12 = -1073741431;
    goto LABEL_26;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v10) = PreviousMode;
  v12 = CmObReferenceObjectByHandle(v1, 0, v9, v10, (__int64)&v32, (__int64)&v33);
  if ( v12 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v15 = (__int64)v32;
    --CurrentThread->KernelApcDisable;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 32LL) + 160LL) & 2) != 0
      && PreviousMode
      && (~HIDWORD(v33) & 0x20006) != 0 )
    {
      v12 = -1073741790;
LABEL_24:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_25;
    }
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v36[0] = v15;
      v16 = CmpCallCallBacksEx(0x1Eu, v36, 0LL, 1, 0x1Fu, v15, (__int64)v34);
      v12 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073740541 )
          v12 = 0;
        goto LABEL_24;
      }
      v3 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    CmpLockKcbShared(*(_QWORD *)(v15 + 8));
    v12 = CmpPerformKeyBodyDeletionCheck(v15, 0LL);
    if ( v12 >= 0 )
    {
      v17 = *(_QWORD *)(v15 + 8);
      v18 = *(struct _EX_RUNDOWN_REF **)(v17 + 32);
      if ( v18 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v17);
        CmpUnlockRegistry(v20, v19, v21, v22);
        CmpAttachToRegistryProcess(v37);
        CmpDoFlushAll();
        CmpDetachFromRegistryProcess(v37);
        v12 = 0;
        goto LABEL_22;
      }
      if ( ExAcquireRundownProtection_0(v18 + 205) )
      {
        CmpUnlockKcb(*(_QWORD *)(v15 + 8));
        CmpUnlockRegistry(v29, v28, v30, v31);
        CmpAttachToRegistryProcess(v37);
        v12 = CmpFlushHive((ULONG_PTR)v18, 0);
        if ( v12 < 0 )
          v12 = -1073741491;
        CmpDetachFromRegistryProcess(v37);
        ExReleaseRundownProtection_0(v18 + 205);
        goto LABEL_22;
      }
      v12 = -1073740763;
    }
    CmpUnlockKcb(*(_QWORD *)(v15 + 8));
    CmpUnlockRegistry(v24, v23, v25, v26);
LABEL_22:
    if ( v3 )
      v12 = CmPostCallbackNotificationEx(31, v15, v12, (__int64)v36, 0LL, v34);
    goto LABEL_24;
  }
LABEL_25:
  v2 = v32;
LABEL_26:
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 21;
    CmpTraceRoutine(v8, v38, (unsigned int)v12, 0LL);
  }
  if ( v11 )
    CmpReleaseShutdownRundown(v8, v7);
  CmCleanupThreadInfo((__int64 *)&v35);
  return v12;
}
