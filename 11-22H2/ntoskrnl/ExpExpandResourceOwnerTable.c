/*
 * XREFs of ExpExpandResourceOwnerTable @ 0x140341200
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x14023DDA0 (ExpAcquireResourceSharedLite.c)
 *     ExpFindCurrentThread @ 0x1402600E0 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x1403411A4 (ExpFindEmptyEntry.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C82F0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void __fastcall ExpExpandResourceOwnerTable(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  unsigned __int64 v8; // r13
  _DWORD *Pool2; // r13
  KSPIN_LOCK *v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8

  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 )
  {
    v5 = v2[2];
    v7 = v5 + 4;
    if ( v5 + 4 < v5 )
      return;
    v6 = 16LL * v7;
    if ( v6 > 0xFFFFFFFF )
      return;
  }
  else
  {
    v5 = 0;
    LODWORD(v6) = 48;
    v7 = 3;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)a2);
  v8 = *(unsigned __int8 *)(a2 + 16);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)v6, 1632920914LL);
  if ( Pool2 )
  {
    v10 = (KSPIN_LOCK *)(a1 + 96);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), (PKLOCK_QUEUE_HANDLE)a2);
    if ( v2 == *(_DWORD **)(a1 + 16) && (!v2 || v5 == v2[2]) )
    {
      memmove(Pool2, v2, 16LL * v5);
      Pool2[2] = v7;
      *(_QWORD *)(a1 + 16) = Pool2;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)a2);
      v11 = *(unsigned __int8 *)(a2 + 16);
      if ( (_DWORD)KiIrqlFlags )
      {
        v18 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = v19->SchedulerAssist;
          v17 = (v20 & v21[5]) == 0;
          v21[5] &= v20;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      __writecr8(v11);
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      if ( !v5 )
        LOBYTE(v5) = 1;
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)a2);
      v12 = *(unsigned __int8 *)(a2 + 16);
      if ( (_DWORD)KiIrqlFlags )
      {
        v22 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v25 = v23->SchedulerAssist;
          v17 = (v24 & v25[5]) == 0;
          v25[5] &= v24;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      __writecr8(v12);
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    KeDelayExecutionThread(0, 0, &ExShortTime);
    v10 = (KSPIN_LOCK *)(a1 + 96);
  }
  KeGetCurrentThread()->ResourceIndex = v5;
  KeAcquireInStackQueuedSpinLock(v10, (PKLOCK_QUEUE_HANDLE)a2);
}
