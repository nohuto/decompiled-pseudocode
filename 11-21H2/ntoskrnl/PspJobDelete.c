/*
 * XREFs of PspJobDelete @ 0x140207100
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x1406789B0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspJobIoRateControlDisable @ 0x140678A28 (PspJobIoRateControlDisable.c)
 *     PspJobDeleteStorageArrays @ 0x140678A8C (PspJobDeleteStorageArrays.c)
 *     PspRemoveCpuRateControl @ 0x140678AEC (PspRemoveCpuRateControl.c)
 *     PspLockRootJobExclusive @ 0x140678FCC (PspLockRootJobExclusive.c)
 *     PspUnlockJobListExclusive @ 0x140681AD4 (PspUnlockJobListExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140682038 (PspUnlockJobsAndProcessExclusive.c)
 *     PspLockJobsAndProcessExclusive @ 0x1406820CC (PspLockJobsAndProcessExclusive.c)
 *     PspLockJobConditionally @ 0x14068565C (PspLockJobConditionally.c)
 *     PspRemoveIoAttribution @ 0x1406D4CBC (PspRemoveIoAttribution.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FFED4 (PspLockJobExclusive.c)
 *     PsReturnSharedPoolQuota @ 0x140724DC8 (PsReturnSharedPoolQuota.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 *     PspEmptyPropertySet @ 0x1407A08FC (PspEmptyPropertySet.c)
 *     ExMapHandleToPointer @ 0x1407A1AC0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1407A2B78 (ExDestroyHandle.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     PspDeleteSilo @ 0x1407F8C6C (PspDeleteSilo.c)
 *     PspNetRateControlDispatch @ 0x1409B03B4 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1409B062C (PspRemoveRateControl.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG_PTR __fastcall PspJobDelete(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  LONG_PTR result; // rax
  void *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-29h] BYREF
  __int128 v20; // [rsp+40h] [rbp-21h] BYREF
  __int64 v21; // [rsp+50h] [rbp-11h]
  _OWORD v22[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp+17h]
  _OWORD v24[2]; // [rsp+80h] [rbp+1Fh] BYREF
  int v25; // [rsp+A0h] [rbp+3Fh]

  v23 = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  v25 = 0;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v24, 0, sizeof(v24));
  v19 = 0LL;
  PspEmptyPropertySet(a1 + 1472);
  PspJobDeleteStorageArrays(a1);
  if ( *(_QWORD *)(a1 + 1200) || *(_QWORD *)(a1 + 1504) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v19);
    PspLockJobConditionally(a1, &v19);
    if ( *(_QWORD *)(a1 + 1200) )
      PspRemoveCpuRateControl(a1);
    v15 = *(_QWORD *)(a1 + 1504);
    if ( v15 )
    {
      memset((char *)v22 + 8, 0, 24);
      v23 = 4LL;
      *(_QWORD *)&v22[0] = *(_QWORD *)(v15 + 56);
      PspNetRateControlDispatch(v22);
      PspRemoveRateControl(a1);
    }
    if ( a1 != v19 )
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    PspUnlockJob(v19, CurrentThread);
  }
  PspJobIoRateControlDisable(a1);
  if ( *(_QWORD *)(a1 + 1544) )
  {
    PspLockRootJobExclusive(a1, CurrentThread, &v19);
    PspLockJobConditionally(a1, &v19);
    if ( *(_QWORD *)(a1 + 1544) )
      PspRemoveIoAttribution((PVOID)a1);
    if ( a1 != v19 )
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    PspUnlockJob(v19, CurrentThread);
  }
  LODWORD(v19) = *(_DWORD *)(a1 + 576);
  if ( (unsigned int)v19 <= 0xFFFFFFFD )
  {
    *(_QWORD *)&v20 = a1;
    DWORD2(v20) = 2;
    v21 = 0LL;
    PspLockJobExclusive(a1, CurrentThread);
    PsInvokeWin32Callout(6LL, &v20, 1LL, &v19);
    PspUnlockJob(a1, CurrentThread);
  }
  v3 = *(void **)(a1 + 552);
  *(_DWORD *)(a1 + 256) = 0;
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x624A7350u);
    *(_QWORD *)(a1 + 552) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 528);
  if ( v4 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v4 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 528), 0x614A7350u);
    PsReturnSharedPoolQuota(*(PVOID *)(a1 + 536));
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v5 + 8) != a1 + 24 )
    goto LABEL_44;
  v6 = *(_QWORD **)(a1 + 32);
  if ( *v6 != a1 + 24 )
    goto LABEL_44;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  PspUnlockJobListExclusive(CurrentThread);
  v7 = *(void **)(a1 + 1176);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x624A7350u);
    v18 = *(void **)(a1 + 1184);
    *(_QWORD *)(a1 + 1176) = 0LL;
    PsReturnSharedPoolQuota(v18);
  }
  if ( *(_QWORD *)(a1 + 1192) )
    IoFreeMiniCompletionPacket();
  if ( (*(_DWORD *)(a1 + 1512) & 0x800) != 0 )
    ZwDeleteWnfStateName(a1 + 1072);
  PspGetJobLockHierarchyForDeletion(a1, v24);
  PspLockJobsAndProcessExclusive(v24, 0LL, CurrentThread, 0LL);
  v8 = (_QWORD *)(a1 + 1232);
  v9 = *(_QWORD *)(a1 + 1232);
  if ( v9 != a1 + 1232 )
  {
    if ( *(_QWORD **)(v9 + 8) == v8 )
    {
      v16 = *(_QWORD **)(a1 + 1240);
      if ( (_QWORD *)*v16 == v8 )
      {
        *v16 = v9;
        *(_QWORD *)(v9 + 8) = v16;
        *(_QWORD *)(a1 + 1240) = a1 + 1232;
        *v8 = v8;
        ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(a1 + 1264), 0x73507350u);
        *(_QWORD *)(a1 + 1264) = 0LL;
        goto LABEL_19;
      }
    }
LABEL_44:
    __fastfail(3u);
  }
LABEL_19:
  PspUnlockJobsAndProcessExclusive(v24, 0LL, CurrentThread);
  ExDeleteResourceLite((PERESOURCE)(a1 + 56));
  if ( *(_QWORD *)(a1 + 1296) )
  {
    v17 = *(void **)(a1 + 1304);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *(_QWORD *)(a1 + 1304) = 0LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 1512) & 0x40000000) != 0 )
    PspDeleteSilo(a1);
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = *(_DWORD *)(a1 + 1428);
  if ( v11 )
  {
    v12 = ExMapHandleToPointer(PspUniqueJobIdTable, v11);
    ExDestroyHandle(PspUniqueJobIdTable, *(unsigned int *)(a1 + 1428), v12);
  }
  result = KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  v14 = *(void **)(a1 + 1752);
  if ( v14 )
    return ObfDereferenceObjectWithTag(v14, 0x624A7350u);
  return result;
}
