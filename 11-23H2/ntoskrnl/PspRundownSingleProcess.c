/*
 * XREFs of PspRundownSingleProcess @ 0x14068AD74
 * Callers:
 *     PspTerminateProcess @ 0x1406839D4 (PspTerminateProcess.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     NtCreateUserProcess @ 0x1406B8310 (NtCreateUserProcess.c)
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085CA00 (PspCreateProcess.c)
 *     PsTerminateMinimalProcess @ 0x1409B3A50 (PsTerminateMinimalProcess.c)
 *     PspProcessRundownWorker @ 0x1409B3E70 (PspProcessRundownWorker.c)
 *     PspProcessRundownWorkerSingle @ 0x1409B3F20 (PspProcessRundownWorkerSingle.c)
 * Callees:
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     RtlInterlockedSetClearBits @ 0x14020CA40 (RtlInterlockedSetClearBits.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeRundownSecureProcess @ 0x14056FC5C (KeRundownSecureProcess.c)
 *     ObKillProcess @ 0x14068B254 (ObKillProcess.c)
 *     PspSendProcessNotificationToJobChain @ 0x14069F410 (PspSendProcessNotificationToJobChain.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x14069F4D4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     MmCleanProcessAddressSpace @ 0x14071FC58 (MmCleanProcessAddressSpace.c)
 *     ExSweepHandleTable @ 0x14073FE50 (ExSweepHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     PspClearProcessThreadCidRefs @ 0x14076E4C8 (PspClearProcessThreadCidRefs.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DED20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

bool __fastcall PspRundownSingleProcess(__int64 BugCheckParameter1, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // r11
  volatile signed __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  $115DCDF994C6370D29323EAB0E0C9502 v24; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(&v24, 0, sizeof(v24));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_2;
  --CurrentThread->KernelApcDisable;
  v21 = (volatile signed __int64 *)(BugCheckParameter1 + 1080);
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  if ( !*(_DWORD *)(BugCheckParameter1 + 1520) )
  {
    _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
    v2 = (_InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v21);
  KeAbPostRelease((ULONG_PTR)v21);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v2 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    ExRundownCompleted((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
    if ( *(_QWORD *)(BugCheckParameter1 + 1296) && (*(_DWORD *)(BugCheckParameter1 + 1120) & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)(BugCheckParameter1 + 1120), 8, 32);
      PspSendProcessNotificationToJobChain(BugCheckParameter1, v20, *(_QWORD *)(BugCheckParameter1 + 1088));
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 992) )
      KeRundownSecureProcess(BugCheckParameter1);
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1124), 0x12u) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v24);
      if ( *(_QWORD *)(BugCheckParameter1 + 1392) )
        ObKillProcess(BugCheckParameter1);
      MmCleanProcessAddressSpace(BugCheckParameter1);
      KiUnstackDetachProcess(&v24);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 2248) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2264, 0LL);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(BugCheckParameter1 + 2248) + 8LL), 0);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2248), 0);
      *(_QWORD *)(BugCheckParameter1 + 2248) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 2264));
      KeAbPostRelease(BugCheckParameter1 + 2264);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v5 = *(_QWORD **)(BugCheckParameter1 + 2840);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)*v5;
        if ( *v5 )
          break;
        v7 = v5 + 1;
        v6 = (_QWORD *)v5[1];
        if ( v6 )
        {
LABEL_13:
          v5 = v6;
          *v7 = 0LL;
        }
        else
        {
          v8 = v5[2];
          SC_ENV::Free(v5);
          v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 )
            goto LABEL_17;
          v5 = (_QWORD *)v9;
        }
      }
      v7 = v5;
      goto LABEL_13;
    }
LABEL_17:
    *(_QWORD *)(BugCheckParameter1 + 2840) = 0LL;
    v10 = *(_QWORD **)(BugCheckParameter1 + 2856);
    if ( !v10 )
    {
LABEL_24:
      *(_QWORD *)(BugCheckParameter1 + 2856) = 0LL;
      v15 = *(void **)(BugCheckParameter1 + 1048);
      if ( v15 )
      {
        ExFreePoolWithTag(v15, 0);
        *(_QWORD *)(BugCheckParameter1 + 1048) = 0LL;
      }
      if ( *(_QWORD *)(BugCheckParameter1 + 2888) )
      {
        ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 2888), 0);
        *(_QWORD *)(BugCheckParameter1 + 2888) = 0LL;
      }
      v16 = *(void **)(BugCheckParameter1 + 1304);
      if ( v16 )
      {
        *(_QWORD *)(BugCheckParameter1 + 1304) = 0LL;
        ObfDereferenceObject(v16);
      }
      v17 = *(void **)(BugCheckParameter1 + 1440);
      if ( v17 )
      {
        ObfDereferenceObjectWithTag(v17, 0x72437350u);
        *(_QWORD *)(BugCheckParameter1 + 1440) = 0LL;
      }
      if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 1124), 0x12u) )
        KeSetProcess(BugCheckParameter1);
      if ( *(_QWORD *)(BugCheckParameter1 + 1296) )
      {
        PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
        PspNotifyEmptyJobsInJobChain(BugCheckParameter1);
      }
      v18 = *(_QWORD *)(BugCheckParameter1 + 1088);
      if ( v18 )
        PspClearProcessThreadCidRefs(CurrentThread, v18, BugCheckParameter1);
      return v2;
    }
    while ( 1 )
    {
      v11 = (_QWORD *)*v10;
      if ( *v10 )
        break;
      v12 = v10 + 1;
      v11 = (_QWORD *)v10[1];
      if ( v11 )
      {
LABEL_20:
        v10 = v11;
        *v12 = 0LL;
      }
      else
      {
        v13 = v10[2];
        SC_ENV::Free(v10);
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 )
          goto LABEL_24;
        v10 = (_QWORD *)v14;
      }
    }
    v12 = v10;
    goto LABEL_20;
  }
  v22 = ObReferenceProcessHandleTable(BugCheckParameter1);
  if ( v22 )
  {
    LOBYTE(v23) = 1;
    ExSweepHandleTable(BugCheckParameter1, v22, v23);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  }
  return v2;
}
