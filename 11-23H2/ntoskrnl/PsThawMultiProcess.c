/*
 * XREFs of PsThawMultiProcess @ 0x1402044E4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     DbgkpResumeProcess @ 0x1409395A8 (DbgkpResumeProcess.c)
 *     DbgkpSendApiMessage @ 0x14093A250 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14093A348 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14093A47C (DbgkpSendErrorMessage.c)
 *     NtChangeProcessState @ 0x1409AFEC0 (NtChangeProcessState.c)
 *     PspDeleteProcessStateChange @ 0x1409B12C0 (PspDeleteProcessStateChange.c)
 * Callees:
 *     KeThawMultiProcess @ 0x140204688 (KeThawMultiProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1407518DC (PsSetProcessTelemetryAppState.c)
 *     PsWow64GetProcessNtdllType @ 0x1407A1930 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x14084D438 (PspWow64GetSharedInformation.c)
 *     VslUpdateFreezeTimeBias @ 0x1409436CC (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E54BC (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E8F34 (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawMultiProcess(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char v4; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned int ProcessNtdllType; // eax
  __int64 SharedInformation; // rax
  __int64 result; // rax
  int v12; // ebx
  int SessionId; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( (_BYTE)a2 )
  {
    if ( *(_QWORD *)(a1 + 1288) && (*(_DWORD *)(a1 + 1124) & 8) == 0 )
    {
      SessionId = MmGetSessionIdEx(a1);
      PsInvokeWin32Callout(23LL, a1, 1LL, &SessionId, CurrentThread);
    }
    v7 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( *(_QWORD *)(a1 + 2224) )
    {
      LOBYTE(v8) = 1;
      v7 = KiQueryUnbiasedInterruptTime(v8) - *(_QWORD *)(a1 + 2224);
      *(_QWORD *)(a1 + 2224) = 0LL;
      *(_QWORD *)(a1 + 2320) += v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread(CurrentThread);
    if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(a1, v7);
    }
    else
    {
      *(_QWORD *)qword_140D1F380 += v7;
      ProcessNtdllType = PsWow64GetProcessNtdllType(a1);
      if ( ProcessNtdllType )
      {
        SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
        **(_QWORD **)(SharedInformation + 64) += v7;
      }
    }
  }
  LOBYTE(a2) = v4;
  result = KeThawMultiProcess(a1, a2, a3);
  v12 = result;
  if ( (_DWORD)result == a3 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 3LL);
  if ( v4 )
  {
    PsSetProcessTelemetryAppState(a1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v12 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}
