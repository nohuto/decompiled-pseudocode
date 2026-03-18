/*
 * XREFs of KeSetCpuSetsProcess @ 0x1403D2D98
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x14020F30C (KiValidateCpuSetMasks.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403D3080 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x1403D3208 (KiWriteCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1403D3254 (KiGetProcessCpuSetMaskPointer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v11; // rdi
  char v12; // si
  ULONG_PTR CurrentThread; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *v17; // rdi
  _DWORD *v18; // rcx
  _KTHREAD *NextThread; // rdi
  __int64 v20; // r8
  __int64 v21; // r8
  bool v22; // zf
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned int v32; // [rsp+20h] [rbp-30h] BYREF
  int v33; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-28h] BYREF
  int v35[8]; // [rsp+30h] [rbp-20h] BYREF

  v32 = 0;
  v34 = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v32);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v32, a3, a2);
    KiUpdateThreadCpuSetAffinitiesProcess(a1, &v34);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v34;
    v12 = 0;
    if ( v34 )
    {
      v34 = (_QWORD *)*v34;
      do
      {
        KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v11 - 27), (__int64)&v34);
        v11 = v34;
        ++v12;
        if ( v34 )
          v34 = (_QWORD *)*v34;
        if ( (v12 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
      }
      while ( v11 );
    }
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v35[0] = 5;
          *(_OWORD *)&v35[1] = 0LL;
          HalpInterruptSendIpi(v35, 0x2Fu);
        }
      }
    }
    else
    {
      CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v17 = KeGetCurrentPrcb();
        v33 = 0;
        while ( 1 )
        {
          v18 = v17->SchedulerAssist;
          if ( v18 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v24 = v18[6];
              v18[6] = v24 + 1;
              if ( v24 == -1 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v25 = v17->SchedulerAssist;
          if ( v25 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v26 = v25[6] - 1;
              v25[6] = v26;
              if ( !v26 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          do
            KeYieldProcessorEx(&v33, v14, v15, v16);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        LOBYTE(v16) = 1;
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, v16);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
        {
          v20 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v20 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread, v20);
        LOBYTE(v21) = CurrentIrql;
        v22 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v21) == 0;
      }
      else
      {
        v22 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v22 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            v22 = (v28[5] & 0xFFFF0003) == 0;
            v28[5] &= 0xFFFF0003;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0LL, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
