/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x140345800
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendPacket @ 0x1402F38C4 (KiIpiSendPacket.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x140345B70 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  volatile unsigned __int64 CycleTime; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v11; // rdi
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  volatile unsigned int NextProcessor; // edi
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // r9
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // rax
  _DWORD *v25; // r9
  int v26; // edx
  bool v27; // zf
  int v28; // [rsp+30h] [rbp-168h] BYREF
  volatile signed __int32 *v29; // [rsp+38h] [rbp-160h] BYREF
  __int64 v30; // [rsp+40h] [rbp-158h] BYREF
  _DWORD v31[68]; // [rsp+50h] [rbp-148h] BYREF

  memset(v31, 0, 0x108uLL);
  v30 = 0LL;
  v29 = 0LL;
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, Thread, CycleTimeStamp, 0LL);
    KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
    _enable();
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v4 = (-1LL << (CurrentIrql + 1)) & 4;
      v5 = (unsigned int)v4 | SchedulerAssist[5];
      SchedulerAssist[5] = v5;
    }
    v11 = KeGetCurrentPrcb();
    v28 = 0;
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v18 = v12[6];
        v12[6] = v18 + 1;
        if ( v18 == -1 )
LABEL_26:
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
    {
      v19 = v11->SchedulerAssist;
      if ( v19 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v20 = v19[6] - 1;
          v19[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      do
        KeYieldProcessorEx(&v28, v4, v5, (__int64)SchedulerAssist);
      while ( Thread->ThreadLock );
      v21 = v11->SchedulerAssist;
      if ( v21 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v22 = v21[6];
          v21[6] = v22 + 1;
          if ( v22 == -1 )
            goto LABEL_26;
        }
      }
    }
    if ( (unsigned __int8)KiAcquireThreadStateLock((__int64)Thread, (__int64)&v30, &v29, (__int64)SchedulerAssist) == 2 )
    {
      NextProcessor = Thread->NextProcessor;
      KiReleaseThreadStateLock(v13, v30, v29);
      KiReleaseThreadLockSafe((__int64)Thread);
      v31[0] = 2097153;
      memset(&v31[1], 0, 0x104uLL);
      KeAddProcessorAffinityEx((unsigned __int16 *)v31, NextProcessor);
      v15 = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
      {
        v17 = KeGetCurrentPrcb()->SchedulerAssist;
        v17[5] |= (-1 << (v15 + 1)) & 0x1FFC;
      }
      KiIpiSendPacket(0, (int)v31, (__int64)xHalTimerWatchdogStop, 0LL, 0LL, 0LL);
      v16 = KeGetCurrentPrcb();
      while ( v16->PacketBarrier )
        _mm_pause();
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
    }
    else
    {
      if ( Thread->Running )
        KeFlushProcessWriteBuffers(1);
      *CycleTimeStamp = __rdtsc();
      CycleTime = Thread->CycleTime;
      KiReleaseThreadStateLock(v13, v30, v29);
      KiReleaseThreadLockSafe((__int64)Thread);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return CycleTime;
}
