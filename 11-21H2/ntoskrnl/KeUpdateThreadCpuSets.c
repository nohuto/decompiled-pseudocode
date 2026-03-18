/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1403D2F9C
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403D30D0 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

char __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // si
  _QWORD *v4; // rdi
  char result; // al
  ULONG_PTR CurrentThread; // rsi
  bool v7; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KPRCB *v12; // rdi
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  int v25[8]; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+78h] [rbp+38h] BYREF
  _QWORD *v27; // [rsp+80h] [rbp+40h] BYREF

  v27 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v27);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = v27;
  if ( v27 )
  {
    v27 = (_QWORD *)*v27;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v4 - 27), (__int64)&v27);
      v4 = v27;
      ++v3;
      if ( v27 )
        v27 = (_QWORD *)*v27;
      if ( (v3 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v4 );
  }
  result = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v25[0] = 5;
          *(_OWORD *)&v25[1] = 0LL;
          return HalpInterruptSendIpi(v25, 0x2Fu);
        }
      }
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v12 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        v13 = v12->SchedulerAssist;
        if ( v13 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v14 = v13[6];
            v13[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v15 = v12->SchedulerAssist;
        if ( v15 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        do
          KeYieldProcessorEx(&v26, v9, v10, v11);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v11) = 1;
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, v11);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v18 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v18 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v18);
      LOBYTE(v19) = CurrentIrql;
      v7 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v19) == 0;
    }
    else
    {
      v7 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v7 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v7 = (v21[5] & 0xFFFF0003) == 0;
          v21[5] &= 0xFFFF0003;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v7 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
