/*
 * XREFs of PspInsertProcess @ 0x1406B9FD4
 * Callers:
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x1402269F4 (PspUnlockProcessListExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PspInheritSyscallProvider @ 0x1406B9F80 (PspInheritSyscallProvider.c)
 *     ObCheckRefTraceProcess @ 0x1406BA298 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2E0 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB280 (SeAuditingWithTokenForSubcategory.c)
 *     SeCreateAccessStateEx @ 0x1406C2ED0 (SeCreateAccessStateEx.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E628C (PspImplicitAssignProcessToJob.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     PspValidateJobAffinityState @ 0x140884B68 (PspValidateJobAffinityState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        int a3,
        int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r15
  PVOID v11; // r14
  _KPROCESS *Process; // r13
  int inserted; // esi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  int v16; // r14d
  int v17; // edx
  struct _ACCESS_STATE *v18; // rbp
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  PVOID v22; // [rsp+88h] [rbp+10h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 174) + 40LL) = *((_DWORD *)Object + 272);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( !a2
    || (!*(_QWORD *)(a2 + 1296) || (inserted = PspImplicitAssignProcessToJob(*(PVOID *)(a2 + 1296)), inserted >= 0))
    && (inserted = PspInheritSyscallProvider((__int64)Object, a2), inserted >= 0) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v14 = (_QWORD *)qword_140C38268;
    v15 = Object + 1096;
    if ( *(__int64 **)qword_140C38268 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 138) = qword_140C38268;
    *v15 = &PsActiveProcessHead;
    *v14 = v15;
    qword_140C38268 = (__int64)(Object + 1096);
    *((_QWORD *)Object + 287) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
    }
    else if ( !Handle
           || (v22 = 0LL,
               v21 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v22,
                       0LL),
               v11 = v22,
               inserted = v21,
               v21 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v11 )
        ObfDereferenceObject(v11);
      if ( inserted >= 0 )
      {
        v16 = 0;
        if ( !a2 || (v17 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v17 = (int)Object;
            v16 = 1;
          }
          else
          {
            v17 = (int)Process;
          }
        }
        v18 = AccessState;
        inserted = SeCreateAccessStateEx(
                     0,
                     v17,
                     (_DWORD)AccessState,
                     (int)AccessState + 160,
                     v23,
                     (__int64)PsProcessType + 76);
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx(Object, v18, v16, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v19 = *((_QWORD *)Object + 162);
            if ( !v19 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 281, 0x4000000u);
LABEL_20:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)Object + 135);
                KeAbPostRelease((ULONG_PTR)(Object + 1080));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
              }
              return 0LL;
            }
            inserted = PspValidateJobAffinityState(v19, Object);
            if ( inserted >= 0 )
              goto LABEL_20;
          }
          SepDeleteAccessState((__int64)v18);
          SeReleaseSubjectContext(&v18->SubjectSecurityContext);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 135);
    KeAbPostRelease((ULONG_PTR)(Object + 1080));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}
