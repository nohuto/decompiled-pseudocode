/*
 * XREFs of PsLookupThreadByThreadId @ 0x1406FAF10
 * Callers:
 *     PspThreadFromTicket @ 0x1406FAB28 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadId @ 0x14073E440 (NtAlertThreadByThreadId.c)
 *     PsOpenThread @ 0x1407BB7E0 (PsOpenThread.c)
 *     PsLookupProcessThreadByCid @ 0x1407BBBB0 (PsLookupProcessThreadByCid.c)
 *     PfpServiceMainThreadBoostPrep @ 0x14097ECA8 (PfpServiceMainThreadBoostPrep.c)
 *     PopInitSystemSleeperThread @ 0x14098B7A0 (PopInitSystemSleeperThread.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     IoThreadToProcess @ 0x140289F80 (IoThreadToProcess.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140289FEC (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupThreadByThreadId(HANDLE ThreadId, PETHREAD *Thread)
{
  struct _KTHREAD *CurrentThread; // rdi
  PETHREAD *v3; // rsi
  struct _KTHREAD *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 CurrentServerSilo; // rax
  NTSTATUS v7; // esi
  bool v8; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Thread;
  LOBYTE(Thread) = 6;
  --CurrentThread->SpecialApcDisable;
  v4 = (struct _KTHREAD *)PspReferenceCidTableEntry(ThreadId, Thread);
  v5 = v4;
  if ( v4 )
  {
    if ( IoThreadToProcess(v4) == PsIdleProcess )
      goto LABEL_14;
    if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 2) == 0 )
    {
      _InterlockedOr(v10, 0);
      if ( ((__int64)v5[1].WaitBlockList & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((ULONG_PTR)&v5[1].WaitBlockList);
      if ( (*(_DWORD *)(&v5[1].SwapListEntry + 1) & 2) == 0 )
        goto LABEL_14;
    }
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( PsIsProcessInSilo(v5->Process, CurrentServerSilo) )
    {
      *v3 = v5;
      v7 = 0;
    }
    else
    {
LABEL_14:
      v7 = -1073741813;
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    v7 = -1073741813;
  }
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v7;
}
