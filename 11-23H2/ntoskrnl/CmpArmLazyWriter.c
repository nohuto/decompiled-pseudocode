/*
 * XREFs of CmpArmLazyWriter @ 0x1402E7524
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x1403B4A38 (CmpEnableLazyFlush.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CmpArmLazyWriter(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  struct _KTIMER *v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  int v15; // ecx
  int v16; // ecx
  ULONG v17; // r9d
  __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf

  if ( !CmpWorkerDataInitialized || CmpHoldLazyFlush )
    return;
  LOBYTE(a1) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  v7 = UnbiasedInterruptTime;
  if ( a2 )
  {
    v8 = *a2;
    v9 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v6 + 45) + v7;
    if ( *a2 >= v9 )
      v8 = v9;
    v10 = v8;
  }
  else if ( a3 )
  {
    v10 = UnbiasedInterruptTime + 20000000;
  }
  else
  {
    v10 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v6 + 45) + UnbiasedInterruptTime;
  }
  v11 = 192 * v6;
  v12 = &CmpLazyWriterData + 3 * v6;
  v13 = KeAcquireSpinLockRaiseToDpc(&v12[2].DueTime.QuadPart);
  v14 = *(_QWORD *)((char *)&CmpLazyWriterData + v11 + 168) & 7LL;
  if ( v14 <= 3 )
  {
    if ( !(_DWORD)v14 )
    {
      *(_QWORD *)((char *)&CmpLazyWriterData + v11 + 168) = 1LL;
      if ( !a3 )
      {
        v17 = *(_DWORD *)((char *)&CmpLazyWriterData + v11 + 184);
        v18 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v11 + 180);
LABEL_22:
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v11),
          (LARGE_INTEGER)v18,
          0,
          v17,
          (PKDPC)((char *)&CmpLazyWriterData + v11 + 64));
        goto LABEL_11;
      }
LABEL_25:
      v18 = -20000000LL;
      v17 = 1000;
      goto LABEL_22;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 || v16 == 1 && v10 < (*(_QWORD *)((char *)&CmpLazyWriterData + v11 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
        *(_QWORD *)((char *)&CmpLazyWriterData + v11 + 168) = v10 & 0xFFFFFFFFFFFFFFF8uLL | 3;
      goto LABEL_11;
    }
    if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v11)) )
    {
      *(_QWORD *)((char *)&CmpLazyWriterData + v11 + 168) = 1LL;
      goto LABEL_25;
    }
  }
LABEL_11:
  KxReleaseSpinLock((volatile signed __int64 *)&v12[2].DueTime);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v13 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v23 = (v22 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v13);
}
