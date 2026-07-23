/*
 * XREFs of NtSaveMergedKeys @ 0x140A0F110
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     CmCheckNoTxContext @ 0x140691C88 (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1409471A0 (IoConvertFileHandleToKernelHandle.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF53D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  int v3; // r14d
  HANDLE v4; // rdi
  int v6; // r15d
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE PreviousMode; // di
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  struct _KTHREAD *CurrentThread; // rax
  PVOID v19; // r14
  PVOID v20; // r15
  __int64 v21; // r12
  int v22; // eax
  HANDLE v24; // [rsp+40h] [rbp-89h] BYREF
  PVOID Object; // [rsp+48h] [rbp-81h] BYREF
  PVOID v26; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v28; // [rsp+68h] [rbp-61h] BYREF
  __int128 v29; // [rsp+78h] [rbp-51h] BYREF
  __int128 v30; // [rsp+88h] [rbp-41h]
  __int128 v31; // [rsp+98h] [rbp-31h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  _OWORD v33[3]; // [rsp+B0h] [rbp-19h] BYREF

  v26 = 0LL;
  Object = 0LL;
  v3 = (int)HighPrecedenceKeyHandle;
  v4 = 0LL;
  v32 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v6 = (int)LowPrecedenceKeyHandle;
  memset(v33, 0, sizeof(v33));
  v7 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  CmpInitializeThreadInfo((__int64)&v28);
  v27[0] = v27;
  v27[1] = v27;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v27, v8, v9) )
  {
    v10 = -1073741431;
    goto LABEL_29;
  }
  v10 = CmCheckNoTxContext();
  if ( v10 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v10 = -1073741727;
LABEL_21:
      v4 = v24;
      goto LABEL_22;
    }
    LOBYTE(v15) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(v3, 0, v14, v15, (__int64)&v26, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    LOBYTE(v17) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(v6, 0, v16, v17, (__int64)&Object, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    if ( PreviousMode == 1 )
    {
      v10 = IoConvertFileHandleToKernelHandle(FileHandle, 1, 2, 0, &v24);
      if ( v10 < 0 )
        goto LABEL_21;
    }
    else
    {
      v24 = FileHandle;
    }
    CurrentThread = KeGetCurrentThread();
    v19 = v26;
    v20 = Object;
    v21 = (__int64)v24;
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v30 = v19;
      *((_QWORD *)&v30 + 1) = v20;
      *((_QWORD *)&v29 + 1) = v21;
      v22 = CmpCallCallBacksEx(0x31u, &v29, 0LL, 1, 0x32u, 0LL, (__int64)v27);
      v10 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v10 = 0;
LABEL_20:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_21;
      }
      v7 = 1;
    }
    CmpAttachToRegistryProcess(v33);
    v10 = CmSaveMergedKeys((__int64)v19, (__int64)v20, v21);
    CmpDetachFromRegistryProcess(v33);
    if ( v7 )
      v10 = CmPostCallbackNotificationEx(50, 0LL, v10, (__int64)&v29, 0LL, v27);
    goto LABEL_20;
  }
LABEL_22:
  CmpReleaseShutdownRundown(v12, v11);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v26 )
    ObfDereferenceObject(v26);
  if ( v4 && v4 != FileHandle )
    ZwClose(v4);
LABEL_29:
  CmCleanupThreadInfo((__int64 *)&v28);
  return v10;
}
