/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x14032A040
 * Callers:
 *     NtQueryInformationThread @ 0x14079F8C0 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C0580 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C05C0 (KiIpiSendPacket.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14032A0D8 (KeUpdateTotalCyclesCurrentThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  char v8; // r11
  volatile unsigned __int8 State; // r12
  __int64 v10; // rsi
  volatile signed __int32 *v11; // rdi
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 NextProcessor; // r14
  __int64 v16; // rax
  volatile unsigned int v17; // r14d
  unsigned __int8 v18; // cl
  _DWORD *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  volatile unsigned __int64 CycleTime; // r14
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v25; // r9
  int v26; // edx
  bool v27; // zf
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  PULONG64 v31; // [rsp+40h] [rbp-C0h]
  _DWORD v32[68]; // [rsp+50h] [rbp-B0h] BYREF

  v31 = CycleTimeStamp;
  memset(v32, 0, 0x108uLL);
  v28 = 0LL;
  if ( Thread == KeGetCurrentThread() )
    return KeUpdateTotalCyclesCurrentThread(Thread, CycleTimeStamp);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v7 = 4;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v29);
    while ( Thread->ThreadLock );
  }
  while ( 2 )
  {
    v8 = 1;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          State = Thread->State;
          v10 = 0LL;
          v11 = 0LL;
          if ( State != 1 )
            break;
          NextProcessor = Thread->NextProcessor;
          if ( (int)NextProcessor >= 0 )
          {
            v10 = KiProcessorBlock[NextProcessor];
            KiAcquirePrcbLocksForIsolationUnit(v10, 0, &v28);
            v8 = 1;
            if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)NextProcessor )
              goto LABEL_41;
            KiReleasePrcbLocksForIsolationUnit(&v28);
          }
          else
          {
            v16 = (unsigned int)NextProcessor;
            LODWORD(v16) = NextProcessor & 0x7FFFFFFF;
            v30 = 0;
            v11 = *(volatile signed __int32 **)(KiProcessorBlock[v16] + 34888);
            while ( _interlockedbittestandset64(v11, 0LL) )
            {
              do
                KeYieldProcessorEx(&v30);
              while ( *(_QWORD *)v11 );
            }
            v8 = 1;
            if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)NextProcessor )
              goto LABEL_41;
            _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
          }
        }
        if ( Thread->WaitBlockFill6[68] == 2 )
          goto LABEL_21;
        if ( Thread->WaitBlockFill6[68] == 3 )
          break;
        if ( Thread->WaitBlockFill6[68] != 5 )
          goto LABEL_41;
        v12 = Thread->WaitRegister.Flags & 7;
        if ( v12 == v8 || (unsigned __int8)(v12 - 3) <= 3u )
          goto LABEL_41;
        State = 2;
LABEL_21:
        v13 = Thread->NextProcessor;
        if ( (int)v13 >= 0 )
        {
          v10 = KiProcessorBlock[v13];
          KiAcquirePrcbLocksForIsolationUnit(v10, 0, &v28);
          if ( Thread == *(PKTHREAD *)(v10 + 8) )
            goto LABEL_40;
          goto LABEL_23;
        }
      }
      v14 = Thread->NextProcessor;
    }
    while ( (int)v14 < 0 );
    v10 = KiProcessorBlock[v14];
    KiAcquirePrcbLocksForIsolationUnit(v10, 0, &v28);
    if ( Thread != *(PKTHREAD *)(v10 + 16) )
    {
      if ( Thread->WaitBlockFill6[68] == 3 && Thread->NextProcessor == (_DWORD)v14 )
        __fastfail(0x1Eu);
LABEL_23:
      KiReleasePrcbLocksForIsolationUnit(&v28);
      continue;
    }
    break;
  }
LABEL_40:
  v8 = 1;
LABEL_41:
  if ( State == 2 )
  {
    v17 = Thread->NextProcessor;
    if ( v10 )
      KiReleasePrcbLocksForIsolationUnit(&v28);
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    Thread->ThreadLock = 0LL;
    v32[0] = 2097153;
    memset(&v32[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v32, v17);
    v18 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
    {
      v19 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v18 == 12 )
        LODWORD(v20) = 4096;
      else
        v20 = (-1LL << (v18 + 1)) & 0x1FFC;
      v19[5] |= v20;
    }
    KiIpiSendPacket(0, (int)v32, (__int64)xHalTimerWatchdogStop, 0LL, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v21, (__int64)KeGetCurrentPrcb());
    *v31 = __rdtsc();
    CycleTime = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
      KeFlushProcessWriteBuffers(v8);
    *v31 = __rdtsc();
    CycleTime = Thread->CycleTime;
    if ( v10 )
      KiReleasePrcbLocksForIsolationUnit(&v28);
    if ( v11 )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    Thread->ThreadLock = 0LL;
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v23 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = CurrentPrcb->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v27 = (v26 & v25[5]) == 0;
      v25[5] &= v26;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return CycleTime;
}
