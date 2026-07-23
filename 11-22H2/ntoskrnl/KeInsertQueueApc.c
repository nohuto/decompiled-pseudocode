/*
 * XREFs of KeInsertQueueApc @ 0x1402CC640
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C2B0 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     ExpTimerDpcRoutine @ 0x140369870 (ExpTimerDpcRoutine.c)
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 *     IoRaiseHardError @ 0x140556B20 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140556E00 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140601B3C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406034F0 (EtwpCovSampCaptureQueueApc.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14063B498 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14065C8C4 (MiStoreModifiedWriteDereference.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073FC68 (PspRecheckThreadOptionalXStateFeatures.c)
 *     CmpPostNotify @ 0x140766D70 (CmpPostNotify.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     NtQueueApcThreadEx2 @ 0x140779F90 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1407C2078 (IopCancelIrpsInThreadList.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093AF24 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140975490 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE9B8 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140258400 (EtwpLevelKeywordEnabled.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KiInsertQueueApc @ 0x14030A03C (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14030B1D8 (KiSignalThreadForApc.c)
 *     EtwTiLogInsertQueueUserApc @ 0x1403637A4 (EtwTiLogInsertQueueUserApc.c)
 */

__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, _DWORD *SchedulerAssist, unsigned int a4)
{
  _DWORD *v5; // r12
  __int64 v8; // rax
  bool v9; // r10
  char v10; // cl
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  bool v13; // al
  char v14; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v17; // bl
  __int64 v19; // r9
  int v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  char v23; // [rsp+90h] [rbp+8h]

  v5 = SchedulerAssist;
  v9 = 0;
  if ( EtwThreatIntProvRegHandle )
  {
    if ( (v8 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v8 + 96))
      && (*(_DWORD *)(v8 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v8 + 120) & 0x3000LL) == *(_QWORD *)(v8 + 120)
      || *(_BYTE *)(EtwThreatIntProvRegHandle + 101)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(EtwThreatIntProvRegHandle + 40) + 96LL, 0, 12288LL) )
    {
      v9 = 1;
    }
  }
  v10 = *(_BYTE *)(a1 + 81);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 48);
  v23 = v10 != 0;
  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) != KeSpecialUserApcKernelRoutine || v10 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    LOBYTE(SchedulerAssist) = 0;
    CurrentThread = KeGetCurrentThread();
    if ( v10 )
    {
      v13 = CurrentThread->Process != *(_KPROCESS **)(v11 + 544);
      goto LABEL_9;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    LOBYTE(SchedulerAssist) = 1;
    CurrentThread = KeGetCurrentThread();
  }
  v13 = CurrentThread->ApcState.Process != *(_KPROCESS **)(v11 + 544);
LABEL_9:
  if ( v9 && v13 && (v10 || (_BYTE)SchedulerAssist) )
  {
    v14 = 1;
    ObfReferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  else
  {
    v14 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v19) = 4;
    else
      v19 = (-1LL << (CurrentIrql + 1)) & 4;
    CurrentThread = (struct _KTHREAD *)((unsigned int)v19 | SchedulerAssist[5]);
    SchedulerAssist[5] = (_DWORD)CurrentThread;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v17 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = v5;
    KiInsertQueueApc(a1, CurrentThread, SchedulerAssist);
    KiSignalThreadForApc(CurrentPrcb, a1, CurrentIrql);
    v17 = 1;
  }
  *(_QWORD *)(v11 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0, (_PROCESSOR_NUMBER)1, a4, CurrentIrql);
  if ( v14 )
  {
    if ( v17 )
      EtwTiLogInsertQueueUserApc((unsigned __int8)KeGetCurrentThread()->PreviousMode, v11, v22, v21, a2, (char)v5, v23);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v17;
}
