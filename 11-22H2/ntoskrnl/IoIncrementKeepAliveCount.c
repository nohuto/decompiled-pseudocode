/*
 * XREFs of IoIncrementKeepAliveCount @ 0x1405581C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14055850C (IopAdjustFileObjectKeepAliveCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1409AE970 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // esi
  __int64 v5; // r9
  KIRQL v6; // al
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  int v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = 0;
  v17 = 0LL;
  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v16, (__int64)&v17);
  if ( v4 >= 0 && v16 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(qword_140C5DE30);
      v7 = (_BYTE *)v17;
      v8 = v6;
      ++*(_DWORD *)(v17 + 32);
      if ( !v7[16] )
      {
        v9 = qword_140C5DE20;
        if ( *((PVOID **)qword_140C5DE20 + 1) != &qword_140C5DE20 )
          __fastfail(3u);
        *(_QWORD *)v7 = qword_140C5DE20;
        *((_QWORD *)v7 + 1) = &qword_140C5DE20;
        v9[1] = v7;
        qword_140C5DE20 = v7;
        v7[16] = 1;
        if ( !byte_140C5DE58 )
        {
          byte_140C5DE58 = 1;
          ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
        }
      }
      KxReleaseSpinLock((volatile signed __int64 *)qword_140C5DE30);
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
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v8);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      LOBYTE(v5) = *(_BYTE *)(v17 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v5);
    }
  }
  return (unsigned int)v4;
}
