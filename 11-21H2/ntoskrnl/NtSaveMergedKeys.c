/*
 * XREFs of NtSaveMergedKeys @ 0x14090F9B0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x14067DE4C (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtSaveMergedKeys(__int64 a1, __int64 a2, void *a3)
{
  void *v3; // rsi
  void *v4; // r14
  void *v5; // rdi
  char v7; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  signed int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  KPROCESSOR_MODE PreviousMode; // r15
  int v15; // r9d
  int v17; // r9d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  int v20; // eax
  void *v21; // [rsp+30h] [rbp-99h] BYREF
  void *v22; // [rsp+38h] [rbp-91h] BYREF
  void *v23; // [rsp+40h] [rbp-89h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v25; // [rsp+58h] [rbp-71h]
  __int64 v26; // [rsp+60h] [rbp-69h]
  __int128 v27; // [rsp+68h] [rbp-61h] BYREF
  __int128 v28; // [rsp+78h] [rbp-51h] BYREF
  __int128 v29; // [rsp+88h] [rbp-41h]
  __int128 v30; // [rsp+98h] [rbp-31h]
  __int64 v31; // [rsp+A8h] [rbp-21h]
  _OWORD v32[3]; // [rsp+B0h] [rbp-19h] BYREF

  v25 = a1;
  v26 = a2;
  v3 = 0LL;
  v31 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v21 = 0LL;
  memset(v32, 0, sizeof(v32));
  v7 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CmpInitializeThreadInfo((__int64)&v27);
  v24[0] = v24;
  v24[1] = v24;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v24, v8, v9) )
  {
    v10 = -1073741431;
    goto LABEL_14;
  }
  v10 = CmCheckNoTxContext();
  if ( v10 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v10 = -1073741727;
LABEL_6:
      v5 = v21;
      v4 = v23;
      v3 = v22;
      goto LABEL_7;
    }
    LOBYTE(v15) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(v25, 0, v13, v15, (__int64)&v22, 0LL);
    if ( v10 < 0 )
      goto LABEL_6;
    LOBYTE(v17) = PreviousMode;
    v10 = CmObReferenceObjectByHandle(v26, 0, v13, v17, (__int64)&v23, 0LL);
    if ( v10 < 0 )
      goto LABEL_6;
    if ( PreviousMode == 1 )
    {
      v10 = IoConvertFileHandleToKernelHandle(a3, 1, 2u, 0, &v21);
      if ( v10 < 0 )
        goto LABEL_6;
    }
    else
    {
      v21 = a3;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = v22;
    v4 = v23;
    v5 = v21;
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v29 = v3;
      *((_QWORD *)&v29 + 1) = v4;
      *((_QWORD *)&v28 + 1) = v5;
      v20 = CmpCallCallBacks(0x31u, (__int64)&v28, v19, 0x32u, 0LL, (__int64)v24);
      v10 = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073740541 )
          v10 = 0;
LABEL_29:
        KeLeaveCriticalRegion();
        goto LABEL_7;
      }
      v7 = 1;
    }
    CmpAttachToRegistryProcess(v32);
    v10 = CmSaveMergedKeys((__int64)v3, (__int64)v4, (__int64)v5);
    CmpDetachFromRegistryProcess(v32);
    if ( v7 )
      v10 = CmPostCallbackNotification(0x32u, 0LL, v10, (__int64)&v28, v24);
    goto LABEL_29;
  }
LABEL_7:
  CmpReleaseShutdownRundown(v12, v11, v13);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 && v5 != a3 )
    ZwClose(v5);
LABEL_14:
  CmCleanupThreadInfo((__int64 *)&v27);
  return (unsigned int)v10;
}
