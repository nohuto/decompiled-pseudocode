/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1402B91C0
 * Callers:
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtSetIoCompletion @ 0x14073E430 (NtSetIoCompletion.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     IoSetIoCompletion @ 0x1407E9F70 (IoSetIoCompletion.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402B8750 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14031AAB8 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056EE70 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FCD9C (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14073E4D8 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 MiniCompletionPacket; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r13
  unsigned int v16; // esi
  _DWORD *SchedulerAssist; // r8
  __int64 v19; // r9
  int v20; // edx
  __int64 *v21; // rcx
  unsigned __int8 IsThreadRunning; // al

  MiniCompletionPacket = a7;
  v11 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    v12 = (_QWORD *)(v11 + 8);
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v19) = 4;
      else
        v19 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v19;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v11);
    v16 = 0;
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v11, MiniCompletionPacket) )
    {
      v20 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v20 + 1;
      v21 = *(__int64 **)(v11 + 32);
      if ( *v21 != v11 + 24 )
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v11 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v21;
      *v21 = MiniCompletionPacket;
      *(_QWORD *)(v11 + 32) = MiniCompletionPacket;
      if ( !v20 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v11);
    }
    else
    {
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0, (_PROCESSOR_NUMBER)1, 0, CurrentIrql);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v16;
}
