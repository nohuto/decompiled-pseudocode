/*
 * XREFs of MiProcessDeleteOnClose @ 0x14058B784
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403CBBF0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     MiUnlinkUnusedControlArea @ 0x14028AF80 (MiUnlinkUnusedControlArea.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14038868C (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  _QWORD *v1; // rbp
  volatile LONG *v2; // r14
  int v3; // r12d
  unsigned int v4; // r13d
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  __int64 inserted; // rax
  volatile LONG *v14; // rcx
  __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  __int64 result; // rax
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  struct _FILE_OBJECT *v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+78h] [rbp+10h] BYREF

  v23 = 0LL;
  v1 = (_QWORD *)(a1 + 1600);
  v24 = 0LL;
  v2 = (volatile LONG *)(a1 + 1344);
  v3 = 0;
  v4 = -1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(v2);
    if ( (_QWORD *)*v1 == v1 )
      break;
    if ( (++v3 & 0x3F) == 0 && *(_DWORD *)(a1 + 1348) >= v4 )
    {
      *(_BYTE *)(a1 + 1680) = 1;
      KiSetTimerEx(a1 + 1616, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
      goto LABEL_33;
    }
    v4 = *(_DWORD *)(a1 + 1348);
    v7 = *v1 - 8LL;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v7 + 72)) )
    {
      MiUnlinkUnusedControlArea(v7);
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
      {
        MiDestroySection(v7, v6, 0LL);
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v7 + 76) )
      {
        inserted = MiInsertUnusedSegment(v7);
        v14 = (volatile LONG *)(v7 + 72);
        v15 = inserted;
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v12 = (v19 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v19;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        v1 = (_QWORD *)(a1 + 1600);
        if ( v15 )
        {
          MiReturnCrossPartitionSectionCharges(a1, 1LL, v15);
          goto LABEL_14;
        }
      }
      else
      {
        v23 = 0LL;
        if ( (unsigned int)MiFlushControlArea((volatile LONG *)v7, v6, (__int64 *)&v24, &v23) )
          MiDestroySection(v7, v6, v23);
        v1 = (_QWORD *)(a1 + 1600);
        if ( v24 )
        {
          MiReleaseControlAreaWaiters(v24);
          goto LABEL_14;
        }
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v8 = KeGetCurrentIrql();
          if ( v8 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v8 >= 2u )
          {
            v9 = KeGetCurrentPrcb();
            v10 = v9->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v12 = (v11 & v10[5]) == 0;
            v10[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v9);
          }
        }
      }
      __writecr8(v6);
LABEL_14:
      v1 = (_QWORD *)(a1 + 1600);
    }
  }
  *(_BYTE *)(a1 + 1680) = 0;
LABEL_33:
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v22 = v21->SchedulerAssist;
        v12 = ((unsigned int)result & v22[5]) == 0;
        v22[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
    }
  }
  __writecr8(v6);
  return result;
}
