/*
 * XREFs of NtSaveKeyEx @ 0x140A0EC80
 * Callers:
 *     NtSaveKey @ 0x140A0EC60 (NtSaveKey.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FB70 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     CmCheckNoTxContext @ 0x140691C88 (CmCheckNoTxContext.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140947050 (IoConvertFileHandleToKernelHandle.c)
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF63D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  int v3; // r15d
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  PVOID v12; // rcx
  int v13; // r8d
  int v14; // r9d
  NTSTATUS v15; // eax
  HANDLE v16; // rdi
  struct _KTHREAD *v17; // rax
  PVOID v18; // rdi
  HANDLE v19; // r15
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // r8d
  unsigned int v25; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v30; // [rsp+60h] [rbp-59h] BYREF
  __int128 v31; // [rsp+70h] [rbp-49h] BYREF
  __int128 v32; // [rsp+80h] [rbp-39h]
  __int128 v33; // [rsp+90h] [rbp-29h]
  _OWORD v34[3]; // [rsp+A0h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v29[1] = v29;
  v3 = (int)KeyHandle;
  v29[0] = v29;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  CmpInitializeThreadInfo((__int64)&v30);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v8, v9) )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 < 0 )
    {
LABEL_31:
      CmpReleaseShutdownRundown(v12, v11);
      goto LABEL_32;
    }
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v10 = -1073741727;
      goto LABEL_31;
    }
    if ( ((Format - 1) & 0xFFFFFFFC) != 0 || Format == 3 )
    {
      v10 = -1073741811;
      goto LABEL_31;
    }
    if ( PreviousMode == 1 )
    {
      v15 = IoConvertFileHandleToKernelHandle(FileHandle, 1, 2, 0, &Handle);
      v16 = Handle;
      v10 = v15;
      if ( v15 < 0 )
      {
LABEL_27:
        if ( v16 && v16 != FileHandle )
          ZwClose(v16);
        goto LABEL_31;
      }
    }
    else
    {
      v16 = FileHandle;
      Handle = FileHandle;
    }
    LOBYTE(v14) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(v3, 0, v13, v14, (__int64)&Object, 0LL);
    if ( v10 >= 0 )
    {
      v17 = KeGetCurrentThread();
      v18 = Object;
      v19 = Handle;
      --v17->KernelApcDisable;
      if ( !CmpCallBackCount
        || CmpIsRegistryLockAcquired()
        || (*(_QWORD *)&v31 = v18,
            *((_QWORD *)&v31 + 1) = v19,
            LODWORD(v32) = Format,
            v20 = CmpCallCallBacksEx(0x2Bu, &v31, 0LL, 1, 0x2Cu, 0LL, (__int64)v29),
            v10 = v20,
            v20 >= 0) )
      {
        CmpAttachToRegistryProcess(v34);
        if ( Format == 4 )
        {
          LOBYTE(v21) = PreviousMode;
          v23 = CmDumpKeyToFile((__int64)v18, v21, v19, v22);
        }
        else
        {
          v24 = 5;
          if ( Format != 2 )
            v24 = 3;
          v23 = CmSaveKey((__int64)v18, (__int64)v19, v24, PreviousMode);
        }
        v25 = v23;
        CmpDetachFromRegistryProcess(v34);
        v10 = CmPostCallbackNotificationEx(44, (__int64)v18, v25, (__int64)&v31, 0LL, v29);
      }
      else if ( v20 == -1073740541 )
      {
        v10 = 0;
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v16 = Handle;
    }
    v12 = Object;
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_27;
  }
  v10 = -1073741431;
LABEL_32:
  CmCleanupThreadInfo((__int64 *)&v30);
  return v10;
}
