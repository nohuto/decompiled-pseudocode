/*
 * XREFs of NtDeleteKey @ 0x14070FEC0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     CmDoVirtualTest @ 0x140347BDC (CmDoVirtualTest.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737E60 (SeCaptureSubjectContext.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1407689EC (CmpTransSearchAddTransFromKeyBody.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1409CE290 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  char v2; // r13
  char v3; // r12
  char PreviousMode; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  char v12; // bl
  int v13; // eax
  int v14; // edi
  char v15; // si
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // r8d
  int v25; // r9d
  GUID *p_TransactionId; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v38; // [rsp+90h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v40[2]; // [rsp+C0h] [rbp-48h] BYREF
  GUID TransactionId; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v42[2]; // [rsp+F0h] [rbp-18h] BYREF

  v34 = 0LL;
  v38 = 0LL;
  LODWORD(v33) = 0;
  memset(v40, 0, sizeof(v40));
  v36 = 0LL;
  v35 = 0LL;
  memset(v42, 0, sizeof(v42));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v42, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v38);
  Object = 0LL;
  v2 = 0;
  v37[1] = v37;
  v3 = 0;
  v37[0] = v37;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = CmpAcquireShutdownRundown(v6, v5, v7);
  v12 = v31;
  if ( !v31 )
  {
    v14 = -1073741431;
    goto LABEL_37;
  }
  LOBYTE(v11) = PreviousMode;
  v13 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 0x10000, v10, v11, (__int64)&Object, (__int64)&v34);
  v14 = v13;
  if ( v13 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    if ( CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v33) )
    {
      LOBYTE(v25) = PreviousMode;
      v14 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 131097, v24, v25, (__int64)&Object, (__int64)&v34);
      if ( v14 < 0 )
        goto LABEL_61;
      v17 = Object;
      v14 = 0;
      if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        v15 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v17 = Object;
    }
    v14 = -1073741790;
    goto LABEL_46;
  }
  v15 = 0;
  if ( v13 < 0 )
    goto LABEL_33;
  v14 = 0;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  v3 = 1;
  v17 = Object;
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v40[0] = v17;
    v18 = CmpCallCallBacksEx(0, v40, 0LL, 1, 0xFu, (__int64)v17, (__int64)v37);
    v14 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1073740541 )
        v14 = 0;
      goto LABEL_28;
    }
    v2 = 1;
    v14 = 0;
  }
  if ( CmpTraceRoutine && v17 )
    v35 = v17[1];
  v19 = KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpKeyManipLock, 0LL, v19, (__int64)&ExpKeyManipLock);
  if ( v19 )
    *(_BYTE *)(v19 + 18) = 1;
  if ( (!ExpControlKey || *((_QWORD *)Object + 1) != *((_QWORD *)ExpControlKey + 1))
    && (!qword_140C31818 || *((_QWORD *)Object + 1) != *((_QWORD *)qword_140C31818 + 1)) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
    KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
    v17 = Object;
    v9 = *((_QWORD *)Object + 1);
    if ( (*(_DWORD *)(v9 + 8) & 0x80u) != 0 || (v20 = *(_QWORD *)(v9 + 72)) != 0 && (*(_DWORD *)(v20 + 8) & 0x80u) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_28;
    }
    if ( !v15 )
      goto LABEL_26;
    LOBYTE(v8) = PreviousMode;
    v14 = CmKeyBodyRemapToVirtual((unsigned int)&Object, v8, 0x10000, (unsigned int)&SubjectContext, (__int64)&v33);
    if ( v14 >= 0 )
    {
      v17 = Object;
      if ( !CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object + 1) + 184LL) & 0x1000000) == 0 )
      {
        v14 = -1073741790;
        goto LABEL_46;
      }
LABEL_26:
      v14 = CmDeleteKey(v17);
      if ( v14 >= 0 && (v34 & 4) != 0 )
      {
        if ( v17[7] || v17[8] )
        {
          TransactionId = 0LL;
          CmpLockRegistry(v9, v8, v21, v22);
          CmpTransSearchAddTransFromKeyBody(v17, &v36);
          TransactionId = *(GUID *)(v36 + 88);
          CmpUnlockRegistry(v28, v27, v29, v30);
          p_TransactionId = &TransactionId;
        }
        else
        {
          p_TransactionId = 0LL;
        }
        SeDeleteObjectAuditAlarmWithTransaction(v17, KeyHandle, p_TransactionId);
      }
      goto LABEL_28;
    }
LABEL_61:
    v17 = Object;
    goto LABEL_46;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpKeyManipLock);
  KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  v17 = Object;
LABEL_28:
  if ( v15 )
LABEL_46:
    SeReleaseSubjectContext(&SubjectContext);
  if ( v2 )
    v14 = CmPostCallbackNotificationEx(15, (__int64)v17, v14, (__int64)v40, 0LL, v37);
  if ( !v3 )
    goto LABEL_34;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_33:
  v17 = Object;
LABEL_34:
  if ( v17 )
    ObfDereferenceObject(v17);
  v12 = v31;
LABEL_37:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v9) = 12;
    CmpTraceRoutine(v9, v42, (unsigned int)v14, 0LL);
  }
  if ( v12 )
    CmpReleaseShutdownRundown(v9, v8);
  CmCleanupThreadInfo((__int64 *)&v38);
  return v14;
}
