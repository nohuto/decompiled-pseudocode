/*
 * XREFs of RtlpHpLargeAllocSize @ 0x1405F36B0
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x1405F30C0 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405F3924 (RtlpHpLargeLockAcquireShared.c)
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSize(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  char v6; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  bool v14; // zf
  int v15; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  signed __int32 v21[18]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  v8 = (unsigned __int8)RtlpHpLargeLockAcquireShared(a1, a3);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a1 + 72;
    else
      v9 = 0LL;
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      v12 = -1LL;
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v10 )
    {
      v11 = *(_QWORD *)v9;
      goto LABEL_10;
    }
    if ( a2 <= v10 )
      break;
    v11 = *(_QWORD *)(v9 + 8);
LABEL_10:
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  if ( a4 )
  {
    if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
    {
      _InterlockedOr(v21, 0);
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    *a4 = v15;
  }
  v12 = (*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v9 + 24);
LABEL_16:
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v14 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      KeAbPostRelease(a1 + 64);
      CurrentThread = KeGetCurrentThread();
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v12;
}
