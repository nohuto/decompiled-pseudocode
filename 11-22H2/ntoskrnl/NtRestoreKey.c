/*
 * XREFs of NtRestoreKey @ 0x140A0E8C0
 * Callers:
 *     <none>
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
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AF6380 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AF63D0 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140AF6470 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  int v3; // r15d
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  PVOID v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  NTSTATUS v16; // eax
  HANDLE v17; // rdi
  int v18; // eax
  struct _KTHREAD *v19; // rax
  _QWORD *v20; // rdi
  HANDLE v21; // r15
  int v22; // eax
  HANDLE Handle; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v27; // [rsp+60h] [rbp-59h] BYREF
  __int128 v28; // [rsp+70h] [rbp-49h] BYREF
  __int128 v29; // [rsp+80h] [rbp-39h]
  __int128 v30; // [rsp+90h] [rbp-29h]
  _OWORD v31[3]; // [rsp+A0h] [rbp-19h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v26[1] = v26;
  v3 = (int)KeyHandle;
  v26[0] = v26;
  v27 = 0LL;
  v6 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(v31, 0, sizeof(v31));
  CmpInitializeThreadInfo((__int64)&v27);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v9, v10) )
  {
    v11 = CmCheckNoTxContext();
    if ( v11 < 0 )
    {
LABEL_27:
      CmpReleaseShutdownRundown(v13, v12);
      goto LABEL_28;
    }
    if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v11 = -1073741727;
      goto LABEL_27;
    }
    if ( PreviousMode == 1 )
    {
      v16 = IoConvertFileHandleToKernelHandle(FileHandle, 1, 1, 0, &Handle);
      v17 = Handle;
      v11 = v16;
      if ( v16 < 0 )
      {
LABEL_24:
        if ( v17 && v17 != FileHandle )
          ZwClose(v17);
        goto LABEL_27;
      }
    }
    else
    {
      v17 = FileHandle;
      Handle = FileHandle;
    }
    LOBYTE(v15) = PreviousMode;
    v18 = CmObReferenceObjectByHandle(v3, 0, v14, v15, (__int64)&Object, 0LL);
    v12 = Object;
    v11 = v18;
    if ( v18 < 0 )
    {
LABEL_22:
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_24;
    }
    v13 = *(unsigned int *)(*((_QWORD *)Object + 1) + 8LL);
    if ( (v13 & 0x80u) != 0LL )
    {
      v11 = -1073741790;
      goto LABEL_22;
    }
    v19 = KeGetCurrentThread();
    v20 = Object;
    v21 = Handle;
    --v19->KernelApcDisable;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v28 = v20;
      *((_QWORD *)&v28 + 1) = v21;
      LODWORD(v29) = Flags;
      v22 = CmpCallCallBacksEx(0x29u, &v28, 0LL, 1, 0x2Au, 0LL, (__int64)v26);
      v11 = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          v11 = 0;
LABEL_21:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v12 = Object;
        v17 = Handle;
        goto LABEL_22;
      }
      v6 = 1;
    }
    CmpAttachToRegistryProcess(v31);
    v11 = CmRestoreKey(v20, (ULONG_PTR)v21, Flags);
    CmpDetachFromRegistryProcess(v31);
    if ( v6 )
      v11 = CmPostCallbackNotificationEx(42, (__int64)v20, v11, (__int64)&v28, 0LL, v26);
    goto LABEL_21;
  }
  v11 = -1073741431;
LABEL_28:
  CmCleanupThreadInfo((__int64 *)&v27);
  return v11;
}
