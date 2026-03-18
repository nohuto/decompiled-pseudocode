/*
 * XREFs of PspUserThreadStartup @ 0x140702420
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1407028B8 (PspWriteTebIdealProcessor.c)
 *     MmGetSessionLocaleId @ 0x140702ABC (MmGetSessionLocaleId.c)
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x140702CA4 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     PfProcessCreateNotification @ 0x1407DCC40 (PfProcessCreateNotification.c)
 *     DbgkCreateMinimalThread @ 0x14092A888 (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rcx
  __int64 v2; // r8
  _KPROCESS *Process; // r14
  int SessionLocaleId; // eax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v7; // rdi
  ULONG LowPart; // ebx
  int v9; // r8d
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v13; // zf
  unsigned int v14; // eax
  __int64 v15; // r8
  _QWORD v16[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v17[112]; // [rsp+50h] [rbp-98h] BYREF

  v16[0] = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v16[2] = CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v2) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v2);
  }
  Process = CurrentThread->ApcState.Process;
  v16[1] = Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId(v1, CurrentThread->Teb, v2);
    *(_DWORD *)(v5 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x8000000000000LL) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x13u) )
    {
      PfProcessCreateNotification(Process, Process[1].Affinity.StaticBitmap[17]);
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v16);
    v7 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v9 = ExGenRandom(1);
    v10 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      LODWORD(v16[0]) ^ HIDWORD(v16[0]) ^ LowPart ^ v10 ^ v9 ^ v7->MmPageFaultCount ^ v7->InterruptCount ^ v7->InterruptTime,
      0);
  }
  if ( (Process->SecureState.SecureHandle & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    memset(v17, 0, 0x68uLL);
    v14 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v17);
    LOBYTE(v15) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v14, v15);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = HIDWORD(Process[2].Header.WaitListHead.Flink);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
