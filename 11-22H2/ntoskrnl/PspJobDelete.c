/*
 * XREFs of PspJobDelete @ 0x140207000
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExDeleteResourceLite @ 0x1402A8CA0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14041C280 (ZwDeleteWnfStateName.c)
 *     PspRemoveCpuRateControl @ 0x140684E4C (PspRemoveCpuRateControl.c)
 *     PspJobIoRateControlDisable @ 0x140687E3C (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x140687EA0 (PspJobDeleteStorageArrays.c)
 *     PspUnlockJobListExclusive @ 0x140688AA0 (PspUnlockJobListExclusive.c)
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14069EF88 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockRootJobExclusive @ 0x14069F000 (PspLockRootJobExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14069F5E8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x14069F70C (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobConditionally @ 0x1406A30A0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406A30D0 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406A3DF8 (PspLockJobExclusive.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     ExDestroyHandle @ 0x14073FFAC (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x140740120 (ExMapHandleToPointer.c)
 *     IoFreeMiniCompletionPacket @ 0x14076CD50 (IoFreeMiniCompletionPacket.c)
 *     PspEmptyPropertySet @ 0x14076E7C4 (PspEmptyPropertySet.c)
 *     PspRemoveIoAttribution @ 0x1407D8B60 (PspRemoveIoAttribution.c)
 *     PspDeleteSilo @ 0x1409AD10C (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1409B2694 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1409B290C (PspRemoveRateControl.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rcx
  char **v6; // rdx
  PVOID *v7; // rcx
  void *v8; // rcx
  char *v9; // rax
  char *v10; // rcx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  LONG_PTR result; // rax
  void *v15; // rcx
  char **v16; // rdx
  void *v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  __int128 v21; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-21h]
  _OWORD v23[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+70h] [rbp+7h]
  _OWORD v25[2]; // [rsp+78h] [rbp+Fh] BYREF
  int v26; // [rsp+98h] [rbp+2Fh]

  v24 = 0LL;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  v26 = 0;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v25, 0, sizeof(v25));
  v20 = 0LL;
  PspEmptyPropertySet(Object + 1496);
  PspJobDeleteStorageArrays(Object);
  v3 = (__int64 *)(Object + 1528);
  if ( *((_QWORD *)Object + 153) || *v3 )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v20);
    PspLockJobConditionally(Object, &v20);
    if ( *((_QWORD *)Object + 153) )
      PspRemoveCpuRateControl(Object);
    v18 = *v3;
    if ( *v3 )
    {
      memset((char *)v23 + 8, 0, 24);
      v24 = 4LL;
      *(_QWORD *)&v23[0] = *(_QWORD *)(v18 + 56);
      PspNetRateControlDispatch(v23);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobConditionally(Object, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 196) )
  {
    PspLockRootJobExclusive(Object, CurrentThread, &v20);
    PspLockJobConditionally(Object, &v20);
    if ( *((_QWORD *)Object + 196) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobConditionally(Object, &v20);
    PspUnlockJob(v20, CurrentThread);
  }
  LODWORD(v20) = *((_DWORD *)Object + 144);
  if ( (unsigned int)v20 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v21 = Object;
    DWORD2(v21) = 2;
    v22 = 0LL;
    PspLockJobExclusive(Object, CurrentThread);
    PsInvokeWin32Callout(6LL, &v21, 1LL, &v20);
    PspUnlockJob(Object, CurrentThread);
  }
  v4 = (void *)*((_QWORD *)Object + 69);
  *((_DWORD *)Object + 64) = 0;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x624A7350u);
    *((_QWORD *)Object + 69) = 0LL;
  }
  v5 = *((_QWORD *)Object + 66);
  if ( v5 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v5 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 66), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 67));
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
  v6 = (char **)*((_QWORD *)Object + 3);
  if ( v6[1] != Object + 24 )
    goto LABEL_40;
  v7 = (PVOID *)*((_QWORD *)Object + 4);
  if ( *v7 != Object + 24 )
    goto LABEL_40;
  *v7 = v6;
  v6[1] = (char *)v7;
  PspUnlockJobListExclusive(CurrentThread);
  v8 = (void *)*((_QWORD *)Object + 150);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x624A7350u);
    v19 = (void *)*((_QWORD *)Object + 151);
    *((_QWORD *)Object + 150) = 0LL;
    PsReturnSharedPoolQuota(v19);
  }
  if ( *((_QWORD *)Object + 152) )
    IoFreeMiniCompletionPacket();
  if ( (*((_DWORD *)Object + 384) & 0x800) != 0 )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)Object + 137);
  PspGetJobLockHierarchyForDeletion(Object, v25);
  PspLockJobsAndProcessExclusive(v25, 0LL, CurrentThread, 0LL);
  v9 = Object + 1256;
  v10 = (char *)*((_QWORD *)Object + 157);
  if ( v10 != Object + 1256 )
  {
    if ( *((char **)v10 + 1) == v9 )
    {
      v16 = (char **)*((_QWORD *)Object + 158);
      if ( *v16 == v9 )
      {
        *v16 = v10;
        *((_QWORD *)v10 + 1) = v16;
        *((_QWORD *)Object + 158) = Object + 1256;
        *(_QWORD *)v9 = v9;
        ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)Object + 161), 0x73507350u);
        *((_QWORD *)Object + 161) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_40:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v25, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(Object + 56));
  if ( *((_QWORD *)Object + 165) )
  {
    v17 = (void *)*((_QWORD *)Object + 166);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *((_QWORD *)Object + 166) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 384) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = *((_DWORD *)Object + 363);
  if ( v12 )
  {
    v13 = ExMapHandleToPointer(PspUniqueJobIdTable, v12);
    ExDestroyHandle(PspUniqueJobIdTable, *((unsigned int *)Object + 363), v13);
  }
  result = KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v15 = (void *)*((_QWORD *)Object + 222);
  if ( v15 )
    return ObfDereferenceObjectWithTag(v15, 0x624A7350u);
  return result;
}
