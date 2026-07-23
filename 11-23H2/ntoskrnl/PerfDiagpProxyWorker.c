/*
 * XREFs of PerfDiagpProxyWorker @ 0x14083B990
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14083B87C (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x14083BAC0 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083BBD8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14083BCEC (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DDBB0 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  const wchar_t *v4; // rdx
  int updated; // eax
  char v6; // di
  const wchar_t *v7; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  ReturnLength = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C326E0, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_31;
  if ( dword_140C326E8 != v1 - 1 )
  {
    switch ( v1 )
    {
      case 3:
        if ( dword_140C326E8 == 1 )
          goto LABEL_11;
        break;
      case 5:
        goto LABEL_30;
      case 7:
LABEL_29:
        PerfDiagpSaveActiveDCLLogFileName();
        v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        goto LABEL_18;
    }
    if ( v1 < dword_140C326E8 )
    {
      v1 = dword_140C326E8;
      goto LABEL_11;
    }
LABEL_31:
    dword_140C326E8 = 8;
    goto LABEL_12;
  }
  if ( v1 != 1 )
  {
    v3 = (unsigned int)(v1 - 2);
    if ( v1 == 2 )
    {
      v4 = L"WaitingForLogonEnableKernelFlags";
      goto LABEL_9;
    }
    v3 = (unsigned int)(v1 - 3);
    if ( v1 == 3 )
    {
      v4 = L"EnableKernelFlags";
LABEL_9:
      updated = PerfDiagpUpdatePerfDiagLoggerEnableFlags(v3, v4);
      goto LABEL_10;
    }
    if ( v1 == 4 )
    {
LABEL_16:
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
      goto LABEL_11;
    }
    if ( v1 != 5 )
    {
      if ( v1 == 6 )
        goto LABEL_16;
      if ( v1 != 7 )
        goto LABEL_11;
      goto LABEL_29;
    }
LABEL_30:
    v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
    goto LABEL_18;
  }
  v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
LABEL_18:
  updated = PerfDiagpStartPerfDiagLogger(v7);
LABEL_10:
  if ( updated < 0 )
    goto LABEL_31;
LABEL_11:
  dword_140C326E8 = v1;
LABEL_12:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C326E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C326E0);
  KeAbPostRelease((ULONG_PTR)&qword_140C326E0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
