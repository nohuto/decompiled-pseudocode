/*
 * XREFs of PspAssignProcessToJob @ 0x14069FFF0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14069FF70 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PspIncrementJobChainProcessCounts @ 0x14069F520 (PspIncrementJobChainProcessCounts.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14069F5E8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14069F680 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspLockJobsAndProcessExclusive @ 0x14069F70C (PspLockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14069F78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x14069F7F8 (PspGetJobLockHierarchyForAssignment.c)
 *     PspUnlockJobAssignment @ 0x14069F860 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x14069F8C8 (PspLockJobAssignment.c)
 *     PspEstablishJobHierarchy @ 0x14069F8F4 (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x1406A048C (PspValidateJobChainLimits.c)
 *     PspGetJobAssignmentDisposition @ 0x1406A05A0 (PspGetJobAssignmentDisposition.c)
 *     MmAssignProcessToJob @ 0x1406A0694 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406A0894 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspGetNextJobProcess @ 0x1406A0D90 (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x1406A3A44 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x1406A3BFC (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406A3DF8 (PspLockJobExclusive.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1406A6FC4 (PspApplyJobChainLimitsToProcess.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     PsQueryProcessAttributes @ 0x14071E014 (PsQueryProcessAttributes.c)
 *     PspIsSetJobIoAttribution @ 0x1407D87A8 (PspIsSetJobIoAttribution.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1409B23B8 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x1409B2764 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x1409B29DC (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(PVOID Object, _QWORD *a2, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  __int64 NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // edi
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  int v19; // ecx
  __int64 v20; // rdi
  PVOID v21; // rax
  unsigned int v22; // eax
  _BYTE v23[4]; // [rsp+40h] [rbp-59h] BYREF
  int v24; // [rsp+44h] [rbp-55h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-51h] BYREF
  __int64 v26; // [rsp+50h] [rbp-49h]
  struct _KTHREAD *v27; // [rsp+58h] [rbp-41h]
  __int128 v28; // [rsp+60h] [rbp-39h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h]
  __int128 v30; // [rsp+78h] [rbp-21h] BYREF
  __int64 v31; // [rsp+88h] [rbp-11h]
  _OWORD v32[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+17h]

  v23[0] = 0;
  v29 = 0LL;
  v4 = 0;
  v31 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  v5 = 0;
  NextJobProcess = (__int64)a2;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  v24 = 0;
  memset(v32, 0, sizeof(v32));
  if ( a4 == 5 )
  {
    a3 = a2[162];
    NextJobProcess = PspGetNextJobProcess(Object, CurrentThread, &v30, 0LL);
    ObfReferenceObjectWithTag((PVOID)NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(Object, CurrentThread, &v30, NextJobProcess);
    v4 = v24;
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(NextJobProcess + 1112)) )
    {
      v14 = -1073741558;
      goto LABEL_43;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment((__int64)Object, NextJobProcess, a3, a4, (__int64)v32);
  v5 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive((unsigned int *)v32, NextJobProcess, (__int64)CurrentThread, 1);
  if ( a4 != 5 )
  {
    JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, NextJobProcess, a3, &v24);
    v4 = v24;
    if ( JobAssignmentDisposition >= 0 )
    {
      if ( v24 != a4 )
      {
        v14 = -1073741267;
        goto LABEL_43;
      }
      if ( v24 == 2 )
      {
        v14 = 0;
        goto LABEL_43;
      }
      goto LABEL_10;
    }
LABEL_86:
    v14 = -1073741790;
    goto LABEL_43;
  }
  if ( !(unsigned __int8)PspIsJobMovable(Object) )
    goto LABEL_86;
  v21 = *(PVOID *)(NextJobProcess + 1296);
  v24 = 5;
  if ( v21 != Object || (*(_DWORD *)(NextJobProcess + 2172) & 0x1000) == 0 )
  {
    v4 = v24;
    v14 = -1073741790;
    goto LABEL_43;
  }
  v4 = v24;
LABEL_10:
  if ( NextJobProcess && v4 != 5 )
  {
    a3 = *(_QWORD *)(NextJobProcess + 1296);
    v4 = v24;
  }
  if ( v4 == 4
    && (*((_DWORD *)Object + 384) & 0x10) != 0
    && ((*(_DWORD *)(a3 + 1536) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
    || !PspValidateJobAssignmentSiloPolicy((__int64)Object, a3, NextJobProcess, v4)
    || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, NextJobProcess, v4)
    || v4 == 5 && (*((_DWORD *)Object + 260) & 1) != 0
    || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1086) + 1 > 0x64 )
  {
    goto LABEL_92;
  }
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
  {
    v19 = 0;
    while ( (unsigned int)(v19 - 1) <= 1
         || !_bittest((const signed __int32 *)Object + 384, 0x19u)
         || !_bittest((const signed __int32 *)(a3 + 1536), 0x19u) )
    {
      if ( ++v19 >= 3 )
        goto LABEL_19;
    }
    goto LABEL_92;
  }
LABEL_19:
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0
    && v4 != 6
    && (*(_DWORD *)(a3 + 1564) || (unsigned __int8)PspIsSetJobIoAttribution(a3))
    && (*((_DWORD *)Object + 391) || (unsigned __int8)PspIsSetJobIoAttribution((__int64)Object)) )
  {
LABEL_92:
    v14 = -1073741637;
    goto LABEL_43;
  }
  if ( v4 == 1 || v4 == 3 )
  {
    v12 = a3;
LABEL_22:
    v13 = (__int64)Object;
    goto LABEL_23;
  }
  if ( v4 == 4 )
  {
    v12 = 0LL;
    goto LABEL_22;
  }
  if ( v4 != 5 )
  {
    v13 = 0LL;
    v26 = 0LL;
    goto LABEL_25;
  }
  v13 = a3;
  v12 = 0LL;
LABEL_23:
  v26 = v12;
  if ( v13 )
  {
    v14 = PspValidateJobChainLimits(v13, v12, NextJobProcess, 0LL);
    if ( v14 < 0 )
      goto LABEL_108;
  }
LABEL_25:
  v14 = PspEstablishJobHierarchy((char *)Object, NextJobProcess, a3, v4);
  if ( v14 < 0 )
  {
LABEL_108:
    CurrentThread = v27;
    goto LABEL_43;
  }
  if ( !NextJobProcess )
  {
    v14 = 0;
    goto LABEL_108;
  }
  if ( (*((_DWORD *)Object + 384) & 0x1000) != 0 )
  {
    v20 = 0LL;
    do
    {
      if ( (*(_DWORD *)(NextJobProcess + 4LL * (int)v20 + 2472) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter(Object, 0, 0LL, 6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)(NextJobProcess + 4 * v20 + 2472), 0x1Fu);
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 < 7 );
    if ( (*(_DWORD *)(NextJobProcess + 2508) & 0x7FFFFFFF) != 0 )
      PspChargeJobWakeCounter(Object, 4, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)(NextJobProcess + 2508), 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(NextJobProcess + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(NextJobProcess + 1080));
  KeAbPostRelease(NextJobProcess + 1080);
  v4 = v24;
  v15 = v5 | 8;
  v16 = v26;
  if ( v24 == 4 )
    v16 = a3;
  PspIncrementJobChainProcessCounts(v13, v16, NextJobProcess, 0);
  PspApplyJobChainLimitsToProcess(Object, a3, NextJobProcess);
  CurrentThread = v27;
  PspUnlockJobsAndProcessExclusive((int *)v32, 0LL, (__int64)v27);
  v5 = v15 & 0xFB;
  if ( (*((_DWORD *)Object + 384) & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes(NextJobProcess, v23, 0LL);
    if ( v23[0] )
      _InterlockedOr((volatile signed __int32 *)Object + 384, 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)Object + 384, 0x1800000u);
    v4 = v24;
  }
  v14 = PspApplyWorkingSetLimitsToProcess(NextJobProcess);
  if ( v14 >= 0 )
  {
    v17 = 0LL;
    if ( v4 == 5 )
      v17 = 4LL;
    if ( (unsigned int)MmAssignProcessToJob(NextJobProcess, a3, v17) )
    {
      PspUnlockJobAssignment((__int64)CurrentThread);
      --CurrentThread->KernelApcDisable;
      v5 &= ~2u;
      PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !*((_DWORD *)Object + 136) )
        goto LABEL_41;
      v22 = *((_DWORD *)Object + 144);
      DWORD2(v28) = 1;
      *(_QWORD *)&v28 = Object;
      v29 = NextJobProcess;
      v25 = v22;
      if ( v22 > 0xFFFFFFFD
        || (PspLockJobExclusive(Object, CurrentThread),
            v14 = PsInvokeWin32Callout(6LL, &v28, 1LL, &v25),
            PspUnlockJob(Object, CurrentThread),
            v14 >= 0) )
      {
LABEL_41:
        if ( v4 == 5 )
        {
          v14 = -1073741267;
          v5 |= 0x20u;
        }
      }
    }
    else
    {
      v14 = -1073741756;
    }
  }
LABEL_43:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(NextJobProcess + 1112));
  if ( (v5 & 0x20) == 0 && v14 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, NextJobProcess, 0LL, (ULONG_PTR)Object, v14);
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive((int *)v32, NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag((PVOID)NextJobProcess, 0x624A7350u);
  return (unsigned int)v14;
}
