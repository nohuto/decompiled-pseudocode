/*
 * XREFs of KeAttachProcess @ 0x140364370
 * Callers:
 *     KiExecuteDpcDelegate @ 0x140391510 (KiExecuteDpcDelegate.c)
 *     KiCompleteKernelInit @ 0x140A8CAE0 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 * Callees:
 *     KiAttachProcess @ 0x14022DAB0 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KPROCESS *v3; // r8
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    if ( CurrentThread->ApcStateIndex
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
      || (*(_DWORD *)&Process->0 & 0x800) != 0 )
    {
      KeBugCheckEx(
        5u,
        (ULONG_PTR)Process,
        (ULONG_PTR)v3,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v6) = 4;
      if ( CurrentIrql != 2 )
        v6 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v6;
    }
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( CurrentThread->ThreadLock );
    }
    KiAttachProcess((__int64)CurrentThread, (__int64)Process, CurrentIrql, 0, (__int64)&CurrentThread->600);
  }
}
